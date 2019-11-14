// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XmlFileReader.h"
#include "RodentGameMode.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SettingsLoader.generated.h"

/**
 * 
 */
UCLASS()
class USettingsLoader : public UXmlFileReader
{
	GENERATED_BODY()
	
private:
	static void LoadAirPufferSettings(ARodentGameMode* InRodentGameMode, rapidxml::xml_node<>* SettingsNode);
	static void LoadRewardDevices(ARodentGameMode* InRodentGameMode, rapidxml::xml_node<>* SettingsNode);
	static void LoadPlaylist(ARodentGameMode* InRodentGameMode, rapidxml::xml_node<>* SettingsNode);
public:
	UFUNCTION(BlueprintCallable, Category = "Loading", meta = (WorldContext = WorldContextObject))
	static void LoadSettings(UObject* WorldContextObject, ARodentGameMode* InRodentGameMode);
};
