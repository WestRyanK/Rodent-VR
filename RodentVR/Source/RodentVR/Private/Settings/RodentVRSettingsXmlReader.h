// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RodentVRSettings.h"
#include "XmlFileReader.h"
#include "RapidXML/rapidxml.hpp"
#include "RodentVRSettingsXmlReader.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class URodentVRSettingsXmlReader : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static URodentVRSettings* LoadRodentVRSettingsFromFile(FString RodentVRSettingsFileName);

private:
	static void LoadBallInput(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode);
	static void LoadAirPuffers(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode);
	static void LoadRewardDevices(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode);
	static void LoadPlaylist(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode);
};
