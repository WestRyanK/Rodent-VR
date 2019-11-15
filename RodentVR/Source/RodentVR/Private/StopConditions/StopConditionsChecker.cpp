// Fill out your copyright notice in the Description page of Project Settings.


#include "StopConditionsChecker.h"

UStopConditionsChecker::~UStopConditionsChecker()
{
	this->StopConditions.Empty();
}

bool UStopConditionsChecker::AreStopConditionsMet(ARodentGameMode* GameMode)
{
	for (UStopCondition* StopCondition : this->StopConditions)
	{
		if (StopCondition->IsStopConditionMet(GameMode))
		{
			return true;
		}
	}
	return false;
}

void UStopConditionsChecker::AddStopCondition(UStopCondition* StopCondition)
{
	this->StopConditions.Add(StopCondition);
}
