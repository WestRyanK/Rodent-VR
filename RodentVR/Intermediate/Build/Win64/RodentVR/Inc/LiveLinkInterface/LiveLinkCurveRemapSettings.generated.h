// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkCurveRemapSettings_generated_h
#error "LiveLinkCurveRemapSettings.generated.h already included, missing '#pragma once' in LiveLinkCurveRemapSettings.h"
#endif
#define LIVELINKINTERFACE_LiveLinkCurveRemapSettings_generated_h

#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCurveConversionSettings>();

#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_SPARSE_DATA
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_RPC_WRAPPERS
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkCurveRemapSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkCurveRemapSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkCurveRemapSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkCurveRemapSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkCurveRemapSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkCurveRemapSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkCurveRemapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkCurveRemapSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkCurveRemapSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkCurveRemapSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkCurveRemapSettings(ULiveLinkCurveRemapSettings&&); \
	NO_API ULiveLinkCurveRemapSettings(const ULiveLinkCurveRemapSettings&); \
public:


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkCurveRemapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkCurveRemapSettings(ULiveLinkCurveRemapSettings&&); \
	NO_API ULiveLinkCurveRemapSettings(const ULiveLinkCurveRemapSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkCurveRemapSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkCurveRemapSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkCurveRemapSettings)


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_20_PROLOG
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_SPARSE_DATA \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_INCLASS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_SPARSE_DATA \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkCurveRemapSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
