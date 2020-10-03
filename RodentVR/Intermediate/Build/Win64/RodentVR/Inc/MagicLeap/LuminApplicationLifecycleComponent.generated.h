// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFocusLostReason : uint8;
#ifdef MAGICLEAP_LuminApplicationLifecycleComponent_generated_h
#error "LuminApplicationLifecycleComponent.generated.h already included, missing '#pragma once' in LuminApplicationLifecycleComponent.h"
#endif
#define MAGICLEAP_LuminApplicationLifecycleComponent_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_26_DELEGATE \
struct LuminApplicationLifecycleComponent_eventLuminApplicationLifetimeFocusLostDelegate_Parms \
{ \
	EFocusLostReason reason; \
}; \
static inline void FLuminApplicationLifetimeFocusLostDelegate_DelegateWrapper(const FMulticastScriptDelegate& LuminApplicationLifetimeFocusLostDelegate, EFocusLostReason reason) \
{ \
	LuminApplicationLifecycleComponent_eventLuminApplicationLifetimeFocusLostDelegate_Parms Parms; \
	Parms.reason=reason; \
	LuminApplicationLifetimeFocusLostDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_25_DELEGATE \
static inline void FLuminApplicationLifetimeDelegate_DelegateWrapper(const FMulticastScriptDelegate& LuminApplicationLifetimeDelegate) \
{ \
	LuminApplicationLifetimeDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_RPC_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuminApplicationLifecycleComponent(); \
	friend struct Z_Construct_UClass_ULuminApplicationLifecycleComponent_Statics; \
public: \
	DECLARE_CLASS(ULuminApplicationLifecycleComponent, UApplicationLifecycleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(ULuminApplicationLifecycleComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULuminApplicationLifecycleComponent(); \
	friend struct Z_Construct_UClass_ULuminApplicationLifecycleComponent_Statics; \
public: \
	DECLARE_CLASS(ULuminApplicationLifecycleComponent, UApplicationLifecycleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(ULuminApplicationLifecycleComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminApplicationLifecycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminApplicationLifecycleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminApplicationLifecycleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminApplicationLifecycleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminApplicationLifecycleComponent(ULuminApplicationLifecycleComponent&&); \
	NO_API ULuminApplicationLifecycleComponent(const ULuminApplicationLifecycleComponent&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminApplicationLifecycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminApplicationLifecycleComponent(ULuminApplicationLifecycleComponent&&); \
	NO_API ULuminApplicationLifecycleComponent(const ULuminApplicationLifecycleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminApplicationLifecycleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminApplicationLifecycleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminApplicationLifecycleComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_19_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAP_API UClass* StaticClass<class ULuminApplicationLifecycleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_LuminApplicationLifecycleComponent_h


#define FOREACH_ENUM_EFOCUSLOSTREASON(op) \
	op(EFocusLostReason::EFocusLostReason_Invalid) \
	op(EFocusLostReason::EFocusLostReason_System) 

enum class EFocusLostReason : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EFocusLostReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
