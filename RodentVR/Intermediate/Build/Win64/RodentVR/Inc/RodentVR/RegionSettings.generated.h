// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UToneGenerationSettings;
class UDevice;
#ifdef RODENTVR_RegionSettings_generated_h
#error "RegionSettings.generated.h already included, missing '#pragma once' in RegionSettings.h"
#endif
#define RODENTVR_RegionSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsNosePoke); \
	DECLARE_FUNCTION(execGetIsNosePoke); \
	DECLARE_FUNCTION(execSetToneGenerationSettings); \
	DECLARE_FUNCTION(execGetToneGenerationSettings); \
	DECLARE_FUNCTION(execSetRewardDeviceDispensingDurationSec); \
	DECLARE_FUNCTION(execGetRewardDeviceDispensingDurationSec); \
	DECLARE_FUNCTION(execSetRewardDevice); \
	DECLARE_FUNCTION(execGetRewardDevice); \
	DECLARE_FUNCTION(execSetIsRewardDispensingEnabled); \
	DECLARE_FUNCTION(execGetIsRewardDispensingEnabled); \
	DECLARE_FUNCTION(execSetRegionId); \
	DECLARE_FUNCTION(execGetRegionId);


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsNosePoke); \
	DECLARE_FUNCTION(execGetIsNosePoke); \
	DECLARE_FUNCTION(execSetToneGenerationSettings); \
	DECLARE_FUNCTION(execGetToneGenerationSettings); \
	DECLARE_FUNCTION(execSetRewardDeviceDispensingDurationSec); \
	DECLARE_FUNCTION(execGetRewardDeviceDispensingDurationSec); \
	DECLARE_FUNCTION(execSetRewardDevice); \
	DECLARE_FUNCTION(execGetRewardDevice); \
	DECLARE_FUNCTION(execSetIsRewardDispensingEnabled); \
	DECLARE_FUNCTION(execGetIsRewardDispensingEnabled); \
	DECLARE_FUNCTION(execSetRegionId); \
	DECLARE_FUNCTION(execGetRegionId);


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURegionSettings(); \
	friend struct Z_Construct_UClass_URegionSettings_Statics; \
public: \
	DECLARE_CLASS(URegionSettings, UActorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URegionSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURegionSettings(); \
	friend struct Z_Construct_UClass_URegionSettings_Statics; \
public: \
	DECLARE_CLASS(URegionSettings, UActorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URegionSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URegionSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URegionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URegionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URegionSettings(URegionSettings&&); \
	NO_API URegionSettings(const URegionSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URegionSettings(URegionSettings&&); \
	NO_API URegionSettings(const URegionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URegionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URegionSettings)


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RegionId() { return STRUCT_OFFSET(URegionSettings, RegionId); } \
	FORCEINLINE static uint32 __PPO__IsRewardDispensingEnabled() { return STRUCT_OFFSET(URegionSettings, IsRewardDispensingEnabled); } \
	FORCEINLINE static uint32 __PPO__RewardDevice() { return STRUCT_OFFSET(URegionSettings, RewardDevice); } \
	FORCEINLINE static uint32 __PPO__RewardDeviceDispensingDurationSec() { return STRUCT_OFFSET(URegionSettings, RewardDeviceDispensingDurationSec); } \
	FORCEINLINE static uint32 __PPO__ToneGenerationSettings() { return STRUCT_OFFSET(URegionSettings, ToneGenerationSettings); } \
	FORCEINLINE static uint32 __PPO__IsNosePoke() { return STRUCT_OFFSET(URegionSettings, IsNosePoke); }


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_14_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class URegionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_RegionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
