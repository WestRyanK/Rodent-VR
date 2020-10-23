// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class GraphicsQualityLevels : uint8
{
	LOW = 0 UMETA(DisplayName = "Low"),
	MEDIUM = 1 UMETA(DisplayName = "Medium"),
	HIGH = 2 UMETA(DisplayName = "High"),
	ULTRA = 3 UMETA(DisplayName = "Ultra")
};
