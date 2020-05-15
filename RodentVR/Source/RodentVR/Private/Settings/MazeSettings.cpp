// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSettings.h"
#include "TextureLoader.h"
#include "StopConditions/StopCondition.h"

FString UMazeSettings::GetMazeName()
{
	return this->MazeName;
}

void UMazeSettings::SetMazeName(FString MazeNameValue)
{
	this->MazeName = MazeNameValue;
}

FString UMazeSettings::GetMazeSettingsFileName()
{
	return this->MazeSettingsFileName;
}

void UMazeSettings::SetMazeSettingsFileName(FString MazeSettingsFileNameValue)
{
	this->MazeSettingsFileName = MazeSettingsFileNameValue;
}

FString UMazeSettings::GetBehaviorRecordingFileName()
{
	return this->BehaviorRecordingFileName;
}

void UMazeSettings::SetBehaviorRecordingFileName(FString BehaviorRecordingFileNameValue)
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

TMap<FString, FString> UMazeSettings::GetTextures()
{
	return this->Textures;
}

void UMazeSettings::ClearTextures()
{
	this->Textures.Empty();
}

void UMazeSettings::AddTexture(FString SlotName, FString TextureFileNameValue)
{
	//bool IsValid;
	//int32 Width, Height;
	//UTexture2D* Texture = UTextureLoader::LoadTextureFromFile(TextureFileNameValue, IsValid, Width, Height);
	//this->Textures.Add(SlotName, Texture);
	this->Textures.Add(SlotName, TextureFileNameValue);
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

TArray<UStopCondition*> UMazeSettings::GetStopConditions()
{
	return this->StopConditions;
}

void UMazeSettings::ClearMazeObjects()
{
	this->MazeObjects.Empty();
}

void UMazeSettings::RemoveMazeObject(int position)
{
	this->MazeObjects.RemoveAt(position);
}

void UMazeSettings::AddMazeObject(AMazeObject* MazeObject)
{
	this->MazeObjects.Add(MazeObject);
}

TArray<AMazeObject*> UMazeSettings::GetMazeObjects()
{
	return this->MazeObjects;
}
