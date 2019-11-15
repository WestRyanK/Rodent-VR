// Fill out your copyright notice in the Description page of Project Settings.

#include "StopConditionsChecker.h"
#include "IStopCondition.h"
#include "RodentGameMode.h"

StopConditionsChecker::StopConditionsChecker()
{
}

StopConditionsChecker::~StopConditionsChecker()
{
}

bool StopConditionsChecker::AreStopConditionsMet(ARodentGameMode* GameMode)
{
	for (IStopCondition* StopCondition : this->StopConditions)
	{
		if (StopCondition->IsStopConditionMet(GameMode))
		{

			return true;
		}
	}
	return false;
}

void StopConditionsChecker::AddStopCondition(IStopCondition* StopCondition)
{
	this->StopConditions.Add(StopCondition);
}
