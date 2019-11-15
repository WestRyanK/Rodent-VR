// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_RodentGameMode_generated_h
#error "RodentGameMode.generated.h already included, missing '#pragma once' in RodentGameMode.h"
#endif
#define RODENTVR_RodentGameMode_generated_h

#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadNextMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadNextMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadSettings(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadNextMaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadNextMaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadSettings(); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARodentGameMode(); \
	friend struct Z_Construct_UClass_ARodentGameMode_Statics; \
public: \
	DECLARE_CLASS(ARodentGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ARodentGameMode)


#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesARodentGameMode(); \
	friend struct Z_Construct_UClass_ARodentGameMode_Statics; \
public: \
	DECLARE_CLASS(ARodentGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ARodentGameMode)


#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARodentGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARodentGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARodentGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARodentGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARodentGameMode(ARodentGameMode&&); \
	NO_API ARodentGameMode(const ARodentGameMode&); \
public:


#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARodentGameMode(ARodentGameMode&&); \
	NO_API ARodentGameMode(const ARodentGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARodentGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARodentGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARodentGameMode)


#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_16_PROLOG
#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_INCLASS \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_RodentGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class ARodentGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_RodentGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS