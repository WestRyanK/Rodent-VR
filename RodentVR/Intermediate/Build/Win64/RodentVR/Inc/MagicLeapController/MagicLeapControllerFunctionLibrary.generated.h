// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
enum class EMagicLeapControllerHapticPattern : uint8;
enum class EMagicLeapControllerHapticIntensity : uint8;
enum class EMagicLeapControllerLEDEffect : uint8;
enum class EMagicLeapControllerLEDSpeed : uint8;
enum class EMagicLeapControllerLEDPattern : uint8;
enum class EMagicLeapControllerLEDColor : uint8;
enum class EMagicLeapControllerType : uint8;
enum class EMagicLeapControllerTrackingMode : uint8;
#ifdef MAGICLEAPCONTROLLER_MagicLeapControllerFunctionLibrary_generated_h
#error "MagicLeapControllerFunctionLibrary.generated.h already included, missing '#pragma once' in MagicLeapControllerFunctionLibrary.h"
#endif
#define MAGICLEAPCONTROLLER_MagicLeapControllerFunctionLibrary_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayControllerHapticFeedback); \
	DECLARE_FUNCTION(execPlayControllerLEDEffect); \
	DECLARE_FUNCTION(execPlayControllerLED); \
	DECLARE_FUNCTION(execInvertControllerMapping); \
	DECLARE_FUNCTION(execGetMLControllerType); \
	DECLARE_FUNCTION(execGetControllerMapping); \
	DECLARE_FUNCTION(execMaxSupportedMagicLeapControllers); \
	DECLARE_FUNCTION(execIsMLControllerConnected); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execSetMotionSourceForHand); \
	DECLARE_FUNCTION(execGetHandForMotionSource); \
	DECLARE_FUNCTION(execGetMotionSourceForHand); \
	DECLARE_FUNCTION(execGetControllerTrackingMode); \
	DECLARE_FUNCTION(execSetControllerTrackingMode); \
	DECLARE_FUNCTION(execPlayHapticPattern); \
	DECLARE_FUNCTION(execPlayLEDEffect); \
	DECLARE_FUNCTION(execPlayLEDPattern);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayControllerHapticFeedback); \
	DECLARE_FUNCTION(execPlayControllerLEDEffect); \
	DECLARE_FUNCTION(execPlayControllerLED); \
	DECLARE_FUNCTION(execInvertControllerMapping); \
	DECLARE_FUNCTION(execGetMLControllerType); \
	DECLARE_FUNCTION(execGetControllerMapping); \
	DECLARE_FUNCTION(execMaxSupportedMagicLeapControllers); \
	DECLARE_FUNCTION(execIsMLControllerConnected); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execSetMotionSourceForHand); \
	DECLARE_FUNCTION(execGetHandForMotionSource); \
	DECLARE_FUNCTION(execGetMotionSourceForHand); \
	DECLARE_FUNCTION(execGetControllerTrackingMode); \
	DECLARE_FUNCTION(execSetControllerTrackingMode); \
	DECLARE_FUNCTION(execPlayHapticPattern); \
	DECLARE_FUNCTION(execPlayLEDEffect); \
	DECLARE_FUNCTION(execPlayLEDPattern);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapControllerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapControllerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapController"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapControllerFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapControllerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapControllerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapController"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapControllerFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapControllerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapControllerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapControllerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapControllerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapControllerFunctionLibrary(UMagicLeapControllerFunctionLibrary&&); \
	NO_API UMagicLeapControllerFunctionLibrary(const UMagicLeapControllerFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapControllerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapControllerFunctionLibrary(UMagicLeapControllerFunctionLibrary&&); \
	NO_API UMagicLeapControllerFunctionLibrary(const UMagicLeapControllerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapControllerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapControllerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapControllerFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_12_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPCONTROLLER_API UClass* StaticClass<class UMagicLeapControllerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
