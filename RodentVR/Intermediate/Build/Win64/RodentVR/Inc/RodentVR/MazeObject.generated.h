// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMazeObjectSettings;
#ifdef RODENTVR_MazeObject_generated_h
#error "MazeObject.generated.h already included, missing '#pragma once' in MazeObject.h"
#endif
#define RODENTVR_MazeObject_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMazeObjectTag); \
	DECLARE_FUNCTION(execUpdateFromSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMazeObjectTag); \
	DECLARE_FUNCTION(execUpdateFromSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeObject(); \
	friend struct Z_Construct_UClass_AMazeObject_Statics; \
public: \
	DECLARE_CLASS(AMazeObject, ASimpleObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AMazeObject)


#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMazeObject(); \
	friend struct Z_Construct_UClass_AMazeObject_Statics; \
public: \
	DECLARE_CLASS(AMazeObject, ASimpleObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AMazeObject)


#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeObject(AMazeObject&&); \
	NO_API AMazeObject(const AMazeObject&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeObject(AMazeObject&&); \
	NO_API AMazeObject(const AMazeObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeObject)


#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class AMazeObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_MazeObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
