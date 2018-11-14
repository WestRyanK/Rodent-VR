// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BallInputLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RODENT_VR_API UBallInputLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category="Ball Input")
	static void InitializeBallInput(std::wstring mouse_a_name, std::wstring mouse_b_name);
	
	UFUNCTION(BlueprintCallable, Category="Ball Input")
	static FVector2D get_movement_delta();
	
	
};
