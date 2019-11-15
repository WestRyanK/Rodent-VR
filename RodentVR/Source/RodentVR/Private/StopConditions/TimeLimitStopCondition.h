// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IStopCondition.h"

/**
 * 
 */
class TimeLimitStopCondition : public IStopCondition
{
private:
	float StartTime;
	float TimeLimitSec;
public:
	TimeLimitStopCondition(float TimeLimitSec, float StartTime);
	virtual ~TimeLimitStopCondition();
	virtual bool IsStopConditionMet(ARodentGameMode* GameMode);
};
