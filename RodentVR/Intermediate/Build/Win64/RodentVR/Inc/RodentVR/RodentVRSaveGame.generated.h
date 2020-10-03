// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_RodentVRSaveGame_generated_h
#error "RodentVRSaveGame.generated.h already included, missing '#pragma once' in RodentVRSaveGame.h"
#endif
#define RODENTVR_RodentVRSaveGame_generated_h

#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRodentVRSettingsFileName); \
	DECLARE_FUNCTION(execGetRodentVRSettingsFileName);


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRodentVRSettingsFileName); \
	DECLARE_FUNCTION(execGetRodentVRSettingsFileName);


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURodentVRSaveGame(); \
	friend struct Z_Construct_UClass_URodentVRSaveGame_Statics; \
public: \
	DECLARE_CLASS(URodentVRSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSaveGame)


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURodentVRSaveGame(); \
	friend struct Z_Construct_UClass_URodentVRSaveGame_Statics; \
public: \
	DECLARE_CLASS(URodentVRSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSaveGame)


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URodentVRSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URodentVRSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRSaveGame(URodentVRSaveGame&&); \
	NO_API URodentVRSaveGame(const URodentVRSaveGame&); \
public:


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URodentVRSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRSaveGame(URodentVRSaveGame&&); \
	NO_API URodentVRSaveGame(const URodentVRSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URodentVRSaveGame)


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RodentVRSettingsFileName() { return STRUCT_OFFSET(URodentVRSaveGame, RodentVRSettingsFileName); }


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class URodentVRSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Core_RodentVRSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
