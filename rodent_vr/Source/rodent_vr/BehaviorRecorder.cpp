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
	for (int i = 0; i < UBehaviorRecorder::snapshots.size(); i++)
	{
		BehaviorSnapshot snapshot = UBehaviorRecorder::snapshots[i];
		output 
			<< snapshot.get_timestamp() << " " 
			<< snapshot.get_current_region() << " "
			<< snapshot.get_position().X << " " << snapshot.get_position().Y << " " << snapshot.get_position().Z << " "  
			<< snapshot.get_forward().X << " " << snapshot.get_forward().Y << " " << snapshot.get_forward().Z 
			<< std::endl;
	}
	output.close();
}


void UBehaviorRecorder::record_region(int region)
{
	UBehaviorRecorder::current_region = region;
}
