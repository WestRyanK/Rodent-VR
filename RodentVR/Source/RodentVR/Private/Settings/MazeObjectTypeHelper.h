// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MazeObjectType.h"
#include "MazeObjectTypeHelper.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UMazeObjectTypeHelper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static FString ObjectTypeToString(MazeObjectType ObjectType);
	
	UFUNCTION(BlueprintCallable)
		static MazeObjectType StringToObjectType(FString TypeString);
};
