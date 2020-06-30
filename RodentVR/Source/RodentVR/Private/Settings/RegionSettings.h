// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Settings/ActorSettings.h"
#include "Settings/ToneGenerationSettings.h"
#include "Settings/Device.h"
#include "RegionSettings.generated.h"

/**
 *
 */
	UCLASS()
	class URegionSettings : public UActorSettings
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetRegionId, BlueprintSetter = SetRegionId)
		FString RegionId;
	UPROPERTY(BlueprintGetter = GetIsRewardDispensingEnabled, BlueprintSetter = SetIsRewardDispensingEnabled)
		bool IsRewardDispensingEnabled;
	UPROPERTY(BlueprintGetter = GetRewardDevice, BlueprintSetter = SetRewardDevice)
		UDevice* RewardDevice;
	UPROPERTY(BlueprintGetter = GetRewardDeviceDispensingDurationSec, BlueprintSetter = SetRewardDeviceDispensingDurationSec)
		float RewardDeviceDispensingDurationSec;
	UPROPERTY(BlueprintGetter = GetToneGenerationSettings, BlueprintSetter = SetToneGenerationSettings)
		UToneGenerationSettings* ToneGenerationSettings;
	UPROPERTY(BlueprintGetter = GetIsNosePoke, BlueprintSetter = SetIsNosePoke)
		bool IsNosePoke;

public:
	URegionSettings();

	UFUNCTION(BlueprintGetter)
		FString GetRegionId();
	UFUNCTION(BlueprintSetter)
		void SetRegionId(FString RegionIdValue);
	UFUNCTION(BlueprintGetter)
		bool GetIsRewardDispensingEnabled();
	UFUNCTION(BlueprintSetter)
		void SetIsRewardDispensingEnabled(bool IsRewardDispensingEnabledValue);
	UFUNCTION(BlueprintGetter)
		UDevice* GetRewardDevice();
	UFUNCTION(BlueprintSetter)
		void SetRewardDevice(UDevice* RewardDeviceValue);
	UFUNCTION(BlueprintGetter)
		float GetRewardDeviceDispensingDurationSec();
	UFUNCTION(BlueprintSetter)
		void SetRewardDeviceDispensingDurationSec(float RewardDeviceDispensingDurationSecValue);
	UFUNCTION(BlueprintGetter)
		UToneGenerationSettings* GetToneGenerationSettings();
	UFUNCTION(BlueprintSetter)
		void SetToneGenerationSettings(UToneGenerationSettings* ToneGenerationSettingsValue);
	UFUNCTION(BlueprintGetter)
		bool GetIsNosePoke();
	UFUNCTION(BlueprintSetter)
		void SetIsNosePoke(bool IsNosePokeValue);
};
