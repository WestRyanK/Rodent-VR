// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class TextureEnum : uint8;
#ifdef RODENTVR_TextureSettings_generated_h
#error "TextureSettings.generated.h already included, missing '#pragma once' in TextureSettings.h"
#endif
#define RODENTVR_TextureSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTextureEnumString); \
	DECLARE_FUNCTION(execGetTextureEnumFromString); \
	DECLARE_FUNCTION(execSetCustomTexturePath); \
	DECLARE_FUNCTION(execGetCustomTexturePath); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execGetTexture);


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTextureEnumString); \
	DECLARE_FUNCTION(execGetTextureEnumFromString); \
	DECLARE_FUNCTION(execSetCustomTexturePath); \
	DECLARE_FUNCTION(execGetCustomTexturePath); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execGetTexture);


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureSettings(); \
	friend struct Z_Construct_UClass_UTextureSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UTextureSettings)


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUTextureSettings(); \
	friend struct Z_Construct_UClass_UTextureSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UTextureSettings)


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureSettings(UTextureSettings&&); \
	NO_API UTextureSettings(const UTextureSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureSettings(UTextureSettings&&); \
	NO_API UTextureSettings(const UTextureSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTextureSettings)


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Texture() { return STRUCT_OFFSET(UTextureSettings, Texture); } \
	FORCEINLINE static uint32 __PPO__CustomTexturePath() { return STRUCT_OFFSET(UTextureSettings, CustomTexturePath); }


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_32_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UTextureSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_TextureSettings_h


#define FOREACH_ENUM_TEXTUREENUM(op) \
	op(TextureEnum::CHECKERS_LARGE) \
	op(TextureEnum::CHECKERS_MEDIUM) \
	op(TextureEnum::CHECKERS_SMALL) \
	op(TextureEnum::STRIPES_LARGE) \
	op(TextureEnum::STRIPES_SMALL) \
	op(TextureEnum::DOTS_1) \
	op(TextureEnum::DOTS_2) \
	op(TextureEnum::BLACK) \
	op(TextureEnum::GRAY) \
	op(TextureEnum::WHITE) \
	op(TextureEnum::GREEN) \
	op(TextureEnum::BLUE) \
	op(TextureEnum::CYAN) \
	op(TextureEnum::CUSTOM) 

enum class TextureEnum : uint8;
template<> RODENTVR_API UEnum* StaticEnum<TextureEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
