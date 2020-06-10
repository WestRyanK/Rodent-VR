// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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

	bool AreStopConditionsMet(AGameMode* GameMode);
	void AddStopCondition(UStopCondition* StopCondition);
	void SetStopConditions(TArray<UStopCondition*> StopConditionsValue);
};
