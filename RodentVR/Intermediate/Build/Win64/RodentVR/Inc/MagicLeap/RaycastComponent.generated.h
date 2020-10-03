// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapRaycastHitResult;
struct FMagicLeapRaycastQueryParams;
struct FVector;
#ifdef MAGICLEAP_RaycastComponent_generated_h
#error "RaycastComponent.generated.h already included, missing '#pragma once' in RaycastComponent.h"
#endif
#define MAGICLEAP_RaycastComponent_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapRaycastHitResult_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FMagicLeapRaycastHitResult>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapRaycastQueryParams_Statics; \
	MAGICLEAP_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAP_API UScriptStruct* StaticStruct<struct FMagicLeapRaycastQueryParams>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_116_DELEGATE \
struct MagicLeapRaycastComponent_eventRaycastResultDelegate_Parms \
{ \
	FMagicLeapRaycastHitResult HitResult; \
}; \
static inline void FRaycastResultDelegate_DelegateWrapper(const FScriptDelegate& RaycastResultDelegate, FMagicLeapRaycastHitResult HitResult) \
{ \
	MagicLeapRaycastComponent_eventRaycastResultDelegate_Parms Parms; \
	Parms.HitResult=HitResult; \
	RaycastResultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestRaycast);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestRaycast);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapRaycastComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapRaycastComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapRaycastComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapRaycastComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapRaycastComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapRaycastComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapRaycastComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapRaycastComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapRaycastComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapRaycastComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapRaycastComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapRaycastComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapRaycastComponent(UMagicLeapRaycastComponent&&); \
	NO_API UMagicLeapRaycastComponent(const UMagicLeapRaycastComponent&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapRaycastComponent(UMagicLeapRaycastComponent&&); \
	NO_API UMagicLeapRaycastComponent(const UMagicLeapRaycastComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapRaycastComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapRaycastComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMagicLeapRaycastComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_102_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAP_API UClass* StaticClass<class UMagicLeapRaycastComponent>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeRaycastQueryParams);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeRaycastQueryParams);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapRaycastFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapRaycastFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapRaycastFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapRaycastFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMagicLeapRaycastFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapRaycastFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapRaycastFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapRaycastFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapRaycastFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapRaycastFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapRaycastFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapRaycastFunctionLibrary(UMagicLeapRaycastFunctionLibrary&&); \
	NO_API UMagicLeapRaycastFunctionLibrary(const UMagicLeapRaycastFunctionLibrary&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapRaycastFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapRaycastFunctionLibrary(UMagicLeapRaycastFunctionLibrary&&); \
	NO_API UMagicLeapRaycastFunctionLibrary(const UMagicLeapRaycastFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapRaycastFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapRaycastFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapRaycastFunctionLibrary)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_148_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAP_API UClass* StaticClass<class UMagicLeapRaycastFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_RaycastComponent_h


#define FOREACH_ENUM_EMAGICLEAPRAYCASTRESULTSTATE(op) \
	op(EMagicLeapRaycastResultState::RequestFailed) \
	op(EMagicLeapRaycastResultState::NoCollision) \
	op(EMagicLeapRaycastResultState::HitUnobserved) \
	op(EMagicLeapRaycastResultState::HitObserved) 

enum class EMagicLeapRaycastResultState : uint8;
template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapRaycastResultState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
