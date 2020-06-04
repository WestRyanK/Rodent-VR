// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_RewardRegion_generated_h
#error "RewardRegion.generated.h already included, missing '#pragma once' in RewardRegion.h"
#endif
#define RODENTVR_RewardRegion_generated_h

#define RodentVR_Source_RodentVR_Private_RewardRegion_h_10_DELEGATE \
struct _Script_RodentVR_eventRewardRegionEnterDelegate_Parms \
{ \
	int32 RegionEnteredId; \
}; \
static inline void FRewardRegionEnterDelegate_DelegateWrapper(const FMulticastScriptDelegate& RewardRegionEnterDelegate, int32 RegionEnteredId) \
{ \
	_Script_RodentVR_eventRewardRegionEnterDelegate_Parms Parms; \
	Parms.RegionEnteredId=RegionEnteredId; \
	RewardRegionEnterDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRewardRegionEnter);


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRewardRegionEnter);


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARewardRegion(); \
	friend struct Z_Construct_UClass_ARewardRegion_Statics; \
public: \
	DECLARE_CLASS(ARewardRegion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ARewardRegion)


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARewardRegion(); \
	friend struct Z_Construct_UClass_ARewardRegion_Statics; \
public: \
	DECLARE_CLASS(ARewardRegion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ARewardRegion)


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARewardRegion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARewardRegion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARewardRegion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARewardRegion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARewardRegion(ARewardRegion&&); \
	NO_API ARewardRegion(const ARewardRegion&); \
public:


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARewardRegion(ARewardRegion&&); \
	NO_API ARewardRegion(const ARewardRegion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARewardRegion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARewardRegion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARewardRegion)


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_RewardRegion_h_12_PROLOG
#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_INCLASS \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_RewardRegion_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_RewardRegion_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class ARewardRegion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_RewardRegion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
