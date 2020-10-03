// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapTrackingMeshInfo;
struct FMagicLeapMeshBlockRequest;
#ifdef MAGICLEAP_MeshBlockSelectorInterface_generated_h
#error "MeshBlockSelectorInterface.generated.h already included, missing '#pragma once' in MeshBlockSelectorInterface.h"
#endif
#define MAGICLEAP_MeshBlockSelectorInterface_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_RPC_WRAPPERS \
	virtual void SelectMeshBlocks_Implementation(FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh) {}; \
 \
	DECLARE_FUNCTION(execSelectMeshBlocks);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SelectMeshBlocks_Implementation(FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh) {}; \
 \
	DECLARE_FUNCTION(execSelectMeshBlocks);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_EVENT_PARMS \
	struct MagicLeapMeshBlockSelectorInterface_eventSelectMeshBlocks_Parms \
	{ \
		FMagicLeapTrackingMeshInfo NewMeshInfo; \
		TArray<FMagicLeapMeshBlockRequest> RequestedMesh; \
	};


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_CALLBACK_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapMeshBlockSelectorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapMeshBlockSelectorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapMeshBlockSelectorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapMeshBlockSelectorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapMeshBlockSelectorInterface(UMagicLeapMeshBlockSelectorInterface&&); \
	NO_API UMagicLeapMeshBlockSelectorInterface(const UMagicLeapMeshBlockSelectorInterface&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapMeshBlockSelectorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapMeshBlockSelectorInterface(UMagicLeapMeshBlockSelectorInterface&&); \
	NO_API UMagicLeapMeshBlockSelectorInterface(const UMagicLeapMeshBlockSelectorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapMeshBlockSelectorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapMeshBlockSelectorInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapMeshBlockSelectorInterface)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMagicLeapMeshBlockSelectorInterface(); \
	friend struct Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapMeshBlockSelectorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MagicLeap"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapMeshBlockSelectorInterface)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMagicLeapMeshBlockSelectorInterface() {} \
public: \
	typedef UMagicLeapMeshBlockSelectorInterface UClassType; \
	typedef IMagicLeapMeshBlockSelectorInterface ThisClass; \
	static void Execute_SelectMeshBlocks(UObject* O, FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IMagicLeapMeshBlockSelectorInterface() {} \
public: \
	typedef UMagicLeapMeshBlockSelectorInterface UClassType; \
	typedef IMagicLeapMeshBlockSelectorInterface ThisClass; \
	static void Execute_SelectMeshBlocks(UObject* O, FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_8_PROLOG \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_EVENT_PARMS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAP_API UClass* StaticClass<class UMagicLeapMeshBlockSelectorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeap_Public_MeshBlockSelectorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
