// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorSnapshot.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class UBehaviorSnapshot : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetTimestamp)
		float Timestamp;
	UPROPERTY(BlueprintGetter = GetPosition)
		FVector Position;
	UPROPERTY(BlueprintGetter = GetForward)
		FVector Forward;
	UPROPERTY(BlueprintGetter = GetCurrentRegion)
		FString CurrentRegion;

public:
	UFUNCTION(BlueprintCallable)
		static UBehaviorSnapshot* CreateBehaviorSnapshot(float TimestampVal, FVector PositionVal, FVector ForwardVal, FString CurrentRegionVal);

	UFUNCTION(BlueprintGetter)
		float GetTimestamp();
	UFUNCTION(BlueprintGetter)
		FVector GetPosition();
	UFUNCTION(BlueprintGetter)
		FVector GetForward();
	UFUNCTION(BlueprintGetter)
		FString GetCurrentRegion();
};
