// Fill out your copyright notice in the Description page of Project Settings.



#include "TimeLimitStopCondition.h"
#include "GameFramework/GameMode.h"

bool UTimeLimitStopCondition::IsStopConditionMet(AGameMode* GameMode)
{
	UWorld* World = GameMode->GetWorld();
	if (IsValid(World))
	{
		float CurrentTime = World->TimeSeconds;
		bool IsMet = (CurrentTime > this->StartTime + this->TimeLimitSec);
		return IsMet;
	}
	return false;
}

float UTimeLimitStopCondition::GetStartTime()
{
	return this->StartTime;
}

void UTimeLimitStopCondition::SetStartTime(float StartTimeValue)
{
	this->StartTime = StartTimeValue;
}

float UTimeLimitStopCondition::GetTimeLimitSec()
{
	return this->TimeLimitSec;
}

void UTimeLimitStopCondition::SetTimeLimitSec(float TimeLimitSecValue)
{
	this->TimeLimitSec = TimeLimitSecValue;
}

FString UTimeLimitStopCondition::GetConditionType()
{
	return TEXT("TimeLimit");
}

void UTimeLimitStopCondition::Init(AGameMode* GameMode)
{
	UWorld* World = GameMode->GetWorld();
	if (IsValid(World))
	{
		float CurrentTime = World->TimeSeconds;
		this->SetStartTime(CurrentTime);
	}
	else
	{
		this->SetStartTime(0.0f);
	}
}
