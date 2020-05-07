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
UCLASS()
class URodentVRSettingsXmlReader : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
		static URodentVRSettings* LoadRodentVRSettingsFromFile(FText RodentVRSettingsFileName);

private:
	void SetBallInput(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode);
};
