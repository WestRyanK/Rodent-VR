// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Simulator/SimpleObject.h"
#include "BehaviorPathNodeObject.generated.h"

UCLASS()
class ABehaviorPathNodeObject : public ASimpleObject//AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABehaviorPathNodeObject();

	UFUNCTION(BlueprintCallable)
		void UpdateNodeObject(FVector Position, FRotator Rotation, FVector Scale, FVector Color);

	
	UFUNCTION(BlueprintPure)
		static FName GetBehaviorPathNodeObjectTag();

	static FName BehaviorPathNodeObjectTag;
};
