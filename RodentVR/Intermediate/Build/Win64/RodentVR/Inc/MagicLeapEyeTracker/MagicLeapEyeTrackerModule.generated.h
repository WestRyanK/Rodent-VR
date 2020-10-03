// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8;
struct FMagicLeapEyeBlinkState;
#ifdef MAGICLEAPEYETRACKER_MagicLeapEyeTrackerModule_generated_h
#error "MagicLeapEyeTrackerModule.generated.h already included, missing '#pragma once' in MagicLeapEyeTrackerModule.h"
#endif
#define MAGICLEAPEYETRACKER_MagicLeapEyeTrackerModule_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics; \
	MAGICLEAPEYETRACKER_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPEYETRACKER_API UScriptStruct* StaticStruct<struct FMagicLeapEyeBlinkState>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCalibrationStatus); \
	DECLARE_FUNCTION(execGetEyeBlinkState);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCalibrationStatus); \
	DECLARE_FUNCTION(execGetEyeBlinkState);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapEyeTrackerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapEyeTrackerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapEyeTracker"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapEyeTrackerFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapEyeTrackerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapEyeTrackerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapEyeTracker"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapEyeTrackerFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapEyeTrackerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapEyeTrackerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapEyeTrackerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapEyeTrackerFunctionLibrary(UMagicLeapEyeTrackerFunctionLibrary&&); \
	NO_API UMagicLeapEyeTrackerFunctionLibrary(const UMagicLeapEyeTrackerFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapEyeTrackerFunctionLibrary(UMagicLeapEyeTrackerFunctionLibrary&&); \
	NO_API UMagicLeapEyeTrackerFunctionLibrary(const UMagicLeapEyeTrackerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapEyeTrackerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapEyeTrackerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapEyeTrackerFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_128_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPEYETRACKER_API UClass* StaticClass<class UMagicLeapEyeTrackerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
