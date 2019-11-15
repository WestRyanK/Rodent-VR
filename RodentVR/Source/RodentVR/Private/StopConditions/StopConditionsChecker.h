// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RodentGameMode.h"
#include "StopConditions/StopCondition.h"
#include "StopConditionsChecker.generated.h"

/**
 * 
 */
UCLASS()
class UStopConditionsChecker : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	TArray<UStopCondition*> StopConditions;
public:
	~UStopConditionsChecker();

	bool AreStopConditionsMet(ARodentGameMode* GameMode);
	void AddStopCondition(UStopCondition* StopCondition);
};
