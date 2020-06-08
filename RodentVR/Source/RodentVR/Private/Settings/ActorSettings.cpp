// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorSettings.h"

UActorSettings::UActorSettings()
{
	this->SetPosition(FVector(0.0f, 0.0f, 0.0f));
	this->SetRotation(FRotator(0.0f, 0.0f, 0.0f));
	this->SetScale(FVector(1.0f, 1.0f, 1.0f));
}


FVector UActorSettings::GetPosition()
{
	return this->Position;
}

void UActorSettings::SetPosition(FVector PositionValue)
{
	this->Position = PositionValue;
}
FRotator UActorSettings::GetRotation()
{
	return this->Rotation;
}

void UActorSettings::SetRotation(FRotator RotationValue)
{
	this->Rotation = RotationValue;
}
FVector UActorSettings::GetScale()
{
	return this->Scale;
}

void UActorSettings::SetScale(FVector ScaleValue)
{
	this->Scale = ScaleValue;
}
