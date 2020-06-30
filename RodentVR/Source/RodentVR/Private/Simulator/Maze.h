// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Settings/MazeSettings.h"
#include "Maze.generated.h"

UCLASS(Blueprintable)
class AMaze : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMaze();

private:
	UPROPERTY(BlueprintGetter = GetSettings, BlueprintSetter = SetSettings)
		UMazeSettings* Settings;
	UPROPERTY()
		TMap<FName, UStaticMeshComponent*> MeshComponents;

	bool DoComponentsNeedUpdating(TArray<FAssetData> MazeMeshAssets);

public:
	UFUNCTION(BlueprintGetter)
		UMazeSettings* GetSettings();
	UFUNCTION(BlueprintSetter)
		void SetSettings(UMazeSettings* SettingsValue);

	UFUNCTION(BlueprintCallable)
	void UpdateFromSettings();


	UFUNCTION(BlueprintPure)
		static FName GetMazeTag();

	static FName MazeTag;

};
