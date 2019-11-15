// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeLimitStopCondition.h"
#include "RodentGameMode.h"

TimeLimitStopCondition::TimeLimitStopCondition(float TimeLimitSec, float StartTime) : 
	IStopCondition(),
	TimeLimitSec(TimeLimitSec)
{
	this->StartTime = StartTime;
}

TimeLimitStopCondition::~TimeLimitStopCondition()
{
}

bool TimeLimitStopCondition::IsStopConditionMet(ARodentGameMode* GameMode)
{
	return GameMode->GetWorld()->TimeSeconds > this->StartTime + this->TimeLimitSec;
}
