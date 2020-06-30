// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StopConditions/StopCondition.h"
#include "TimeLimitStopCondition.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class UTimeLimitStopCondition : public UStopCondition
{
	GENERATED_BODY()

private:
	float StartTime;
	UPROPERTY(BlueprintGetter = GetTimeLimitSec, BlueprintSetter = SetTimeLimitSec)
		float TimeLimitSec;

public:
	virtual bool IsStopConditionMet(AGameMode* GameMode);
	float GetStartTime();
	void SetStartTime(float StartTimeValue);
	UFUNCTION(BlueprintGetter)
		float GetTimeLimitSec();
	UFUNCTION(BlueprintSetter)
		void SetTimeLimitSec(float TimeLimitSecValue);

	virtual FString GetConditionType();

	virtual void Init(AGameMode* GameMode);
};
