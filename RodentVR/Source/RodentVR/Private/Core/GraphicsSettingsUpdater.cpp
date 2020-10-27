// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphicsSettingsUpdater.h"

void UGraphicsSettingsUpdater::UpdateGraphicsSettings(UObject* WorldContextObject, UGraphicsSettings* GraphicsSettings)
{
	if (IsValid(GraphicsSettings))
	{
		UWorld* World = WorldContextObject->GetWorld();
		if (IsValid(World))
		{
			FString ScreenResolutionXString = FString::FromInt(GraphicsSettings->GetScreenResolution().X);
			FString ScreenResolutionYString = FString::FromInt(GraphicsSettings->GetScreenResolution().Y);
			FString ScreenResolutionString =  ScreenResolutionXString + FString(TEXT("x")) + ScreenResolutionYString + FString(TEXT("wf"));
			FString ScreenPercentageString = FString::FromInt((int)(GraphicsSettings->GetScreenPercentage()));
			FString AntiAliasingQualityString = FString::FromInt((int)GraphicsSettings->GetAntiAliasingQuality());
			FString PostProcessingQualityString = FString::FromInt((int)GraphicsSettings->GetPostProcessingQuality());
			FString ShadowQualityString = FString::FromInt((int)GraphicsSettings->GetShadowQuality());
			FString TextureQualityString = FString::FromInt((int)GraphicsSettings->GetTextureQuality());
			// We got rid of changing screen resolution because we're going to use windowed fullscreen which uses the system's current resolution.
			//World->GetFirstPlayerController()->ConsoleCommand(FString(TEXT("r.SetRes ")) + ScreenResolutionString, false);
			World->GetFirstPlayerController()->ConsoleCommand(FString(TEXT("r.FullscreenMode 1")), false);
			World->GetFirstPlayerController()->ConsoleCommand(FString(TEXT("r.ScreenPercentage ")) + ScreenPercentageString, false);
			World->GetFirstPlayerController()->ConsoleCommand(FString(TEXT("r.PostProcessAAQuality ")) + AntiAliasingQualityString, false);
			World->GetFirstPlayerController()->ConsoleCommand(FString(TEXT("sg.PostProcessQuality ")) + PostProcessingQualityString, false);
			World->GetFirstPlayerController()->ConsoleCommand(FString(TEXT("sg.ShadowQuality ")) + ShadowQualityString, false);
			World->GetFirstPlayerController()->ConsoleCommand(FString(TEXT("sg.TextureQuality ")) + TextureQualityString, false);
		}
	}
}
