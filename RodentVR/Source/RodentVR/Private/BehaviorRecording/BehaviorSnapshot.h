// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class RODENTVR_API BehaviorSnapshot
{
private:
	float Timestamp;
	FVector Position;
	FVector Forward;
	FString CurrentRegion;
public:
	BehaviorSnapshot(float Timestamp, FVector Position, FVector Forward, FString CurrentRegion);
	float GetTimestamp();
	FVector GetPosition();
	FVector GetForward();
	FString GetCurrentRegion();
};
