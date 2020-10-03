// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Settings/MazeObjectSettings.h"
#include "Settings/MazeObjectType.h"
#include "SimpleObject.h"
#include "Settings/MazeObjectTypeHelper.h"
#include "MazeObject.generated.h"

UCLASS(Blueprintable)
class AMazeObject : public ASimpleObject
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMazeObject();


public:
	UPROPERTY(BlueprintGetter = GetSettings, BlueprintSetter = SetSettings)
		UMazeObjectSettings* Settings;

	UFUNCTION(BlueprintGetter)
		UMazeObjectSettings* GetSettings();
	UFUNCTION(BlueprintSetter)
		void SetSettings(UMazeObjectSettings* SettingsValue);

	UFUNCTION(BlueprintCallable)
	void UpdateFromSettings();
	
	UFUNCTION(BlueprintPure)
		static FName GetMazeObjectTag();

	static FName MazeObjectTag;

};
