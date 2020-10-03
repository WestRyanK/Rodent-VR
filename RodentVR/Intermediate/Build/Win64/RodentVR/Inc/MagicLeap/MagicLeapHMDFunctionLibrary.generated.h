// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapGraphicsClientPerformanceInfo;
enum class EMagicLeapHeadTrackingMapEvent : uint8;
struct FMagicLeapHeadTrackingState;
class AActor;
struct FRotator;
struct FQuat;
struct FVector;
#ifdef MAGICLEAP_MagicLeapHMDFunctionLibrary_generated_h
#error "MagicLeapHMDFunctionLibrary.generated.h already included, missing '#pragma once' in MagicLeapHMDFunctionLibrary.h"
#endif
#define MAGICLEAP_MagicLeapHMDFunctionLibrary_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapGraphicsClientPerformanceInfo_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FMagicLeapGraphicsClientPerformanceInfo>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapHeadTrackingState_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FMagicLeapHeadTrackingState>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGraphicsClientPerformanceInfo); \
	DECLARE_FUNCTION(execSetAppReady); \
	DECLARE_FUNCTION(execGetHeadTrackingMapEvents); \
	DECLARE_FUNCTION(execGetHeadTrackingState); \
	DECLARE_FUNCTION(execIsRunningOnMagicLeapHMD); \
	DECLARE_FUNCTION(execGetPlatformAPILevel); \
	DECLARE_FUNCTION(execGetMinimumAPILevel); \
	DECLARE_FUNCTION(execGetMLSDKVersion); \
	DECLARE_FUNCTION(execGetMLSDKVersionRevision); \
	DECLARE_FUNCTION(execGetMLSDKVersionMinor); \
	DECLARE_FUNCTION(execGetMLSDKVersionMajor); \
	DECLARE_FUNCTION(execSetStabilizationDepthActor); \
	DECLARE_FUNCTION(execSetFocusActor); \
	DECLARE_FUNCTION(execSetBaseRotation); \
	DECLARE_FUNCTION(execSetBaseOrientation); \
	DECLARE_FUNCTION(execSetBasePosition);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphicsClientPerformanceInfo); \
	DECLARE_FUNCTION(execSetAppReady); \
	DECLARE_FUNCTION(execGetHeadTrackingMapEvents); \
	DECLARE_FUNCTION(execGetHeadTrackingState); \
	DECLARE_FUNCTION(execIsRunningOnMagicLeapHMD); \
	DECLARE_FUNCTION(execGetPlatformAPILevel); \
	DECLARE_FUNCTION(execGetMinimumAPILevel); \
	DECLARE_FUNCTION(execGetMLSDKVersion); \
	DECLARE_FUNCTION(execGetMLSDKVersionRevision); \
	DECLARE_FUNCTION(execGetMLSDKVersionMinor); \
	DECLARE_FUNCTION(execGetMLSDKVersionMajor); \
	DECLARE_FUNCTION(execSetStabilizationDepthActor); \
	DECLARE_FUNCTION(execSetFocusActor); \
	DECLARE_FUNCTION(execSetBaseRotation); \
	DECLARE_FUNCTION(execSetBaseOrientation); \
	DECLARE_FUNCTION(execSetBasePosition);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapHMDFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapHMDFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapHMDFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapHMDFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapHMDFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapHMDFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapHMDFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapHMDFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapHMDFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapHMDFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapHMDFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapHMDFunctionLibrary(UMagicLeapHMDFunctionLibrary&&); \
	NO_API UMagicLeapHMDFunctionLibrary(const UMagicLeapHMDFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapHMDFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapHMDFunctionLibrary(UMagicLeapHMDFunctionLibrary&&); \
	NO_API UMagicLeapHMDFunctionLibrary(const UMagicLeapHMDFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapHMDFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapHMDFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapHMDFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_92_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAP_API UClass* StaticClass<class UMagicLeapHMDFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapHMDFunctionLibrary_h


#define FOREACH_ENUM_EMAGICLEAPHEADTRACKINGMAPEVENT(op) \
	op(EMagicLeapHeadTrackingMapEvent::Lost) \
	op(EMagicLeapHeadTrackingMapEvent::Recovered) \
	op(EMagicLeapHeadTrackingMapEvent::RecoveryFailed) \
	op(EMagicLeapHeadTrackingMapEvent::NewSession) 

enum class EMagicLeapHeadTrackingMapEvent : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapHeadTrackingMapEvent>();

#define FOREACH_ENUM_EMAGICLEAPHEADTRACKINGMODE(op) \
	op(EMagicLeapHeadTrackingMode::PositionAndOrientation) \
	op(EMagicLeapHeadTrackingMode::Unavailable) \
	op(EMagicLeapHeadTrackingMode::Unknown) 

enum class EMagicLeapHeadTrackingMode : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapHeadTrackingMode>();

#define FOREACH_ENUM_EMAGICLEAPHEADTRACKINGERROR(op) \
	op(EMagicLeapHeadTrackingError::None) \
	op(EMagicLeapHeadTrackingError::NotEnoughFeatures) \
	op(EMagicLeapHeadTrackingError::LowLight) \
	op(EMagicLeapHeadTrackingError::Unknown) 

enum class EMagicLeapHeadTrackingError : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapHeadTrackingError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
