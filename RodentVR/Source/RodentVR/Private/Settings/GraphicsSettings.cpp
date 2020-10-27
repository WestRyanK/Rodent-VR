// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphicsSettings.h"
#include "Math/IntPoint.h"

FIntPoint UGraphicsSettings::GetScreenResolution()
{
	return this->ScreenResolution;
}

void UGraphicsSettings::SetScreenResolution(FIntPoint ScreenResolutionValue)
{
	// Ensure the user doesn't somehow set a resolution so small they can't use the UI to fix it again!
	if (ScreenResolutionValue.X < 400 || ScreenResolutionValue.Y < 300)
	{
		ScreenResolutionValue = FIntPoint(400, 300);
	}
	this->ScreenResolution = ScreenResolutionValue;
}

int UGraphicsSettings::GetScreenPercentage()
{
	return this->ScreenPercentage;
}

void UGraphicsSettings::SetScreenPercentage(int ScreenPercentageValue)
{
	this->ScreenPercentage = ScreenPercentageValue;
}

GraphicsQualityLevels UGraphicsSettings::GetPostProcessingQuality()
{
	return this->PostProcessingQuality;
}

void UGraphicsSettings::SetPostProcessingQuality(GraphicsQualityLevels PostProcessingQualityValue)
{
	this->PostProcessingQuality = PostProcessingQualityValue;
}

GraphicsQualityLevels UGraphicsSettings::GetAntiAliasingQuality()
{
	return this->AntiAliasingQuality;
}

void UGraphicsSettings::SetAntiAliasingQuality(GraphicsQualityLevels AntiAliasingQualityValue)
{
	this->AntiAliasingQuality = AntiAliasingQualityValue;
}

GraphicsQualityLevels UGraphicsSettings::GetShadowQuality()
{
	return this->ShadowQuality;
}

void UGraphicsSettings::SetShadowQuality(GraphicsQualityLevels ShadowQualityValue)
{
	this->ShadowQuality = ShadowQualityValue;
}

GraphicsQualityLevels UGraphicsSettings::GetTextureQuality()
{
	return this->TextureQuality;
}

void UGraphicsSettings::SetTextureQuality(GraphicsQualityLevels TextureQualityValue)
{
	this->TextureQuality = TextureQualityValue;
}


