// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapARPinState;
struct FGuid;
enum class EMagicLeapPassableWorldError : uint8;
struct FVector;
struct FRotator;
#ifdef MAGICLEAPARPIN_MagicLeapARPinFunctionLibrary_generated_h
#error "MagicLeapARPinFunctionLibrary.generated.h already included, missing '#pragma once' in MagicLeapARPinFunctionLibrary.h"
#endif
#define MAGICLEAPARPIN_MagicLeapARPinFunctionLibrary_generated_h

#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnBindToOnMagicLeapARPinUpdatedDelegate); \
	DECLARE_FUNCTION(execBindToOnMagicLeapARPinUpdatedDelegate); \
	DECLARE_FUNCTION(execGetARPinStateToString); \
	DECLARE_FUNCTION(execGetARPinState); \
	DECLARE_FUNCTION(execGetARPinPositionAndOrientation); \
	DECLARE_FUNCTION(execGetARPinPositionAndOrientation_TrackingSpace); \
	DECLARE_FUNCTION(execGetClosestARPin); \
	DECLARE_FUNCTION(execGetAvailableARPins); \
	DECLARE_FUNCTION(execGetNumAvailableARPins); \
	DECLARE_FUNCTION(execIsTrackerValid); \
	DECLARE_FUNCTION(execDestroyTracker); \
	DECLARE_FUNCTION(execCreateTracker);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnBindToOnMagicLeapARPinUpdatedDelegate); \
	DECLARE_FUNCTION(execBindToOnMagicLeapARPinUpdatedDelegate); \
	DECLARE_FUNCTION(execGetARPinStateToString); \
	DECLARE_FUNCTION(execGetARPinState); \
	DECLARE_FUNCTION(execGetARPinPositionAndOrientation); \
	DECLARE_FUNCTION(execGetARPinPositionAndOrientation_TrackingSpace); \
	DECLARE_FUNCTION(execGetClosestARPin); \
	DECLARE_FUNCTION(execGetAvailableARPins); \
	DECLARE_FUNCTION(execGetNumAvailableARPins); \
	DECLARE_FUNCTION(execIsTrackerValid); \
	DECLARE_FUNCTION(execDestroyTracker); \
	DECLARE_FUNCTION(execCreateTracker);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapARPinFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapARPinFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapARPin"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapARPinFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapARPinFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapARPinFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapARPin"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapARPinFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapARPinFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapARPinFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapARPinFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapARPinFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapARPinFunctionLibrary(UMagicLeapARPinFunctionLibrary&&); \
	NO_API UMagicLeapARPinFunctionLibrary(const UMagicLeapARPinFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapARPinFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapARPinFunctionLibrary(UMagicLeapARPinFunctionLibrary&&); \
	NO_API UMagicLeapARPinFunctionLibrary(const UMagicLeapARPinFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapARPinFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapARPinFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapARPinFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_9_PROLOG
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_INCLASS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPARPIN_API UClass* StaticClass<class UMagicLeapARPinFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
