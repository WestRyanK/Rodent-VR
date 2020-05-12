// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMazeObject;
class UStopCondition;
 
struct FTransform;
#ifdef RODENTVR_MazeSettings_generated_h
#error "MazeSettings.generated.h already included, missing '#pragma once' in MazeSettings.h"
#endif
#define RODENTVR_MazeSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMazeObject) \
	{ \
		P_GET_OBJECT(AMazeObject,Z_Param_MazeObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMazeObject(Z_Param_MazeObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMazeObject) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveMazeObject(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMazeObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMazeObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStopCondition) \
	{ \
		P_GET_OBJECT(UStopCondition,Z_Param_StopCondition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStopCondition(Z_Param_StopCondition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStopCondition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStopCondition(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearStopConditions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearStopConditions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTexture(Z_Param_SlotName,Z_Param_TextureFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTexture(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTextures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearTextures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetTextures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAreRegionsVisible) \
	{ \
		P_GET_UBOOL(Z_Param_AreRegionsVisibleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAreRegionsVisible(Z_Param_AreRegionsVisibleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAreRegionsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAreRegionsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerStart) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_PlayerStartValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerStart(Z_Param_PlayerStartValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetPlayerStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorRecordingFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BehaviorRecordingFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBehaviorRecordingFileName(Z_Param_BehaviorRecordingFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBehaviorRecordingFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetBehaviorRecordingFileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMazeSettingsFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MazeSettingsFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMazeSettingsFileName(Z_Param_MazeSettingsFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeSettingsFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMazeSettingsFileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMazeName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MazeNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMazeName(Z_Param_MazeNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMazeName(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMazeObject) \
	{ \
		P_GET_OBJECT(AMazeObject,Z_Param_MazeObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMazeObject(Z_Param_MazeObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMazeObject) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveMazeObject(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMazeObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMazeObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStopCondition) \
	{ \
		P_GET_OBJECT(UStopCondition,Z_Param_StopCondition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStopCondition(Z_Param_StopCondition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStopCondition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStopCondition(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearStopConditions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearStopConditions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTexture(Z_Param_SlotName,Z_Param_TextureFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTexture(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTextures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearTextures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetTextures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAreRegionsVisible) \
	{ \
		P_GET_UBOOL(Z_Param_AreRegionsVisibleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAreRegionsVisible(Z_Param_AreRegionsVisibleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAreRegionsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAreRegionsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerStart) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_PlayerStartValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerStart(Z_Param_PlayerStartValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetPlayerStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorRecordingFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BehaviorRecordingFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBehaviorRecordingFileName(Z_Param_BehaviorRecordingFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBehaviorRecordingFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetBehaviorRecordingFileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMazeSettingsFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MazeSettingsFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMazeSettingsFileName(Z_Param_MazeSettingsFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeSettingsFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMazeSettingsFileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMazeName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MazeNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMazeName(Z_Param_MazeNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMazeName(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMazeSettings(); \
	friend struct Z_Construct_UClass_UMazeSettings_Statics; \
public: \
	DECLARE_CLASS(UMazeSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMazeSettings(); \
	friend struct Z_Construct_UClass_UMazeSettings_Statics; \
public: \
	DECLARE_CLASS(UMazeSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSettings(UMazeSettings&&); \
	NO_API UMazeSettings(const UMazeSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSettings(UMazeSettings&&); \
	NO_API UMazeSettings(const UMazeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MazeName() { return STRUCT_OFFSET(UMazeSettings, MazeName); } \
	FORCEINLINE static uint32 __PPO__MazeSettingsFileName() { return STRUCT_OFFSET(UMazeSettings, MazeSettingsFileName); } \
	FORCEINLINE static uint32 __PPO__BehaviorRecordingFileName() { return STRUCT_OFFSET(UMazeSettings, BehaviorRecordingFileName); } \
	FORCEINLINE static uint32 __PPO__PlayerStart() { return STRUCT_OFFSET(UMazeSettings, PlayerStart); } \
	FORCEINLINE static uint32 __PPO__AreRegionsVisible() { return STRUCT_OFFSET(UMazeSettings, AreRegionsVisible); } \
	FORCEINLINE static uint32 __PPO__MazeObjects() { return STRUCT_OFFSET(UMazeSettings, MazeObjects); } \
	FORCEINLINE static uint32 __PPO__Textures() { return STRUCT_OFFSET(UMazeSettings, Textures); } \
	FORCEINLINE static uint32 __PPO__StopConditions() { return STRUCT_OFFSET(UMazeSettings, StopConditions); }


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_15_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UMazeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_MazeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
