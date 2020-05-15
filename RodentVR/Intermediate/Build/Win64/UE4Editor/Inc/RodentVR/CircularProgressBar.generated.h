// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef RODENTVR_CircularProgressBar_generated_h
#error "CircularProgressBar.generated.h already included, missing '#pragma once' in CircularProgressBar.h"
#endif
#define RODENTVR_CircularProgressBar_generated_h

#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFillColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFillColorAndOpacity(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPercent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPercent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPercent(Z_Param_InPercent); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFillColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFillColorAndOpacity(Z_Param_InColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPercent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPercent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPercent(Z_Param_InPercent); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCircularProgressBar(); \
	friend struct Z_Construct_UClass_UCircularProgressBar_Statics; \
public: \
	DECLARE_CLASS(UCircularProgressBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UCircularProgressBar)


#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCircularProgressBar(); \
	friend struct Z_Construct_UClass_UCircularProgressBar_Statics; \
public: \
	DECLARE_CLASS(UCircularProgressBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UCircularProgressBar)


#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCircularProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularProgressBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCircularProgressBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularProgressBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCircularProgressBar(UCircularProgressBar&&); \
	NO_API UCircularProgressBar(const UCircularProgressBar&); \
public:


#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCircularProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCircularProgressBar(UCircularProgressBar&&); \
	NO_API UCircularProgressBar(const UCircularProgressBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCircularProgressBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularProgressBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularProgressBar)


#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_18_PROLOG
#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_INCLASS \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Public_CircularProgressBar_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CircularProgressBar."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UCircularProgressBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Public_CircularProgressBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
