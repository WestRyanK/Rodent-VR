// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICLEAP_MeshTrackerTypes_generated_h
#error "MeshTrackerTypes.generated.h already included, missing '#pragma once' in MeshTrackerTypes.h"
#endif
#define MAGICLEAP_MeshTrackerTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshTrackerTypes_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FMagicLeapMeshBlockRequest>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshTrackerTypes_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FMagicLeapTrackingMeshInfo>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshTrackerTypes_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FMagicLeapMeshBlockInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshTrackerTypes_h


#define FOREACH_ENUM_EMAGICLEAPMESHSTATE(op) \
	op(EMagicLeapMeshState::New) \
	op(EMagicLeapMeshState::Updated) \
	op(EMagicLeapMeshState::Deleted) \
	op(EMagicLeapMeshState::Unchanged) 

enum class EMagicLeapMeshState : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshState>();

#define FOREACH_ENUM_EMAGICLEAPMESHLOD(op) \
	op(EMagicLeapMeshLOD::Minimum) \
	op(EMagicLeapMeshLOD::Medium) \
	op(EMagicLeapMeshLOD::Maximum) 

enum class EMagicLeapMeshLOD : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshLOD>();

#define FOREACH_ENUM_EMAGICLEAPMESHVERTEXCOLORMODE(op) \
	op(EMagicLeapMeshVertexColorMode::None) \
	op(EMagicLeapMeshVertexColorMode::Confidence) \
	op(EMagicLeapMeshVertexColorMode::Block) \
	op(EMagicLeapMeshVertexColorMode::LOD) 

enum class EMagicLeapMeshVertexColorMode : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshVertexColorMode>();

#define FOREACH_ENUM_EMAGICLEAPMESHTYPE(op) \
	op(EMagicLeapMeshType::Triangles) \
	op(EMagicLeapMeshType::PointCloud) 

enum class EMagicLeapMeshType : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
