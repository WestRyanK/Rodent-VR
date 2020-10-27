// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorSnapshot.h"


UBehaviorSnapshot* UBehaviorSnapshot::CreateBehaviorSnapshot(UObject* OuterObject, float TimestampVal, FVector PositionVal, FVector ForwardVal, FString CurrentRegionVal)
{
	UBehaviorSnapshot* Snapshot = NewObject<UBehaviorSnapshot>(OuterObject);
	Snapshot->Timestamp = TimestampVal;
	Snapshot->Position = PositionVal;
	Snapshot->Forward = ForwardVal;
	Snapshot->CurrentRegion = CurrentRegionVal;
	return Snapshot;
}

float UBehaviorSnapshot::GetTimestamp()
{
	return this->Timestamp;
}

FVector UBehaviorSnapshot::GetPosition()
{
	return this->Position;
}

FVector UBehaviorSnapshot::GetForward()
{
	return this->Forward;
}

FString UBehaviorSnapshot::GetCurrentRegion()
{
	return this->CurrentRegion;
}
