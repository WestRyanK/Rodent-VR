// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_EditorHUD_generated_h
#error "EditorHUD.generated.h already included, missing '#pragma once' in EditorHUD.h"
#endif
#define RODENTVR_EditorHUD_generated_h

#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_RPC_WRAPPERS
#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEditorHUD(); \
	friend struct Z_Construct_UClass_AEditorHUD_Statics; \
public: \
	DECLARE_CLASS(AEditorHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AEditorHUD)


#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEditorHUD(); \
	friend struct Z_Construct_UClass_AEditorHUD_Statics; \
public: \
	DECLARE_CLASS(AEditorHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AEditorHUD)


#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEditorHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEditorHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEditorHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEditorHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEditorHUD(AEditorHUD&&); \
	NO_API AEditorHUD(const AEditorHUD&); \
public:


#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEditorHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEditorHUD(AEditorHUD&&); \
	NO_API AEditorHUD(const AEditorHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEditorHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEditorHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEditorHUD)


#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class AEditorHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Editor_EditorHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
