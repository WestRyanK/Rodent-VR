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
	void Init(float TimeLimitSec, float StartTime);
	virtual bool IsStopConditionMet(ARodentGameMode* GameMode);
};
