// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkCameraTypes_generated_h
#error "LiveLinkCameraTypes.generated.h already included, missing '#pragma once' in LiveLinkCameraTypes.h"
#endif
#define LIVELINKINTERFACE_LiveLinkCameraTypes_generated_h

#define Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkBaseBlueprintData Super;


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCameraBlueprintData>();

#define Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformFrameData Super;


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCameraFrameData>();

#define Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformStaticData Super;


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCameraStaticData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h


#define FOREACH_ENUM_ELIVELINKCAMERAPROJECTIONMODE(op) \
	op(ELiveLinkCameraProjectionMode::Perspective) \
	op(ELiveLinkCameraProjectionMode::Orthographic) 

enum class ELiveLinkCameraProjectionMode : uint8;
template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkCameraProjectionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
