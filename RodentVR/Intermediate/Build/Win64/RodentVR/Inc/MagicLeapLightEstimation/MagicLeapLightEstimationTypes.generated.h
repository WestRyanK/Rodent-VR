// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICLEAPLIGHTESTIMATION_MagicLeapLightEstimationTypes_generated_h
#error "MagicLeapLightEstimationTypes.generated.h already included, missing '#pragma once' in MagicLeapLightEstimationTypes.h"
#endif
#define MAGICLEAPLIGHTESTIMATION_MagicLeapLightEstimationTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeapLightEstimation_Source_MagicLeapLightEstimation_Public_MagicLeapLightEstimationTypes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics; \
	MAGICLEAPLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPLIGHTESTIMATION_API UScriptStruct* StaticStruct<struct FMagicLeapLightEstimationColorTemperatureState>();

#define Engine_Plugins_Lumin_MagicLeapLightEstimation_Source_MagicLeapLightEstimation_Public_MagicLeapLightEstimationTypes_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics; \
	MAGICLEAPLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPLIGHTESTIMATION_API UScriptStruct* StaticStruct<struct FMagicLeapLightEstimationAmbientGlobalState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeapLightEstimation_Source_MagicLeapLightEstimation_Public_MagicLeapLightEstimationTypes_h


#define FOREACH_ENUM_EMAGICLEAPLIGHTESTIMATIONCAMERA(op) \
	op(EMagicLeapLightEstimationCamera::Left) \
	op(EMagicLeapLightEstimationCamera::Right) \
	op(EMagicLeapLightEstimationCamera::FarLeft) \
	op(EMagicLeapLightEstimationCamera::FarRight) 

enum class EMagicLeapLightEstimationCamera : uint8;
template<> MAGICLEAPLIGHTESTIMATION_API UEnum* StaticEnum<EMagicLeapLightEstimationCamera>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
