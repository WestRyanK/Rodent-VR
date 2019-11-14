// Fill out your copyright notice in the Description page of Project Settings.


#include "RewardRegion.h"


FRewardRegionEnterDelegate ARewardRegion::OnRewardRegionEnterDelegate;


// Sets default values
ARewardRegion::ARewardRegion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARewardRegion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARewardRegion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARewardRegion::OnRewardRegionEnter(int RegionEnteredId)
{
	ARewardRegion::OnRewardRegionEnterDelegate.Broadcast(RegionEnteredId);
}
