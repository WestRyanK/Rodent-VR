// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StopConditions/StopCondition.h"
#include "UObject/NoExportTypes.h"
#include "EnterRegionStopCondition.generated.h"

/**
 *
 */
UCLASS()
class UEnterRegionStopCondition : public UStopCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetEnterRegionDelaySec, BlueprintSetter = SetEnterRegionDelaySec)
		float EnterRegionDelaySec;
	TMap<int, int> EnterRegionCounts;
	TMap<int, int> EnterRegionStopConditionCounts;

	UFUNCTION()
		void OnRewardRegionEnter(int RegionEnteredId);

public:
	~UEnterRegionStopCondition();

	void Init();

	virtual bool IsStopConditionMet(AGameMode* GameMode);

	UFUNCTION(BlueprintCallable)
		void ClearRegionCounts();
	UFUNCTION(BlueprintCallable)
		void RemoveRegionCount(int RegionId);
	UFUNCTION(BlueprintCallable)
		void AddRegionCount(int RegionId, int EnterRegionCount);
	UFUNCTION(BlueprintGetter)
		TMap<int, int> GetEnterRegionCounts();
	UFUNCTION(BlueprintGetter)
		float GetEnterRegionDelaySec();
	UFUNCTION(BlueprintSetter)
		void SetEnterRegionDelaySec(float EnterRegionDelaySecValue);

	virtual FString GetConditionType();

};
