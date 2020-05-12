// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RodentVRSettings.h"
#include "RapidXML/rapidxml.hpp"
#include "XmlFileWriter.h"
#include "RodentVRSettingsXmlWriter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class URodentVRSettingsXmlWriter : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static void SaveRodentVRSettings(URodentVRSettings* Settings);

private:
	static void SaveBallInput(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings);
	static void SaveAirPuffers(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings);
	static void SaveRewardDevices(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings);
	static void SavePlaylist(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, URodentVRSettings* Settings);
};
