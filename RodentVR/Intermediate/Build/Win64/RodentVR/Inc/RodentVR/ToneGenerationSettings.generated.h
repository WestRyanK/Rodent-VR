// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_ToneGenerationSettings_generated_h
#error "ToneGenerationSettings.generated.h already included, missing '#pragma once' in ToneGenerationSettings.h"
#endif
#define RODENTVR_ToneGenerationSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetToneVolumePercent); \
	DECLARE_FUNCTION(execGetToneVolumePercent); \
	DECLARE_FUNCTION(execSetTonePitchHz); \
	DECLARE_FUNCTION(execGetTonePitchHz); \
	DECLARE_FUNCTION(execSetToneDurationSec); \
	DECLARE_FUNCTION(execGetToneDurationSec); \
	DECLARE_FUNCTION(execSetIsToneGenerationEnabled); \
	DECLARE_FUNCTION(execGetIsToneGenerationEnabled);


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetToneVolumePercent); \
	DECLARE_FUNCTION(execGetToneVolumePercent); \
	DECLARE_FUNCTION(execSetTonePitchHz); \
	DECLARE_FUNCTION(execGetTonePitchHz); \
	DECLARE_FUNCTION(execSetToneDurationSec); \
	DECLARE_FUNCTION(execGetToneDurationSec); \
	DECLARE_FUNCTION(execSetIsToneGenerationEnabled); \
	DECLARE_FUNCTION(execGetIsToneGenerationEnabled);


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToneGenerationSettings(); \
	friend struct Z_Construct_UClass_UToneGenerationSettings_Statics; \
public: \
	DECLARE_CLASS(UToneGenerationSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UToneGenerationSettings)


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUToneGenerationSettings(); \
	friend struct Z_Construct_UClass_UToneGenerationSettings_Statics; \
public: \
	DECLARE_CLASS(UToneGenerationSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UToneGenerationSettings)


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToneGenerationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToneGenerationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToneGenerationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToneGenerationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToneGenerationSettings(UToneGenerationSettings&&); \
	NO_API UToneGenerationSettings(const UToneGenerationSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToneGenerationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToneGenerationSettings(UToneGenerationSettings&&); \
	NO_API UToneGenerationSettings(const UToneGenerationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToneGenerationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToneGenerationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToneGenerationSettings)


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsToneGenerationEnabled() { return STRUCT_OFFSET(UToneGenerationSettings, IsToneGenerationEnabled); } \
	FORCEINLINE static uint32 __PPO__ToneDurationSec() { return STRUCT_OFFSET(UToneGenerationSettings, ToneDurationSec); } \
	FORCEINLINE static uint32 __PPO__TonePitchHz() { return STRUCT_OFFSET(UToneGenerationSettings, TonePitchHz); } \
	FORCEINLINE static uint32 __PPO__ToneVolumePercent() { return STRUCT_OFFSET(UToneGenerationSettings, ToneVolumePercent); }


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UToneGenerationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_ToneGenerationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
