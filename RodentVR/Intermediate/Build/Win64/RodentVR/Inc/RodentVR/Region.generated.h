// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URegionSettings;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RODENTVR_Region_generated_h
#error "Region.generated.h already included, missing '#pragma once' in Region.h"
#endif
#define RODENTVR_Region_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_13_DELEGATE \
struct _Script_RodentVR_eventRegionEnterDelegate_Parms \
{ \
	URegionSettings* RegionEntered; \
}; \
static inline void FRegionEnterDelegate_DelegateWrapper(const FMulticastScriptDelegate& RegionEnterDelegate, URegionSettings* RegionEntered) \
{ \
	_Script_RodentVR_eventRegionEnterDelegate_Parms Parms; \
	Parms.RegionEntered=RegionEntered; \
	RegionEnterDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnRegionEnter); \
	DECLARE_FUNCTION(execGetRegionTag); \
	DECLARE_FUNCTION(execUpdateFromSettings); \
	DECLARE_FUNCTION(execSetIsForEditor); \
	DECLARE_FUNCTION(execGetIsForEditor); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execInitBoxComponent); \
	DECLARE_FUNCTION(execInitNosePoke); \
	DECLARE_FUNCTION(execInitStaticMesh);


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnRegionEnter); \
	DECLARE_FUNCTION(execGetRegionTag); \
	DECLARE_FUNCTION(execUpdateFromSettings); \
	DECLARE_FUNCTION(execSetIsForEditor); \
	DECLARE_FUNCTION(execGetIsForEditor); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execInitBoxComponent); \
	DECLARE_FUNCTION(execInitNosePoke); \
	DECLARE_FUNCTION(execInitStaticMesh);


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARegion(); \
	friend struct Z_Construct_UClass_ARegion_Statics; \
public: \
	DECLARE_CLASS(ARegion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ARegion)


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_INCLASS \
private: \
	static void StaticRegisterNativesARegion(); \
	friend struct Z_Construct_UClass_ARegion_Statics; \
public: \
	DECLARE_CLASS(ARegion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ARegion)


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARegion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARegion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARegion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARegion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARegion(ARegion&&); \
	NO_API ARegion(const ARegion&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARegion(ARegion&&); \
	NO_API ARegion(const ARegion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARegion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARegion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARegion)


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(ARegion, Settings); } \
	FORCEINLINE static uint32 __PPO__RegionColor() { return STRUCT_OFFSET(ARegion, RegionColor); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ARegion, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ARegion, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__RewardDispenserComponent() { return STRUCT_OFFSET(ARegion, RewardDispenserComponent); } \
	FORCEINLINE static uint32 __PPO__NosePokeStaticMesh() { return STRUCT_OFFSET(ARegion, NosePokeStaticMesh); } \
	FORCEINLINE static uint32 __PPO__IsForEditor() { return STRUCT_OFFSET(ARegion, IsForEditor); }


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_18_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_Region_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class ARegion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_Region_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
