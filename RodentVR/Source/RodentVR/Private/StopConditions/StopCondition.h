// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RodentGameMode.h"
#include "StopCondition.generated.h"

/**
 * 
 */
UCLASS()
class UStopCondition : public UObject
{
	GENERATED_BODY()
	
public: 
	virtual bool IsStopConditionMet(ARodentGameMode* GameMode);
};
