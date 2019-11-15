// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IStopCondition.h"
#include "UObject/NoExportTypes.h"
#include "EnterRegionStopCondition.generated.h"

/**
 * 
 */
UCLASS()
class UEnterRegionStopCondition : public UObject, public IStopCondition
{
	GENERATED_BODY()

private:
	float EnterRegionDelaySec;
	TMap<int, int> EnterRegionCounts;
	TMap<int, int> EnterRegionStopCounts;

	UFUNCTION()
	void OnRewardRegionEnter(int RegionEnteredId);

public:
	UEnterRegionStopCondition();
	~UEnterRegionStopCondition();

	UFUNCTION()
	void Init(float EnterRegionDelaySec, TMap<int, int> EnterRegionStopCounts);

	virtual bool IsStopConditionMet(ARodentGameMode* GameMode);
};
