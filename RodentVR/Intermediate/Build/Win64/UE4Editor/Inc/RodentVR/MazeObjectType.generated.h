// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_MazeObjectType_generated_h
#error "MazeObjectType.generated.h already included, missing '#pragma once' in MazeObjectType.h"
#endif
#define RODENTVR_MazeObjectType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_MazeObjectType_h


#define FOREACH_ENUM_MAZEOBJECTTYPE(op) \
	op(MazeObjectType::CUBE) \
	op(MazeObjectType::CYLINDER) \
	op(MazeObjectType::SPHERE) \
	op(MazeObjectType::CONE) \
	op(MazeObjectType::FIGURINE) \
	op(MazeObjectType::PLANE) \
	op(MazeObjectType::INVALID) 

enum class MazeObjectType : uint8;
template<> RODENTVR_API UEnum* StaticEnum<MazeObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
