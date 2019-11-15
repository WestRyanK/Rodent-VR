// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorSnapshot.h"

BehaviorSnapshot::BehaviorSnapshot(float timestamp, FVector position, FVector forward, int currentRegion)
{
	this->Timestamp = timestamp;
	this->Position = position;
	this->Forward = forward;
	this->CurrentRegion = currentRegion;
}

float BehaviorSnapshot::GetTimestamp()
{
	return this->Timestamp;
}

FVector BehaviorSnapshot::GetPosition()
{
	return this->Position;
}

FVector BehaviorSnapshot::GetForward()
{
	return this->Forward;
}

int BehaviorSnapshot::GetCurrentRegion()
{
	return this->CurrentRegion;
}
