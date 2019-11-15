// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ARodentGameMode;
#ifdef RODENTVR_SettingsLoader_generated_h
#error "SettingsLoader.generated.h already included, missing '#pragma once' in SettingsLoader.h"
#endif
#define RODENTVR_SettingsLoader_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadSettings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(ARodentGameMode,Z_Param_InRodentGameMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USettingsLoader::LoadSettings(Z_Param_WorldContextObject,Z_Param_InRodentGameMode); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadSettings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(ARodentGameMode,Z_Param_InRodentGameMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USettingsLoader::LoadSettings(Z_Param_WorldContextObject,Z_Param_InRodentGameMode); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsLoader(); \
	friend struct Z_Construct_UClass_USettingsLoader_Statics; \
public: \
	DECLARE_CLASS(USettingsLoader, UXmlFileReader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(USettingsLoader)


#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSettingsLoader(); \
	friend struct Z_Construct_UClass_USettingsLoader_Statics; \
public: \
	DECLARE_CLASS(USettingsLoader, UXmlFileReader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(USettingsLoader)


#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsLoader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsLoader(USettingsLoader&&); \
	NO_API USettingsLoader(const USettingsLoader&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsLoader(USettingsLoader&&); \
	NO_API USettingsLoader(const USettingsLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsLoader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsLoader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsLoader)


#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_14_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class USettingsLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_SettingsLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
