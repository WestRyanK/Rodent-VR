// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorRecorderComponent.h"
#include "RewardRegion.h"
#include "RodentGameMode.h"
#include "CoreMinimal.h"
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
}

void UBehaviorRecorderComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	ARewardRegion::OnRewardRegionEnterDelegate.Remove(this, FName("OnRewardRegionEnter"));
	ARodentGameMode::OnMazeLoadedDelegate.Remove(this, FName("OnMazeLoaded"));
}

void UBehaviorRecorderComponent::OnMazeLoaded()
{
	this->StartTimeSec = this->GetWorld()->GetTimeSeconds();
	this->CurrentRegion = -1;
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
	int CurrentRegion = this->CurrentRegion;

	BehaviorSnapshot Snapshot = BehaviorSnapshot(Time, Position, Forward, CurrentRegion);
	this->Snapshots.Add(Snapshot);
}

