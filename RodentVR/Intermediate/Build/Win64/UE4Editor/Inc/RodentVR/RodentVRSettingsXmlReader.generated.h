// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URodentVRSettings;
#ifdef RODENTVR_RodentVRSettingsXmlReader_generated_h
#error "RodentVRSettingsXmlReader.generated.h already included, missing '#pragma once' in RodentVRSettingsXmlReader.h"
#endif
#define RODENTVR_RodentVRSettingsXmlReader_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadRodentVRSettingsFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RodentVRSettingsFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URodentVRSettings**)Z_Param__Result=URodentVRSettingsXmlReader::LoadRodentVRSettingsFromFile(Z_Param_RodentVRSettingsFileName); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadRodentVRSettingsFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RodentVRSettingsFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URodentVRSettings**)Z_Param__Result=URodentVRSettingsXmlReader::LoadRodentVRSettingsFromFile(Z_Param_RodentVRSettingsFileName); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURodentVRSettingsXmlReader(); \
	friend struct Z_Construct_UClass_URodentVRSettingsXmlReader_Statics; \
public: \
	DECLARE_CLASS(URodentVRSettingsXmlReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSettingsXmlReader)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURodentVRSettingsXmlReader(); \
	friend struct Z_Construct_UClass_URodentVRSettingsXmlReader_Statics; \
public: \
	DECLARE_CLASS(URodentVRSettingsXmlReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRSettingsXmlReader)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URodentVRSettingsXmlReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URodentVRSettingsXmlReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRSettingsXmlReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRSettingsXmlReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRSettingsXmlReader(URodentVRSettingsXmlReader&&); \
	NO_API URodentVRSettingsXmlReader(const URodentVRSettingsXmlReader&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URodentVRSettingsXmlReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRSettingsXmlReader(URodentVRSettingsXmlReader&&); \
	NO_API URodentVRSettingsXmlReader(const URodentVRSettingsXmlReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRSettingsXmlReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRSettingsXmlReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URodentVRSettingsXmlReader)


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_15_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class URodentVRSettingsXmlReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_RodentVRSettingsXmlReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
