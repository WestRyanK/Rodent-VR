// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class ARodentGameMode;

/**
 * 
 */
class IStopCondition
{
public:
	IStopCondition();
	virtual ~IStopCondition() = 0;
	virtual bool IsStopConditionMet(ARodentGameMode* GameMode) = 0;
};
