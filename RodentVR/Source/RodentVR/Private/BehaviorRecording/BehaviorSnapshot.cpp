// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorSnapshot.h"

BehaviorSnapshot::BehaviorSnapshot(float Timestamp, FVector Position, FVector Forward, int CurrentRegion)
{
	this->Timestamp = Timestamp;
	this->Position = Position;
	this->Forward = Forward;
	this->CurrentRegion = CurrentRegion;
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
