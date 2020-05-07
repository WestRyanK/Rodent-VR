// Fill out your copyright notice in the Description page of Project Settings.

#include "EnterRegionStopCondition.h"
#include "RewardRegion.h"

UEnterRegionStopCondition::~UEnterRegionStopCondition()
{
	ARewardRegion::OnRewardRegionEnterDelegate.Remove(this, FName("OnRewardRegionEnter"));
}

void UEnterRegionStopCondition::Init()
{
	ARewardRegion::OnRewardRegionEnterDelegate.AddDynamic(this, &UEnterRegionStopCondition::OnRewardRegionEnter);
}

bool UEnterRegionStopCondition::IsStopConditionMet(ARodentGameMode* GameMode)
{
	TArray<int> keys;
	this->EnterRegionStopConditionCounts.GetKeys(keys);

	for (auto key : keys)
	{
		if (!this->EnterRegionCounts.Contains(key) || this->EnterRegionCounts[key] < this->EnterRegionStopConditionCounts[key])
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

void UEnterRegionStopCondition::ClearRegionCounts()
{
	this->EnterRegionStopConditionCounts.Empty();
	this->EnterRegionCounts.Empty();
}

void UEnterRegionStopCondition::RemoveRegionCount(int RegionId)
{
	this->EnterRegionStopConditionCounts.Remove(RegionId);
	this->EnterRegionCounts.Empty();
}

void UEnterRegionStopCondition::AddRegionCount(int RegionId, int EnterRegionCount)
{
	this->EnterRegionStopConditionCounts.Add(RegionId, EnterRegionCount);
	this->EnterRegionCounts.Empty();
}

void UEnterRegionStopCondition::SetEnterRegionDelaySec(float EnterRegionDelaySecValue)
{
	this->EnterRegionDelaySec = EnterRegionDelaySecValue;
}

float UEnterRegionStopCondition::GetEnterRegionDelaySec()
{
	return this->EnterRegionDelaySec;
}
