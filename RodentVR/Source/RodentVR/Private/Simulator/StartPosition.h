// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Settings/StartPositionSettings.h"
#include "StartPosition.generated.h"

UCLASS()
class AStartPosition : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(BlueprintGetter = GetSettings, BlueprintSetter = SetSettings)
		UStartPositionSettings* Settings;
	UPROPERTY()
		class UStaticMeshComponent* StaticMesh;

public:
	UFUNCTION(BlueprintGetter)
		UStartPositionSettings* GetSettings();
	UFUNCTION(BlueprintSetter)
		void SetSettings(UStartPositionSettings* SettingsValue);

	UFUNCTION(BlueprintCallable)
	void UpdateFromSettings();

	AStartPosition();

	UFUNCTION(BlueprintPure)
		static FName GetStartPositionTag();
	static FName StartPositionTag;
};
