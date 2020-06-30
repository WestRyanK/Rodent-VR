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
	PrimaryComponentTick.bCanEverTick = true;
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
}

void UBehaviorRecorderComponent::AddDelegates()
{
	this->RemoveDelegates();
	ARegion::OnRegionEnterDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnRegionEnter);
	ASimulatorGameMode::OnMazeLoadedDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnMazeLoaded);
	ASimulatorGameMode::OnMazeFinishedDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnMazeFinished);
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
			this->Save(BehaviorRecordingFileName);
		}
	}
}

void UBehaviorRecorderComponent::OnMazeFinished()
{
	this->Save();
}

void UBehaviorRecorderComponent::Save(FString Filename)
{
	bool IsValidPath = FPaths::ValidatePath(Filename);
	if (IsValidPath && !Filename.IsEmpty())
	{
		std::ofstream Output;
		Output.open(*Filename);
		char Tab = '\t';

		Output << "#Snapshot Timestamp\tTrigger Region Identifier\tPosition.X\tPosition.Y\tPosition.Z\tForward.X\tForward.Y\tForward.Z" << std::endl;
		for (int i = 0; i < this->Snapshots.Num(); i++)
		{
			BehaviorSnapshot Snapshot = this->Snapshots[i];
			Output
				<< Snapshot.GetTimestamp() << Tab
				<< TCHAR_TO_UTF8(*(Snapshot.GetCurrentRegion())) << Tab
				<< Snapshot.GetPosition().X << Tab << Snapshot.GetPosition().Y << Tab << Snapshot.GetPosition().Z << Tab
				<< Snapshot.GetForward().X << Tab << Snapshot.GetForward().Y << Tab << Snapshot.GetForward().Z
				<< std::endl;
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
void UBehaviorRecorderComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float Time = this->GetWorld()->GetTimeSeconds() - this->StartTimeSec;
	AActor* OwnerActor = this->GetOwner();
	FVector Position = OwnerActor->GetActorLocation();
	FVector Forward = OwnerActor->GetActorForwardVector();
    FString RegionId = this->CurrentRegion;

	BehaviorSnapshot Snapshot = BehaviorSnapshot(Time, Position, Forward, RegionId);
	this->Snapshots.Add(Snapshot);
}

