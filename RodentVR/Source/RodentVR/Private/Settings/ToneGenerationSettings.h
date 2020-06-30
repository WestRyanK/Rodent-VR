// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ToneGenerationSettings.generated.h"

/**
 * 
 */
UCLASS()
class UToneGenerationSettings : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY(BlueprintGetter = GetIsToneGenerationEnabled, BlueprintSetter = SetIsToneGenerationEnabled)
		bool IsToneGenerationEnabled;
	UPROPERTY(BlueprintGetter = GetToneDurationSec, BlueprintSetter = SetToneDurationSec)
		float ToneDurationSec;
	UPROPERTY(BlueprintGetter = GetTonePitchHz, BlueprintSetter = SetTonePitchHz)
		float TonePitchHz;
	UPROPERTY(BlueprintGetter = GetToneVolumePercent, BlueprintSetter = SetToneVolumePercent)
		float ToneVolumePercent;

public:
	UFUNCTION(BlueprintGetter)
		bool GetIsToneGenerationEnabled();
	UFUNCTION(BlueprintSetter)
		void SetIsToneGenerationEnabled(bool IsToneGenerationEnabledValue);
	UFUNCTION(BlueprintGetter)
		float GetToneDurationSec();
	UFUNCTION(BlueprintSetter)
		void SetToneDurationSec(float ToneDurationSecValue);
	UFUNCTION(BlueprintGetter)
		float GetTonePitchHz();
	UFUNCTION(BlueprintSetter)
		void SetTonePitchHz(float TonePitchHzValue);
	UFUNCTION(BlueprintGetter)
		float GetToneVolumePercent();
	UFUNCTION(BlueprintSetter)
		void SetToneVolumePercent(float ToneVolumePercentValue);
};
