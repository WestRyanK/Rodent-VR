// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef VICTORYUMG_JoyColorWheel_generated_h
#error "JoyColorWheel.generated.h already included, missing '#pragma once' in JoyColorWheel.h"
#endif
#define VICTORYUMG_JoyColorWheel_generated_h

#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_16_DELEGATE \
struct _Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnJoyColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnJoyColorChangedEvent, FLinearColor const& NewColor) \
{ \
	_Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnJoyColorChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_SPARSE_DATA
#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor);


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor);


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoyColorWheel(); \
	friend struct Z_Construct_UClass_UJoyColorWheel_Statics; \
public: \
	DECLARE_CLASS(UJoyColorWheel, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryUMG"), NO_API) \
	DECLARE_SERIALIZER(UJoyColorWheel)


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUJoyColorWheel(); \
	friend struct Z_Construct_UClass_UJoyColorWheel_Statics; \
public: \
	DECLARE_CLASS(UJoyColorWheel, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryUMG"), NO_API) \
	DECLARE_SERIALIZER(UJoyColorWheel)


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyColorWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyColorWheel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyColorWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyColorWheel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyColorWheel(UJoyColorWheel&&); \
	NO_API UJoyColorWheel(const UJoyColorWheel&); \
public:


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyColorWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyColorWheel(UJoyColorWheel&&); \
	NO_API UJoyColorWheel(const UJoyColorWheel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyColorWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyColorWheel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyColorWheel)


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_18_PROLOG
#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_SPARSE_DATA \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_SPARSE_DATA \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS_NO_PURE_DECLS \
	RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JoyColorWheel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYUMG_API UClass* StaticClass<class UJoyColorWheel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Plugins_VictoryUMG_Source_VictoryUMG_Public_JoyColorWheel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
