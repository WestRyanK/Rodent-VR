// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XML/RapidXML/rapidxml.hpp"
#include "Settings/Device.h"
#include "Settings/TextureSettings.h"
#include "Settings/ToneGenerationSettings.h"
#include "Settings/ActorSettings.h"
#include <string>
#include "Kismet/BlueprintFunctionLibrary.h"
#include "XmlFileReader.generated.h"

/**
 * 
 */
UCLASS()
class UXmlFileReader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	static rapidxml::xml_document<>* OpenFile(std::string FilePath);
	static TSubclassOf<AActor> GetActorBlueprintClass(std::string ActorBlueprintPath);
	static FVector GetVectorFromNode(rapidxml::xml_node<>* Node);
	static FRotator GetRotatorFromNode(rapidxml::xml_node<>* Node);
	static UDevice* GetDeviceFromNode(rapidxml::xml_node<>* Node);
	static void GetActorSettingsFromNode(rapidxml::xml_node<>* Node, UActorSettings* ActorSettings);
	static UToneGenerationSettings* GetToneGenerationSettingsFromNode(rapidxml::xml_node<>* Node);
	static UTextureSettings* GetTextureSettingsFromNode(rapidxml::xml_node<>* Node);
	static FString GetStringFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, std::string DefaultValue);
	static float GetFloatFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, float DefaultValue);
	static bool GetBoolFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, bool DefaultValue);
	static int GetIntFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, int DefaultValue);
};
