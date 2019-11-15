// Fill out your copyright notice in the Description page of Project Settings.

#include "EnterRegionStopCondition.h"
#include "RewardRegion.h"

UEnterRegionStopCondition::UEnterRegionStopCondition() 
{
}

UEnterRegionStopCondition::~UEnterRegionStopCondition()
{
}

void UEnterRegionStopCondition::Init(float EnterRegionDelaySec, TMap<int, int> EnterRegionStopCounts)
{
	this->EnterRegionDelaySec = EnterRegionDelaySec;
	this->EnterRegionStopCounts = EnterRegionStopCounts;
	ARewardRegion::OnRewardRegionEnterDelegate.AddDynamic(this, &UEnterRegionStopCondition::OnRewardRegionEnter);
}

bool UEnterRegionStopCondition::IsStopConditionMet(ARodentGameMode* GameMode)
{
	TArray<int> keys;
	this->EnterRegionStopCounts.GetKeys(keys);

	for (auto key : keys)
	{
		if (!this->EnterRegionCounts.Contains(key) || this->EnterRegionCounts[key] < this->EnterRegionStopCounts[key])
			return false;
	}

	return true;
}

void UEnterRegionStopCondition::OnRewardRegionEnter(int RegionEnteredId)
{
	if (!this->EnterRegionCounts.Contains(RegionEnteredId))
	{
		this->EnterRegionCounts.Add(RegionEnteredId, 0);
	}

	this->EnterRegionCounts[RegionEnteredId] += 1;
}
