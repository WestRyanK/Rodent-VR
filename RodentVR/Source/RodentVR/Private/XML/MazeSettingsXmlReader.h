// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Settings/MazeSettings.h"
#include "XML/RapidXML/rapidxml.hpp"
#include "MazeSettingsXmlReader.generated.h"

class URodentVRSettings;
/**
 *
 */
UCLASS(Blueprintable)
class UMazeSettingsXmlReader : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static UMazeSettings* LoadMazeFromFile(FString MazeFileName, URodentVRSettings* RodentVRSettings);

private:
	static void LoadMazeName(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode);
	static void LoadBehaviorRecordingFileName(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode);
	static void LoadTextures(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode);
	static void LoadPlayerStart(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode);
	static void LoadMazeObjects(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode);
	static void LoadStopConditions(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode);
	static void LoadRegions(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode, URodentVRSettings* RodentVRSettings);
};


