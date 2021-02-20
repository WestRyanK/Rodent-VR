// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorRecorderComponent.h"
#include "Simulator/Region.h"
#include "Simulator/SimulatorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Settings/MazeSettings.h"
#include "Core/RodentVRGameInstance.h"
#include "CoreMinimal.h"
#include "Misc/Paths.h"
#include <iostream>
#include <fstream>
#include "Engine.h"

// Sets default values for this component's properties
UBehaviorRecorderComponent::UBehaviorRecorderComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	//PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UBehaviorRecorderComponent::BeginPlay()
{
	Super::BeginPlay();

	this->AddDelegates();
	this->OnMazeLoaded();
}

void UBehaviorRecorderComponent::RemoveDelegates()
{
	ARegion::OnRegionEnterDelegate.Remove(this, FName("OnRegionEnter"));
	ASimulatorGameMode::OnMazeLoadedDelegate.Remove(this, FName("OnMazeLoaded"));
	ASimulatorGameMode::OnMazeFinishedDelegate.Remove(this, FName("OnMazeFinished"));

	GetWorld()->GetTimerManager().ClearTimer(RecordBehaviorTimerHandle);
}

void UBehaviorRecorderComponent::AddDelegates()
{
	this->RemoveDelegates();
	ARegion::OnRegionEnterDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnRegionEnter);
	ASimulatorGameMode::OnMazeLoadedDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnMazeLoaded);
	ASimulatorGameMode::OnMazeFinishedDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnMazeFinished);
	
	float TimeBetweenSnapshots = 0.0f;
	URodentVRGameInstance* GameInstance = Cast<URodentVRGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (IsValid(GameInstance))
	{
		UMazeSettings* MazeSettings = GameInstance->GetCurrentMaze();
		if (IsValid(MazeSettings))
		{
			TimeBetweenSnapshots = MazeSettings->GetBehaviorRecordingTimeBetweenSnapshots();
		}
	}

	GetWorld()->GetTimerManager().SetTimer(RecordBehaviorTimerHandle, this, &UBehaviorRecorderComponent::AddSnapshot, TimeBetweenSnapshots, true);
}

void UBehaviorRecorderComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	this->Save();
	this->RemoveDelegates();
}

void UBehaviorRecorderComponent::OnMazeLoaded()
{
	this->Snapshots.Empty();
	this->StartTimeSec = this->GetWorld()->GetTimeSeconds();
	this->CurrentRegion = TEXT("");
}

void UBehaviorRecorderComponent::Save()
{
	URodentVRGameInstance* GameInstance = Cast<URodentVRGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (IsValid(GameInstance))
	{
		UMazeSettings* MazeSettings = GameInstance->GetCurrentMaze();
		if (IsValid(MazeSettings))
		{
			FString BehaviorRecordingFileName = MazeSettings->GetBehaviorRecordingFileName();
			BehaviorRecordingFileName = this->AppendDateTimeToFileName(BehaviorRecordingFileName, FDateTime::Now());
			FString MazeFileName = MazeSettings->GetMazeSettingsFileName();
			FString SettingsFileName = GameInstance->GetRodentVRSettings()->GetSettingsFileName();
			this->Save(BehaviorRecordingFileName, SettingsFileName, MazeFileName);
		}
	}
}

FString UBehaviorRecorderComponent::AppendDateTimeToFileName(FString FileName, FDateTime DateTime)
{
	FString FileNameWithoutExtension;
	FString FileExtension;
	FileName.Split(TEXT("."), &FileNameWithoutExtension, &FileExtension, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	FString DateTimeString = FString::Printf(TEXT("%04d_%02d_%02d_%02d_%02d_%02d"), DateTime.GetYear(), DateTime.GetMonth(), DateTime.GetDay(), DateTime.GetHour(), DateTime.GetMinute(), DateTime.GetSecond());
	FString AppendedFileName = FileNameWithoutExtension + TEXT("_") + DateTimeString + TEXT(".") + FileExtension;
	return AppendedFileName;
}

void UBehaviorRecorderComponent::OnMazeFinished()
{
	this->Save();
}

void UBehaviorRecorderComponent::Save(FString FileName, FString SettingsFileName, FString MazeFileName)
{
	bool IsValidPath = FPaths::ValidatePath(FileName);
	if (IsValidPath && !FileName.IsEmpty())
	{
		std::ofstream Output;
		Output.open(*FileName);
		char Tab = '\t';

		Output << std::string(TCHAR_TO_UTF8(*SettingsFileName)) << std::endl;
		Output << std::string(TCHAR_TO_UTF8(*MazeFileName)) << std::endl;
		Output << "#Snapshot Timestamp\tTrigger Region Identifier\tPosition.X\tPosition.Y\tPosition.Z\tForward.X\tForward.Y\tForward.Z" << std::endl;
		for (int i = 0; i < this->Snapshots.Num(); i++)
		{
			UBehaviorSnapshot* Snapshot = this->Snapshots[i];
			if (IsValid(Snapshot))
			{
				Output
					<< Snapshot->GetTimestamp() << Tab
					<< TCHAR_TO_UTF8(*(Snapshot->GetCurrentRegion())) << Tab
					<< Snapshot->GetPosition().X << Tab << Snapshot->GetPosition().Y << Tab << Snapshot->GetPosition().Z << Tab
					<< Snapshot->GetForward().X << Tab << Snapshot->GetForward().Y << Tab << Snapshot->GetForward().Z
					<< std::endl;
			}
		}
		Output.close();
	}
}


void UBehaviorRecorderComponent::OnRegionEnter(URegionSettings* RegionEntered)
{
	if (IsValid(RegionEntered))
	{
		this->CurrentRegion = RegionEntered->GetRegionId();
	}
	else
	{
		this->CurrentRegion = TEXT("");
	}
}


// Called every frame
//void UBehaviorRecorderComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//}

void UBehaviorRecorderComponent::AddSnapshot()
{
	float Time = this->GetWorld()->GetTimeSeconds() - this->StartTimeSec;
	AActor* OwnerActor = this->GetOwner();
	FVector Position = OwnerActor->GetActorLocation();
	FVector Forward = OwnerActor->GetActorForwardVector();
    FString RegionId = this->CurrentRegion;

	UBehaviorSnapshot* Snapshot = UBehaviorSnapshot::CreateBehaviorSnapshot(this, Time, Position, Forward, RegionId);
	this->Snapshots.Add(Snapshot);
}

