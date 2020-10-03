// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMagicLeapHandTrackingKeypoint : uint8;
enum class EControllerHand : uint8;
struct FLiveLinkSourceHandle;
enum class EMagicLeapHandTrackingGesture : uint8;
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8;
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8;
enum class EMagicLeapGestureTransformSpace : uint8;
struct FTransform;
struct FVector;
#ifdef MAGICLEAPHANDTRACKING_MagicLeapHandTrackingFunctionLibrary_generated_h
#error "MagicLeapHandTrackingFunctionLibrary.generated.h already included, missing '#pragma once' in MagicLeapHandTrackingFunctionLibrary.h"
#endif
#define MAGICLEAPHANDTRACKING_MagicLeapHandTrackingFunctionLibrary_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandKeypointForMotionSource); \
	DECLARE_FUNCTION(execGetMotionSourceForHandKeypoint); \
	DECLARE_FUNCTION(execGetMagicLeapHandTrackingLiveLinkSource); \
	DECLARE_FUNCTION(execIsHoldingControl); \
	DECLARE_FUNCTION(execGetCurrentGesture); \
	DECLARE_FUNCTION(execGetCurrentGestureConfidence); \
	DECLARE_FUNCTION(execGetStaticGestureConfidenceThreshold); \
	DECLARE_FUNCTION(execSetStaticGestureConfidenceThreshold); \
	DECLARE_FUNCTION(execGetConfiguration); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execGetGestureKeypointTransform); \
	DECLARE_FUNCTION(execGetGestureKeypoints); \
	DECLARE_FUNCTION(execGetHandCenterNormalized); \
	DECLARE_FUNCTION(execGetHandThumbTip); \
	DECLARE_FUNCTION(execGetHandIndexFingerTip); \
	DECLARE_FUNCTION(execGetHandCenter);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandKeypointForMotionSource); \
	DECLARE_FUNCTION(execGetMotionSourceForHandKeypoint); \
	DECLARE_FUNCTION(execGetMagicLeapHandTrackingLiveLinkSource); \
	DECLARE_FUNCTION(execIsHoldingControl); \
	DECLARE_FUNCTION(execGetCurrentGesture); \
	DECLARE_FUNCTION(execGetCurrentGestureConfidence); \
	DECLARE_FUNCTION(execGetStaticGestureConfidenceThreshold); \
	DECLARE_FUNCTION(execSetStaticGestureConfidenceThreshold); \
	DECLARE_FUNCTION(execGetConfiguration); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execGetGestureKeypointTransform); \
	DECLARE_FUNCTION(execGetGestureKeypoints); \
	DECLARE_FUNCTION(execGetHandCenterNormalized); \
	DECLARE_FUNCTION(execGetHandThumbTip); \
	DECLARE_FUNCTION(execGetHandIndexFingerTip); \
	DECLARE_FUNCTION(execGetHandCenter);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapHandTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapHandTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapHandTracking"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapHandTrackingFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapHandTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapHandTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapHandTracking"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapHandTrackingFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapHandTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapHandTrackingFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapHandTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapHandTrackingFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapHandTrackingFunctionLibrary(UMagicLeapHandTrackingFunctionLibrary&&); \
	NO_API UMagicLeapHandTrackingFunctionLibrary(const UMagicLeapHandTrackingFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapHandTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapHandTrackingFunctionLibrary(UMagicLeapHandTrackingFunctionLibrary&&); \
	NO_API UMagicLeapHandTrackingFunctionLibrary(const UMagicLeapHandTrackingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapHandTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapHandTrackingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapHandTrackingFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_13_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPHANDTRACKING_API UClass* StaticClass<class UMagicLeapHandTrackingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
