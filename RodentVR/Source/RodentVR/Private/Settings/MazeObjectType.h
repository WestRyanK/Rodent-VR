// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
UENUM(BlueprintType)
enum class MazeObjectType : uint8
{
	CUBE UMETA(DisplayName = "Cube"),
	CYLINDER UMETA(DisplayName = "Cylinder"),
	SPHERE UMETA(DisplayName = "Sphere"),
	CONE UMETA(DisplayName = "Cone"),
	FIGURINE UMETA(DisplayName = "Figurine"),
	PLANE UMETA(DisplayName = "Plane"),
	INVALID UMETA(DisplayName = "Invalid")
};
