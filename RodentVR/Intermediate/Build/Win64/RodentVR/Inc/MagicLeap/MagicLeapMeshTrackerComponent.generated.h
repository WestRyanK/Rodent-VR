// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FVector;
struct FMagicLeapTrackingMeshInfo;
struct FMagicLeapMeshBlockRequest;
class IMagicLeapMeshBlockSelectorInterface;
class UMRMeshComponent;
#ifdef MAGICLEAP_MagicLeapMeshTrackerComponent_generated_h
#error "MagicLeapMeshTrackerComponent.generated.h already included, missing '#pragma once' in MagicLeapMeshTrackerComponent.h"
#endif
#define MAGICLEAP_MagicLeapMeshTrackerComponent_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_74_DELEGATE \
struct MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms \
{ \
	FGuid ID; \
	TArray<FVector> Vertices; \
	TArray<int32> Triangles; \
	TArray<FVector> Normals; \
	TArray<float> Confidence; \
}; \
static inline void FOnMeshTrackerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMeshTrackerUpdated, FGuid ID, TArray<FVector> const& Vertices, TArray<int32> const& Triangles, TArray<FVector> const& Normals, TArray<float> const& Confidence) \
{ \
	MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms Parms; \
	Parms.ID=ID; \
	Parms.Vertices=Vertices; \
	Parms.Triangles=Triangles; \
	Parms.Normals=Normals; \
	Parms.Confidence=Confidence; \
	OnMeshTrackerUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_RPC_WRAPPERS \
	virtual void SelectMeshBlocks_Implementation(FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh); \
 \
	DECLARE_FUNCTION(execSelectMeshBlocks); \
	DECLARE_FUNCTION(execGetNumQueuedBlockUpdates); \
	DECLARE_FUNCTION(execDisconnectBlockSelector); \
	DECLARE_FUNCTION(execConnectBlockSelector); \
	DECLARE_FUNCTION(execDisconnectMRMesh); \
	DECLARE_FUNCTION(execConnectMRMesh);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectMeshBlocks); \
	DECLARE_FUNCTION(execGetNumQueuedBlockUpdates); \
	DECLARE_FUNCTION(execDisconnectBlockSelector); \
	DECLARE_FUNCTION(execConnectBlockSelector); \
	DECLARE_FUNCTION(execDisconnectMRMesh); \
	DECLARE_FUNCTION(execConnectMRMesh);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_EVENT_PARMS \
	struct MagicLeapMeshTrackerComponent_eventSelectMeshBlocks_Parms \
	{ \
		FMagicLeapTrackingMeshInfo NewMeshInfo; \
		TArray<FMagicLeapMeshBlockRequest> RequestedMesh; \
	};


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_CALLBACK_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapMeshTrackerComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapMeshTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapMeshTrackerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMagicLeapMeshTrackerComponent*>(this); }


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapMeshTrackerComponent(); \
	friend struct Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapMeshTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapMeshTrackerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMagicLeapMeshTrackerComponent*>(this); }


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapMeshTrackerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapMeshTrackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapMeshTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapMeshTrackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapMeshTrackerComponent(UMagicLeapMeshTrackerComponent&&); \
	NO_API UMagicLeapMeshTrackerComponent(const UMagicLeapMeshTrackerComponent&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapMeshTrackerComponent(UMagicLeapMeshTrackerComponent&&); \
	NO_API UMagicLeapMeshTrackerComponent(const UMagicLeapMeshTrackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapMeshTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapMeshTrackerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMagicLeapMeshTrackerComponent)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_17_PROLOG \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_EVENT_PARMS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAP_API UClass* StaticClass<class UMagicLeapMeshTrackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MagicLeapMeshTrackerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
