// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeLimitStopCondition.h"

void UTimeLimitStopCondition::Init(float timeLimitSec, float startTime)
{
	this->TimeLimitSec = timeLimitSec;
	this->StartTime = startTime;
}


bool UTimeLimitStopCondition::IsStopConditionMet(ARodentGameMode* GameMode)
{
	return GameMode->GetWorld()->TimeSeconds > this->StartTime + this->TimeLimitSec;
}
