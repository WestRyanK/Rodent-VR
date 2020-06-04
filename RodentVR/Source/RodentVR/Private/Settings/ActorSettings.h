// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorSettings.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UActorSettings : public UObject
{
	GENERATED_BODY()
	
public:
	UActorSettings();


	UFUNCTION(BlueprintGetter)
		FVector GetPosition();
	UFUNCTION(BlueprintSetter)
		void SetPosition(FVector PositionValue);
	UFUNCTION(BlueprintGetter)
		FRotator GetRotation();
	UFUNCTION(BlueprintSetter)
		void SetRotation(FRotator RotationValue);
	UFUNCTION(BlueprintGetter)
		FVector GetScale();
	UFUNCTION(BlueprintSetter)
		void SetScale(FVector ScaleValue);

protected:
	UPROPERTY(BlueprintGetter = GetPosition, BlueprintSetter = SetPosition)
		FVector Position;
	UPROPERTY(BlueprintGetter = GetRotation, BlueprintSetter = SetRotation)
		FRotator Rotation;
	UPROPERTY(BlueprintGetter = GetScale, BlueprintSetter = SetScale)
		FVector Scale;
};
