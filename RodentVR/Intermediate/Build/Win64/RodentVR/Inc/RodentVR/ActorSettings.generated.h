// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef RODENTVR_ActorSettings_generated_h
#error "ActorSettings.generated.h already included, missing '#pragma once' in ActorSettings.h"
#endif
#define RODENTVR_ActorSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetPosition);


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetPosition);


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSettings(); \
	friend struct Z_Construct_UClass_UActorSettings_Statics; \
public: \
	DECLARE_CLASS(UActorSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UActorSettings)


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorSettings(); \
	friend struct Z_Construct_UClass_UActorSettings_Statics; \
public: \
	DECLARE_CLASS(UActorSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UActorSettings)


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSettings(UActorSettings&&); \
	NO_API UActorSettings(const UActorSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSettings(UActorSettings&&); \
	NO_API UActorSettings(const UActorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorSettings)


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(UActorSettings, Position); } \
	FORCEINLINE static uint32 __PPO__Rotation() { return STRUCT_OFFSET(UActorSettings, Rotation); } \
	FORCEINLINE static uint32 __PPO__Scale() { return STRUCT_OFFSET(UActorSettings, Scale); }


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UActorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_ActorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
