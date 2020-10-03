// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_RegionBoxComponent_generated_h
#error "RegionBoxComponent.generated.h already included, missing '#pragma once' in RegionBoxComponent.h"
#endif
#define RODENTVR_RegionBoxComponent_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLineThickness); \
	DECLARE_FUNCTION(execGetLineThickness);


#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLineThickness); \
	DECLARE_FUNCTION(execGetLineThickness);


#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURegionBoxComponent(); \
	friend struct Z_Construct_UClass_URegionBoxComponent_Statics; \
public: \
	DECLARE_CLASS(URegionBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URegionBoxComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URegionBoxComponent*>(this); }


#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURegionBoxComponent(); \
	friend struct Z_Construct_UClass_URegionBoxComponent_Statics; \
public: \
	DECLARE_CLASS(URegionBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URegionBoxComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URegionBoxComponent*>(this); }


#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URegionBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URegionBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URegionBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URegionBoxComponent(URegionBoxComponent&&); \
	NO_API URegionBoxComponent(const URegionBoxComponent&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URegionBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URegionBoxComponent(URegionBoxComponent&&); \
	NO_API URegionBoxComponent(const URegionBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URegionBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URegionBoxComponent)


#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class URegionBoxComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_RegionBoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
