// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapARPinState;
class UMagicLeapARPinSaveGame;
struct FGuid;
class AActor;
class USceneComponent;
#ifdef MAGICLEAPARPIN_MagicLeapARPinComponent_generated_h
#error "MagicLeapARPinComponent.generated.h already included, missing '#pragma once' in MagicLeapARPinComponent.h"
#endif
#define MAGICLEAPARPIN_MagicLeapARPinComponent_generated_h

#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_131_DELEGATE \
static inline void FPersistentEntityPinLost_DelegateWrapper(const FMulticastScriptDelegate& PersistentEntityPinLost) \
{ \
	PersistentEntityPinLost.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_122_DELEGATE \
struct MagicLeapARPinComponent_eventPersistentEntityPinned_Parms \
{ \
	bool bRestoredOrSynced; \
}; \
static inline void FPersistentEntityPinned_DelegateWrapper(const FMulticastScriptDelegate& PersistentEntityPinned, bool bRestoredOrSynced) \
{ \
	MagicLeapARPinComponent_eventPersistentEntityPinned_Parms Parms; \
	Parms.bRestoredOrSynced=bRestoredOrSynced ? true : false; \
	PersistentEntityPinned.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPinState); \
	DECLARE_FUNCTION(execGetPinData); \
	DECLARE_FUNCTION(execGetPinnedPinID); \
	DECLARE_FUNCTION(execPinRestoredOrSynced); \
	DECLARE_FUNCTION(execIsPinned); \
	DECLARE_FUNCTION(execUnPin); \
	DECLARE_FUNCTION(execPinActor); \
	DECLARE_FUNCTION(execPinSceneComponent);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPinState); \
	DECLARE_FUNCTION(execGetPinData); \
	DECLARE_FUNCTION(execGetPinnedPinID); \
	DECLARE_FUNCTION(execPinRestoredOrSynced); \
	DECLARE_FUNCTION(execIsPinned); \
	DECLARE_FUNCTION(execUnPin); \
	DECLARE_FUNCTION(execPinActor); \
	DECLARE_FUNCTION(execPinSceneComponent);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapARPinComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapARPinComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapARPinComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapARPin"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapARPinComponent)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapARPinComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapARPinComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapARPinComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapARPin"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapARPinComponent)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapARPinComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapARPinComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapARPinComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapARPinComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapARPinComponent(UMagicLeapARPinComponent&&); \
	NO_API UMagicLeapARPinComponent(const UMagicLeapARPinComponent&); \
public:


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapARPinComponent(UMagicLeapARPinComponent&&); \
	NO_API UMagicLeapARPinComponent(const UMagicLeapARPinComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapARPinComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapARPinComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMagicLeapARPinComponent)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PinnedCFUID() { return STRUCT_OFFSET(UMagicLeapARPinComponent, PinnedCFUID); } \
	FORCEINLINE static uint32 __PPO__PinnedSceneComponent() { return STRUCT_OFFSET(UMagicLeapARPinComponent, PinnedSceneComponent); } \
	FORCEINLINE static uint32 __PPO__PinData() { return STRUCT_OFFSET(UMagicLeapARPinComponent, PinData); }


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_11_PROLOG
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_INCLASS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPARPIN_API UClass* StaticClass<class UMagicLeapARPinComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
