// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorSnapshot.h"

BehaviorSnapshot::BehaviorSnapshot(float timestamp, FVector position, FVector forward, int current_region)
{
	this->timestamp = timestamp;
	this->position = position;
	this->forward = forward;
	this->current_region = current_region;
}

float BehaviorSnapshot::get_timestamp()
{
	return this->timestamp;
}

FVector BehaviorSnapshot::get_position()
{
	return this->position;
}

FVector BehaviorSnapshot::get_forward()
{
	return this->forward;
}

int BehaviorSnapshot::get_current_region()
{
	return this->current_region;
}
