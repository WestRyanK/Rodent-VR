// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
enum class MazeObjectType : uint8;
#ifdef RODENTVR_SimpleObject_generated_h
#error "SimpleObject.generated.h already included, missing '#pragma once' in SimpleObject.h"
#endif
#define RODENTVR_SimpleObject_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdate);


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdate);


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimpleObject(); \
	friend struct Z_Construct_UClass_ASimpleObject_Statics; \
public: \
	DECLARE_CLASS(ASimpleObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ASimpleObject)


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASimpleObject(); \
	friend struct Z_Construct_UClass_ASimpleObject_Statics; \
public: \
	DECLARE_CLASS(ASimpleObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ASimpleObject)


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimpleObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimpleObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleObject(ASimpleObject&&); \
	NO_API ASimpleObject(const ASimpleObject&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleObject(ASimpleObject&&); \
	NO_API ASimpleObject(const ASimpleObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimpleObject)


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASimpleObject, StaticMesh); }


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_11_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class ASimpleObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_SimpleObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
