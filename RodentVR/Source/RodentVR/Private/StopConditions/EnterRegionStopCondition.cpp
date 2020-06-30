// Fill out your copyright notice in the Description page of Project Settings.

#include "EnterRegionStopCondition.h"
#include "Simulator/Region.h"

UEnterRegionStopCondition::~UEnterRegionStopCondition()
{
	ARegion::OnRegionEnterDelegate.Remove(this, FName("OnRegionEnter"));
}

void UEnterRegionStopCondition::Init(AGameMode* GameMode)
{
	ARegion::OnRegionEnterDelegate.Remove(this, FName("OnRegionEnter"));
	ARegion::OnRegionEnterDelegate.AddDynamic(this, &UEnterRegionStopCondition::OnRegionEnter);

	this->EnterRegionCounts.Empty();
}

bool UEnterRegionStopCondition::IsStopConditionMet(AGameMode* GameMode)
{
	TArray<URegionSettings*> Keys;
	this->EnterRegionStopConditionCounts.GetKeys(Keys);

	for (auto Key : Keys)
	{
		bool WasRegionEnteredEnough = (this->EnterRegionCounts.Contains(Key) && this->EnterRegionCounts[Key] >= this->EnterRegionStopConditionCounts[Key]);
		if (this->RequireAllConditions && !WasRegionEnteredEnough)
		{
			return false;
		}
		if (!this->RequireAllConditions && WasRegionEnteredEnough)
		{
			return true;
		}
	}

	return this->RequireAllConditions;
}

void UEnterRegionStopCondition::OnRegionEnter(URegionSettings* RegionEnteredId)
{
	if (!this->EnterRegionCounts.Contains(RegionEnteredId))
	{
		this->EnterRegionCounts.Add(RegionEnteredId, 0);
	}

	this->EnterRegionCounts[RegionEnteredId] += 1;
}

void UEnterRegionStopCondition::ClearRegionStopConditionCounts()
{
	this->EnterRegionStopConditionCounts.Empty();
	this->EnterRegionCounts.Empty();
}

void UEnterRegionStopCondition::RemoveRegionStopConditionCount(URegionSettings* Region)
{
	this->EnterRegionStopConditionCounts.Remove(Region);
	this->EnterRegionCounts.Empty();
}

void UEnterRegionStopCondition::AddRegionStopConditionCount(URegionSettings* Region, int EnterRegionCount)
{
	this->EnterRegionStopConditionCounts.Add(Region, EnterRegionCount);
	this->EnterRegionCounts.Empty();
}

TMap<URegionSettings*, int> UEnterRegionStopCondition::GetEnterRegionStopConditionCounts()
{
	return this->EnterRegionStopConditionCounts;
}

void UEnterRegionStopCondition::SetEnterRegionDelaySec(float EnterRegionDelaySecValue)
{
	this->EnterRegionDelaySec = EnterRegionDelaySecValue;
}

float UEnterRegionStopCondition::GetEnterRegionDelaySec()
{
	return this->EnterRegionDelaySec;
}

FString UEnterRegionStopCondition::GetConditionType()
{
	return TEXT("EnterRegion");
}

bool UEnterRegionStopCondition::GetRequireAllConditions()
{
	return this->RequireAllConditions;
}

void UEnterRegionStopCondition::SetRequireAllConditions(bool RequireAllConditionsValue)
{
	this->RequireAllConditions = RequireAllConditionsValue;
}
