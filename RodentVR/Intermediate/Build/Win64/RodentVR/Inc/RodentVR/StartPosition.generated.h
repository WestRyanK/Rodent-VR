// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStartPositionSettings;
#ifdef RODENTVR_StartPosition_generated_h
#error "StartPosition.generated.h already included, missing '#pragma once' in StartPosition.h"
#endif
#define RODENTVR_StartPosition_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStartPositionTag); \
	DECLARE_FUNCTION(execUpdateFromSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStartPositionTag); \
	DECLARE_FUNCTION(execUpdateFromSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartPosition(); \
	friend struct Z_Construct_UClass_AStartPosition_Statics; \
public: \
	DECLARE_CLASS(AStartPosition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AStartPosition)


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAStartPosition(); \
	friend struct Z_Construct_UClass_AStartPosition_Statics; \
public: \
	DECLARE_CLASS(AStartPosition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AStartPosition)


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStartPosition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartPosition(AStartPosition&&); \
	NO_API AStartPosition(const AStartPosition&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartPosition(AStartPosition&&); \
	NO_API AStartPosition(const AStartPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartPosition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStartPosition)


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(AStartPosition, Settings); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AStartPosition, StaticMesh); }


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_10_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class AStartPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_StartPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
