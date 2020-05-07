// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeLimitStopCondition.h"

bool UTimeLimitStopCondition::IsStopConditionMet(ARodentGameMode* GameMode)
{
	return GameMode->GetWorld()->TimeSeconds > this->StartTime + this->TimeLimitSec;
}

float UTimeLimitStopCondition::GetStartTime()
{
	return this->StartTime;
}

void UTimeLimitStopCondition::SetStartTime(float StartTimeValue)
{
	this->TimeLimitSec = StartTimeValue;
}

float UTimeLimitStopCondition::GetTimeLimitSec()
{
	return this->TimeLimitSec;
}

void UTimeLimitStopCondition::SetTimeLimitSec(float TimeLimitSecValue)
{
	this->TimeLimitSec = TimeLimitSecValue;
}
