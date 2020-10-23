// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Settings/RodentVRSettings.h"
#include "XML/XmlFileReader.h"
#include "XML/RapidXML/rapidxml.hpp"
#include "Settings/GraphicsSettings.h"
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
	static void LoadGraphics(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode);
};
