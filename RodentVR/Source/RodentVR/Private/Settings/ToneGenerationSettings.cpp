// Fill out your copyright notice in the Description page of Project Settings.


#include "ToneGenerationSettings.h"

bool UToneGenerationSettings::GetIsToneGenerationEnabled()
{
	return this->IsToneGenerationEnabled;
}

void UToneGenerationSettings::SetIsToneGenerationEnabled(bool IsToneGenerationEnabledValue)
{
	this->IsToneGenerationEnabled = IsToneGenerationEnabledValue;
}

float UToneGenerationSettings::GetToneDurationSec()
{
	return this->ToneDurationSec;
}

void UToneGenerationSettings::SetToneDurationSec(float ToneDurationSecValue)
{
	this->ToneDurationSec = ToneDurationSecValue;
}

float UToneGenerationSettings::GetTonePitchHz()
{
	return this->TonePitchHz;
}

void UToneGenerationSettings::SetTonePitchHz(float TonePitchHzValue)
{
	this->TonePitchHz = TonePitchHzValue;
}

float UToneGenerationSettings::GetToneVolumePercent()
{
	return this->ToneVolumePercent;
}

void UToneGenerationSettings::SetToneVolumePercent(float ToneVolumePercentValue)
{
	this->ToneVolumePercent = ToneVolumePercentValue;
}
