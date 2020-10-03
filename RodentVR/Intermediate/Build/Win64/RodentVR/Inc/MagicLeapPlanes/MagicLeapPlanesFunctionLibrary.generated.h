// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMagicLeapPlaneQueryFlags : uint8;
class AActor;
struct FMagicLeapPlaneResult;
struct FTransform;
struct FMagicLeapPlanesQuery;
struct FGuid;
enum class EMagicLeapPlaneQueryType : uint8;
#ifdef MAGICLEAPPLANES_MagicLeapPlanesFunctionLibrary_generated_h
#error "MagicLeapPlanesFunctionLibrary.generated.h already included, missing '#pragma once' in MagicLeapPlanesFunctionLibrary.h"
#endif
#define MAGICLEAPPLANES_MagicLeapPlanesFunctionLibrary_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveFlagsNotInQuery); \
	DECLARE_FUNCTION(execReorderPlaneFlags); \
	DECLARE_FUNCTION(execGetContentScale); \
	DECLARE_FUNCTION(execPlanesPersistentQueryBeginAsync); \
	DECLARE_FUNCTION(execPlanesQueryBeginAsync); \
	DECLARE_FUNCTION(execRemovePersistentQuery); \
	DECLARE_FUNCTION(execAddPersistentQuery); \
	DECLARE_FUNCTION(execIsTrackerValid); \
	DECLARE_FUNCTION(execDestroyTracker); \
	DECLARE_FUNCTION(execCreateTracker);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveFlagsNotInQuery); \
	DECLARE_FUNCTION(execReorderPlaneFlags); \
	DECLARE_FUNCTION(execGetContentScale); \
	DECLARE_FUNCTION(execPlanesPersistentQueryBeginAsync); \
	DECLARE_FUNCTION(execPlanesQueryBeginAsync); \
	DECLARE_FUNCTION(execRemovePersistentQuery); \
	DECLARE_FUNCTION(execAddPersistentQuery); \
	DECLARE_FUNCTION(execIsTrackerValid); \
	DECLARE_FUNCTION(execDestroyTracker); \
	DECLARE_FUNCTION(execCreateTracker);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapPlanesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapPlanesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapPlanes"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapPlanesFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapPlanesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapPlanesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapPlanes"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapPlanesFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapPlanesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapPlanesFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapPlanesFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapPlanesFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapPlanesFunctionLibrary(UMagicLeapPlanesFunctionLibrary&&); \
	NO_API UMagicLeapPlanesFunctionLibrary(const UMagicLeapPlanesFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapPlanesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapPlanesFunctionLibrary(UMagicLeapPlanesFunctionLibrary&&); \
	NO_API UMagicLeapPlanesFunctionLibrary(const UMagicLeapPlanesFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapPlanesFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapPlanesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapPlanesFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_9_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPPLANES_API UClass* StaticClass<class UMagicLeapPlanesFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
