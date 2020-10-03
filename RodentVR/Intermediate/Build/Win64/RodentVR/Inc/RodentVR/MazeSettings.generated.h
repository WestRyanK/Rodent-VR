// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URegionSettings;
class UMazeObjectSettings;
class UStopCondition;
class UTextureSettings;
 class UTextureSettings;
class UStartPositionSettings;
#ifdef RODENTVR_MazeSettings_generated_h
#error "MazeSettings.generated.h already included, missing '#pragma once' in MazeSettings.h"
#endif
#define RODENTVR_MazeSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRegionById); \
	DECLARE_FUNCTION(execGetRegionSettings); \
	DECLARE_FUNCTION(execAddRegionSettings); \
	DECLARE_FUNCTION(execRemoveRegionSettings); \
	DECLARE_FUNCTION(execClearRegionSettings); \
	DECLARE_FUNCTION(execGetMazeObjects); \
	DECLARE_FUNCTION(execAddMazeObject); \
	DECLARE_FUNCTION(execRemoveMazeObject); \
	DECLARE_FUNCTION(execClearMazeObjects); \
	DECLARE_FUNCTION(execGetStopConditions); \
	DECLARE_FUNCTION(execAddStopCondition); \
	DECLARE_FUNCTION(execRemoveStopCondition); \
	DECLARE_FUNCTION(execClearStopConditions); \
	DECLARE_FUNCTION(execAddTexture); \
	DECLARE_FUNCTION(execRemoveTexture); \
	DECLARE_FUNCTION(execClearTextures); \
	DECLARE_FUNCTION(execGetTextures); \
	DECLARE_FUNCTION(execSetPlayerStart); \
	DECLARE_FUNCTION(execGetPlayerStart); \
	DECLARE_FUNCTION(execSetBehaviorRecordingFileName); \
	DECLARE_FUNCTION(execGetBehaviorRecordingFileName); \
	DECLARE_FUNCTION(execSetMazeSettingsFileName); \
	DECLARE_FUNCTION(execGetMazeSettingsFileName); \
	DECLARE_FUNCTION(execSetMazeName); \
	DECLARE_FUNCTION(execGetMazeName); \
	DECLARE_FUNCTION(execDoesMazeHaveSettings);


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRegionById); \
	DECLARE_FUNCTION(execGetRegionSettings); \
	DECLARE_FUNCTION(execAddRegionSettings); \
	DECLARE_FUNCTION(execRemoveRegionSettings); \
	DECLARE_FUNCTION(execClearRegionSettings); \
	DECLARE_FUNCTION(execGetMazeObjects); \
	DECLARE_FUNCTION(execAddMazeObject); \
	DECLARE_FUNCTION(execRemoveMazeObject); \
	DECLARE_FUNCTION(execClearMazeObjects); \
	DECLARE_FUNCTION(execGetStopConditions); \
	DECLARE_FUNCTION(execAddStopCondition); \
	DECLARE_FUNCTION(execRemoveStopCondition); \
	DECLARE_FUNCTION(execClearStopConditions); \
	DECLARE_FUNCTION(execAddTexture); \
	DECLARE_FUNCTION(execRemoveTexture); \
	DECLARE_FUNCTION(execClearTextures); \
	DECLARE_FUNCTION(execGetTextures); \
	DECLARE_FUNCTION(execSetPlayerStart); \
	DECLARE_FUNCTION(execGetPlayerStart); \
	DECLARE_FUNCTION(execSetBehaviorRecordingFileName); \
	DECLARE_FUNCTION(execGetBehaviorRecordingFileName); \
	DECLARE_FUNCTION(execSetMazeSettingsFileName); \
	DECLARE_FUNCTION(execGetMazeSettingsFileName); \
	DECLARE_FUNCTION(execSetMazeName); \
	DECLARE_FUNCTION(execGetMazeName); \
	DECLARE_FUNCTION(execDoesMazeHaveSettings);


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMazeSettings(); \
	friend struct Z_Construct_UClass_UMazeSettings_Statics; \
public: \
	DECLARE_CLASS(UMazeSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMazeSettings(); \
	friend struct Z_Construct_UClass_UMazeSettings_Statics; \
public: \
	DECLARE_CLASS(UMazeSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSettings(UMazeSettings&&); \
	NO_API UMazeSettings(const UMazeSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSettings(UMazeSettings&&); \
	NO_API UMazeSettings(const UMazeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMazeSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MazeName() { return STRUCT_OFFSET(UMazeSettings, MazeName); } \
	FORCEINLINE static uint32 __PPO__MazeSettingsFileName() { return STRUCT_OFFSET(UMazeSettings, MazeSettingsFileName); } \
	FORCEINLINE static uint32 __PPO__BehaviorRecordingFileName() { return STRUCT_OFFSET(UMazeSettings, BehaviorRecordingFileName); } \
	FORCEINLINE static uint32 __PPO__PlayerStart() { return STRUCT_OFFSET(UMazeSettings, PlayerStart); } \
	FORCEINLINE static uint32 __PPO__RegionSettings() { return STRUCT_OFFSET(UMazeSettings, RegionSettings); } \
	FORCEINLINE static uint32 __PPO__MazeObjects() { return STRUCT_OFFSET(UMazeSettings, MazeObjects); } \
	FORCEINLINE static uint32 __PPO__Textures() { return STRUCT_OFFSET(UMazeSettings, Textures); } \
	FORCEINLINE static uint32 __PPO__StopConditions() { return STRUCT_OFFSET(UMazeSettings, StopConditions); }


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_19_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UMazeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
