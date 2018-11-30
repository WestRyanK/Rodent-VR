// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorRecorder.h"
#include <iostream>
#include <fstream>

std::vector<BehaviorSnapshot> UBehaviorRecorder::snapshots;
int UBehaviorRecorder::current_region = -1;

void UBehaviorRecorder::reset()
{
	UBehaviorRecorder::snapshots.clear();
	UBehaviorRecorder::current_region = -1;
}

void UBehaviorRecorder::record(float time, FVector position, FVector forward)
{
	BehaviorSnapshot snapshot = BehaviorSnapshot(time, position, forward, UBehaviorRecorder::current_region);
	UBehaviorRecorder::snapshots.push_back(snapshot);
}

void UBehaviorRecorder::save(FString filename)
{
	std::ofstream output;
	output.open(*filename);
	char tab = '\t';

	output << "#Snapshot Timestamp\tTrigger Region Identifier\tPosition.X\tPosition.Y\tPosition.Z\tForward.X\tForward.Y\tForward.Z" << std::endl;
	for (int i = 0; i < UBehaviorRecorder::snapshots.size(); i++)
	{
		BehaviorSnapshot snapshot = UBehaviorRecorder::snapshots[i];
		output 
			<< snapshot.get_timestamp() << tab
			<< snapshot.get_current_region() << tab
			<< snapshot.get_position().X << tab << snapshot.get_position().Y << tab << snapshot.get_position().Z << tab 
			<< snapshot.get_forward().X << tab << snapshot.get_forward().Y << tab << snapshot.get_forward().Z 
			<< std::endl;
	}
	output.close();
}


void UBehaviorRecorder::record_region(int region)
{
	UBehaviorRecorder::current_region = region;
}
