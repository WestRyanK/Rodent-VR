// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XmlFileReader.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RapidXML/rapidxml.hpp"
#include "Engine.h"
#include <string>
#include "StopConditions/StopConditionsChecker.h"
#include "MazeLoader.generated.h"


UCLASS()
class UMazeLoader : public UXmlFileReader
{
	GENERATED_BODY()

private:
	static FName MazeFolderPath;
	static void ClearWorld(UWorld* World);
	static void LoadMaze(UWorld* World, rapidxml::xml_node<>* MazeNode);
	static void LoadObjects(UWorld* World, rapidxml::xml_node<>* MazeNode);
	static void LoadRegions(UWorld* World, rapidxml::xml_node<>* MazeNode);
	static void SetMazeMaterials(AActor* MazeActor, rapidxml::xml_node<>* MazeNode);
	static void LoadPlayerStart(UWorld* World, rapidxml::xml_node<>* MazeNode);
	static UStopConditionsChecker* LoadStopConditions(UWorld* World, rapidxml::xml_node<>* MazeNode);

public:
	//UFUNCTION(BlueprintCallable, Category="Loading", meta = (WorldContext = WorldContextObject))
	UFUNCTION()
	static UStopConditionsChecker* LoadMaze(UObject* WorldContextObject, FString MazePath);
};
