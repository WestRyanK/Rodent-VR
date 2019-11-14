// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class ARodentGameMode;
class IStopCondition;
/**
 * 
 */
class StopConditionsChecker
{
private:
	TArray<IStopCondition*> StopConditions;
public:
	StopConditionsChecker();
	~StopConditionsChecker();
	bool AreStopConditionsMet(ARodentGameMode* GameMode);
	void AddStopCondition(IStopCondition* StopCondition);
};
