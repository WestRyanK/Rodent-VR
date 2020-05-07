// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StopConditions/StopCondition.h"
#include "RodentGameMode.h"
#include "TimeLimitStopCondition.generated.h"

/**
 * 
 */
UCLASS()
class UTimeLimitStopCondition : public UStopCondition
{
	GENERATED_BODY()
	
private:
	float StartTime;
	float TimeLimitSec;

public:
	virtual bool IsStopConditionMet(ARodentGameMode* GameMode);
	float GetStartTime();
	void SetStartTime(float StartTimeValue);
	float GetTimeLimitSec();
	void SetTimeLimitSec(float TimeLimitSecValue);
};
