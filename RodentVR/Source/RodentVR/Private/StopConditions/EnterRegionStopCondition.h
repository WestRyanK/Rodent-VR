// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StopConditions/StopCondition.h"
#include "Settings/RegionSettings.h"
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
		TMap<URegionSettings*, int> EnterRegionCounts;
	UPROPERTY(BlueprintGetter = GetEnterRegionStopConditionCounts)
	TMap<URegionSettings*, int> EnterRegionStopConditionCounts;
	UPROPERTY(BlueprintGetter = GetRequireAllConditions, BlueprintSetter = SetRequireAllConditions)
		bool RequireAllConditions;

	UFUNCTION()
		void OnRegionEnter(URegionSettings* RegionEntered);

public:
	~UEnterRegionStopCondition();

	virtual void Init(AGameMode* GameMode);

	virtual bool IsStopConditionMet(AGameMode* GameMode);

	UFUNCTION(BlueprintCallable)
		void ClearRegionStopConditionCounts();
	UFUNCTION(BlueprintCallable)
		void RemoveRegionStopConditionCount(URegionSettings* Region);
	UFUNCTION(BlueprintCallable)
		void AddRegionStopConditionCount(URegionSettings* Region, int EnterRegionCount);
	UFUNCTION(BlueprintGetter)
		TMap<URegionSettings*, int> GetEnterRegionStopConditionCounts();
	UFUNCTION(BlueprintGetter)
		float GetEnterRegionDelaySec();
	UFUNCTION(BlueprintSetter)
		void SetEnterRegionDelaySec(float EnterRegionDelaySecValue);
	UFUNCTION(BlueprintGetter)
		bool GetRequireAllConditions();
	UFUNCTION(BlueprintSetter)
		void SetRequireAllConditions(bool RequireAllConditionsValue);

	virtual FString GetConditionType();

};
