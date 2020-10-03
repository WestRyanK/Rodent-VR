// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapTouchpadGesture;
#ifdef MAGICLEAPCONTROLLER_TouchpadGesturesComponent_generated_h
#error "TouchpadGesturesComponent.generated.h already included, missing '#pragma once' in TouchpadGesturesComponent.h"
#endif
#define MAGICLEAPCONTROLLER_TouchpadGesturesComponent_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics; \
	MAGICLEAPCONTROLLER_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPCONTROLLER_API UScriptStruct* StaticStruct<struct FMagicLeapTouchpadGesture>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_130_DELEGATE \
struct MagicLeapTouchpadGesturesComponent_eventTouchpadGestureEvent_Parms \
{ \
	FMagicLeapTouchpadGesture GestureData; \
}; \
static inline void FTouchpadGestureEvent_DelegateWrapper(const FMulticastScriptDelegate& TouchpadGestureEvent, FMagicLeapTouchpadGesture const& GestureData) \
{ \
	MagicLeapTouchpadGesturesComponent_eventTouchpadGestureEvent_Parms Parms; \
	Parms.GestureData=GestureData; \
	TouchpadGestureEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_RPC_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapTouchpadGesturesComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapTouchpadGesturesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapController"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapTouchpadGesturesComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapTouchpadGesturesComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapTouchpadGesturesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapController"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapTouchpadGesturesComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapTouchpadGesturesComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapTouchpadGesturesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapTouchpadGesturesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapTouchpadGesturesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapTouchpadGesturesComponent(UMagicLeapTouchpadGesturesComponent&&); \
	NO_API UMagicLeapTouchpadGesturesComponent(const UMagicLeapTouchpadGesturesComponent&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapTouchpadGesturesComponent(UMagicLeapTouchpadGesturesComponent&&); \
	NO_API UMagicLeapTouchpadGesturesComponent(const UMagicLeapTouchpadGesturesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapTouchpadGesturesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapTouchpadGesturesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMagicLeapTouchpadGesturesComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_122_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPCONTROLLER_API UClass* StaticClass<class UMagicLeapTouchpadGesturesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_TouchpadGesturesComponent_h


#define FOREACH_ENUM_EMAGICLEAPTOUCHPADGESTUREDIRECTION(op) \
	op(EMagicLeapTouchpadGestureDirection::None) \
	op(EMagicLeapTouchpadGestureDirection::Up) \
	op(EMagicLeapTouchpadGestureDirection::Down) \
	op(EMagicLeapTouchpadGestureDirection::Left) \
	op(EMagicLeapTouchpadGestureDirection::Right) \
	op(EMagicLeapTouchpadGestureDirection::In) \
	op(EMagicLeapTouchpadGestureDirection::Out) \
	op(EMagicLeapTouchpadGestureDirection::Clockwise) \
	op(EMagicLeapTouchpadGestureDirection::CounterClockwise) 

enum class EMagicLeapTouchpadGestureDirection : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapTouchpadGestureDirection>();

#define FOREACH_ENUM_EMAGICLEAPTOUCHPADGESTURETYPE(op) \
	op(EMagicLeapTouchpadGestureType::None) \
	op(EMagicLeapTouchpadGestureType::Tap) \
	op(EMagicLeapTouchpadGestureType::ForceTapDown) \
	op(EMagicLeapTouchpadGestureType::ForceTapUp) \
	op(EMagicLeapTouchpadGestureType::ForceDwell) \
	op(EMagicLeapTouchpadGestureType::SecondForceDown) \
	op(EMagicLeapTouchpadGestureType::LongHold) \
	op(EMagicLeapTouchpadGestureType::RadialScroll) \
	op(EMagicLeapTouchpadGestureType::Swipe) \
	op(EMagicLeapTouchpadGestureType::Scroll) \
	op(EMagicLeapTouchpadGestureType::Pinch) 

enum class EMagicLeapTouchpadGestureType : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapTouchpadGestureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
