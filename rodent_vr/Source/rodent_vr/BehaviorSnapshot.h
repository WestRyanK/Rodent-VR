// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class RODENT_VR_API BehaviorSnapshot
{
private:
	float timestamp;
	FVector position;
	FVector forward;
	int current_region;
public:
	BehaviorSnapshot(float timestamp, FVector position, FVector forward, int current_region);
	float get_timestamp();
	FVector get_position();
	FVector get_forward();
	int get_current_region();
};
