// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Simulator/RegionBoxComponent.h"
#include "Simulator/RewardDispenserComponent.h"
#include "Settings/RegionSettings.h"
#include "Math/Color.h"
#include "Region.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegionEnterDelegate, URegionSettings*, RegionEntered);

/**
 *
 */
UCLASS()
class ARegion : public AActor
{
	GENERATED_BODY()

private:
	const float BOX_COMPONENT_SIZE = 40.0f;
	UPROPERTY(BlueprintGetter = GetSettings, BlueprintSetter = SetSettings)
		URegionSettings* Settings;
	UPROPERTY()
		FColor RegionColor;
	UPROPERTY()
		class URegionBoxComponent* BoxComponent;
	UPROPERTY()
		class UStaticMeshComponent* StaticMesh;
	UPROPERTY()
		class URewardDispenserComponent* RewardDispenserComponent;
	UPROPERTY()
		class UStaticMeshComponent* NosePokeStaticMesh;
	UPROPERTY()
		bool IsForEditor;



	UFUNCTION()
		void InitStaticMesh();
	UFUNCTION()
		void InitNosePoke();
	UFUNCTION()
		void InitBoxComponent();

public:
	ARegion();

	UFUNCTION(BlueprintGetter)
		URegionSettings* GetSettings();
	UFUNCTION(BlueprintSetter)
		void SetSettings(URegionSettings* SettingsValue);

	UFUNCTION()
		bool GetIsForEditor();
	UFUNCTION()
		void SetIsForEditor(bool IsForEditorValue);

	UFUNCTION(BlueprintCallable)
		void UpdateFromSettings();

	UFUNCTION(BlueprintPure)
		static FName GetRegionTag();

	static FName RegionTag;

	static FRegionEnterDelegate OnRegionEnterDelegate;

	UFUNCTION(BlueprintCallable, Category = "Region")
		void OnRegionEnter(URegionSettings* RegionEntered);

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
};
