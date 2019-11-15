// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorRecorderComponent.h"
#include "RewardRegion.h"
#include "RodentGameMode.h"
#include "CoreMinimal.h"
#include <iostream>
#include <fstream>
#include "Engine.h"

// Sets default values for this component's properties
UBehaviorRecorderComponent::UBehaviorRecorderComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UBehaviorRecorderComponent::BeginPlay()
{
	Super::BeginPlay();

	ARewardRegion::OnRewardRegionEnterDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnRewardRegionEnter);
	ARodentGameMode::OnMazeLoadedDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnMazeLoaded);
	ARodentGameMode::OnMazeFinishedDelegate.AddDynamic(this, &UBehaviorRecorderComponent::OnMazeFinished);
}

void UBehaviorRecorderComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	this->Save();
	ARewardRegion::OnRewardRegionEnterDelegate.Remove(this, FName("OnRewardRegionEnter"));
	ARodentGameMode::OnMazeLoadedDelegate.Remove(this, FName("OnMazeLoaded"));
}

void UBehaviorRecorderComponent::OnMazeLoaded()
{
	this->Snapshots.Empty();
	this->StartTimeSec = this->GetWorld()->GetTimeSeconds();
	this->CurrentRegion = -1;
}

void UBehaviorRecorderComponent::Save()
{
	ARodentGameMode* GameMode = (ARodentGameMode*)GetWorld()->GetAuthGameMode();
	this->Save(GameMode->BehaviorRecordingFilename);
}

void UBehaviorRecorderComponent::OnMazeFinished()
{
	this->Save();
}

void UBehaviorRecorderComponent::Save(FString Filename)
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
			<< Snapshot.GetCurrentRegion() << Tab
			<< Snapshot.GetPosition().X << Tab << Snapshot.GetPosition().Y << Tab << Snapshot.GetPosition().Z << Tab 
			<< Snapshot.GetForward().X << Tab << Snapshot.GetForward().Y << Tab << Snapshot.GetForward().Z 
			<< std::endl;
	}
	Output.close();
}


void UBehaviorRecorderComponent::OnRewardRegionEnter(int RegionEnteredId)
{
	this->CurrentRegion = RegionEnteredId;
}


// Called every frame
void UBehaviorRecorderComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float Time = this->GetWorld()->GetTimeSeconds() - this->StartTimeSec;
	AActor* OwnerActor = this->GetOwner();
	FVector Position = OwnerActor->GetActorLocation();
	FVector Forward = OwnerActor->GetActorForwardVector();
	int RegionId = this->CurrentRegion;

	BehaviorSnapshot Snapshot = BehaviorSnapshot(Time, Position, Forward, RegionId);
	this->Snapshots.Add(Snapshot);
}

