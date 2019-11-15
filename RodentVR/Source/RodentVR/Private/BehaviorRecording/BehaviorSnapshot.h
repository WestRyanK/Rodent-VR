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
	int CurrentRegion;
public:
	BehaviorSnapshot(float Timestamp, FVector Position, FVector Forward, int CurrentRegion);
	float GetTimestamp();
	FVector GetPosition();
	FVector GetForward();
	int GetCurrentRegion();
};
