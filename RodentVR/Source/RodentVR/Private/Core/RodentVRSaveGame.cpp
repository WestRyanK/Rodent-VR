// Fill out your copyright notice in the Description page of Project Settings.


#include "RodentVRSaveGame.h"

const FString URodentVRSaveGame::GameSlot = TEXT("SaveGame");

FString URodentVRSaveGame::GetRodentVRSettingsFileName()
{
	return this->RodentVRSettingsFileName;
}

void URodentVRSaveGame::SetRodentVRSettingsFileName(FString RodentVRSettingsFileNameValue)
{
	this->RodentVRSettingsFileName = RodentVRSettingsFileNameValue;
}
