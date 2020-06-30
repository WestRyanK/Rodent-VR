// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Settings/MazeSettings.h"
#include "XML/RapidXML/rapidxml.hpp"
#include "XML/XmlFileWriter.h"
#include "MazeSettingsXmlWriter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UMazeSettingsXmlWriter : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
		static void SaveMazeSettings(UMazeSettings* MazeSettings);

private:
	static void SaveBehaviorRecording(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings);
	static void SavePlayerStart(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings);
	static void SaveTextures(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings);
	static void SaveRegions(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings);
	static void SaveMazeObjects(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings);
	static void SaveStopConditions(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings);
};
