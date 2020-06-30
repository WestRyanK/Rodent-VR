// Fill out your copyright notice in the Description page of Project Settings.


#include "RegionSettings.h"

URegionSettings::URegionSettings()
{
	this->IsRewardDispensingEnabled = true;
	this->RewardDeviceDispensingDurationSec = 1.0f;
	this->ToneGenerationSettings = NewObject<UToneGenerationSettings>();
	this->RewardDevice = nullptr;
	this->RegionId = TEXT("");
}

FString URegionSettings::GetRegionId()
{
	return this->RegionId;
}

void URegionSettings::SetRegionId(FString RegionIdValue)
{
	this->RegionId = RegionIdValue;
}

bool URegionSettings::GetIsRewardDispensingEnabled()
{
	return this->IsRewardDispensingEnabled;
}

void URegionSettings::SetIsRewardDispensingEnabled(bool IsRewardDispensingEnabledValue)
{
	this->IsRewardDispensingEnabled = IsRewardDispensingEnabledValue;
}

UDevice* URegionSettings::GetRewardDevice()
{
	return this->RewardDevice;
}

void URegionSettings::SetRewardDevice(UDevice* RewardDeviceValue)
{
	this->RewardDevice = RewardDeviceValue;
}

float URegionSettings::GetRewardDeviceDispensingDurationSec()
{
	return this->RewardDeviceDispensingDurationSec;
}

void URegionSettings::SetRewardDeviceDispensingDurationSec(float RewardDeviceDispensingDurationSecValue)
{
	this->RewardDeviceDispensingDurationSec = RewardDeviceDispensingDurationSecValue;
}

UToneGenerationSettings* URegionSettings::GetToneGenerationSettings()
{
	return this->ToneGenerationSettings;
}

void URegionSettings::SetToneGenerationSettings(UToneGenerationSettings* ToneGenerationSettingsValue)
{
	this->ToneGenerationSettings = ToneGenerationSettingsValue;
}

bool URegionSettings::GetIsNosePoke()
{
	return this->IsNosePoke;
}

void URegionSettings::SetIsNosePoke(bool IsNosePokeValue)
{
	this->IsNosePoke = IsNosePokeValue;
}
