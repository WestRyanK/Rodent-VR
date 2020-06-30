// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
class UMazeSettings;
#ifdef RODENTVR_MazeSpawner_generated_h
#error "MazeSpawner.generated.h already included, missing '#pragma once' in MazeSpawner.h"
#endif
#define RODENTVR_MazeSpawner_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActorFromSetting); \
	DECLARE_FUNCTION(execGetSettingFromActor); \
	DECLARE_FUNCTION(execSpawnMaze);


#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorFromSetting); \
	DECLARE_FUNCTION(execGetSettingFromActor); \
	DECLARE_FUNCTION(execSpawnMaze);


#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMazeSpawner(); \
	friend struct Z_Construct_UClass_UMazeSpawner_Statics; \
public: \
	DECLARE_CLASS(UMazeSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSpawner)


#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMazeSpawner(); \
	friend struct Z_Construct_UClass_UMazeSpawner_Statics; \
public: \
	DECLARE_CLASS(UMazeSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSpawner)


#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSpawner(UMazeSpawner&&); \
	NO_API UMazeSpawner(const UMazeSpawner&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSpawner(UMazeSpawner&&); \
	NO_API UMazeSpawner(const UMazeSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSpawner)


#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_14_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UMazeSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_MazeSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
