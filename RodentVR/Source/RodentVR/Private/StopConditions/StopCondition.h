// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RodentGameMode.h"
#include "StopCondition.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UStopCondition : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter=GetConditionType)
	FString ConditionType;
	
public: 
	virtual bool IsStopConditionMet(ARodentGameMode* GameMode);
	UFUNCTION(BlueprintGetter)
		virtual FString GetConditionType();
};
