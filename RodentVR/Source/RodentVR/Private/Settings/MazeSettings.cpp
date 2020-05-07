// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSettings.h"
#include "TextureLoader.h"
#include "StopConditions/StopCondition.h"

FText UMazeSettings::GetMazeName()
{
	return this->MazeName;
}

void UMazeSettings::SetMazeName(FText MazeNameValue)
{
	this->MazeName = MazeNameValue;
}

FText UMazeSettings::GetMazeSettingsFileName()
{
	return this->MazeSettingsFileName;
}

void UMazeSettings::SetMazeSettingsFileName(FText MazeSettingsFileNameValue)
{
	this->MazeSettingsFileName = MazeSettingsFileNameValue;
}

FText UMazeSettings::GetBehaviorRecordingFileName()
{
	return this->BehaviorRecordingFileName;
}

void UMazeSettings::SetBehaviorRecordingFileName(FText BehaviorRecordingFileNameValue)
{
	this->BehaviorRecordingFileName = BehaviorRecordingFileNameValue;
}

FTransform UMazeSettings::GetPlayerStart()
{
	return this->PlayerStart;
}

void UMazeSettings::SetPlayerStart(FTransform PlayerStartValue)
{
	this->PlayerStart = PlayerStartValue;
}

bool UMazeSettings::GetAreRegionsVisible()
{
	return this->AreRegionsVisible;
}

void UMazeSettings::SetAreRegionsVisible(bool AreRegionsVisibleValue)
{
	this->AreRegionsVisible = AreRegionsVisibleValue;
}

void UMazeSettings::ClearTextures()
{
	this->Textures.Empty();
}

void UMazeSettings::AddTexture(FString SlotName, FString TextureFileNameValue)
{
	bool IsValid;
	int32 Width, Height;
	UTexture2D* Texture = UTextureLoader::LoadTextureFromFile(TextureFileNameValue, IsValid, Width, Height);
	this->Textures.Add(SlotName, Texture);
}

void UMazeSettings::RemoveTexture(FString SlotName)
{
	this->Textures.Remove(SlotName);
}

void UMazeSettings::ClearStopConditions()
{
	this->StopConditions.Empty();
}

void UMazeSettings::RemoveStopCondition(int position)
{
	this->StopConditions.RemoveAt(position);
}

void UMazeSettings::AddStopCondition(UStopCondition* StopCondition)
{
	this->StopConditions.Add(StopCondition);
}

void UMazeSettings::ClearMazeObjects()
{
	this->MazeObjects.Empty();
}

void UMazeSettings::RemoveMazeObjects(int position)
{
	this->MazeObjects.RemoveAt(position);
}

void UMazeSettings::AddMazeObjects(AMazeObject* MazeObject)
{
	this->MazeObjects.Add(MazeObject);
}
