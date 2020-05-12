// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class MazeObjectType : int32;
#ifdef RODENTVR_MazeObject_generated_h
#error "MazeObject.generated.h already included, missing '#pragma once' in MazeObject.h"
#endif
#define RODENTVR_MazeObject_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTextureFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTextureFileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureFileName(Z_Param_TextureFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(MazeObjectType*)Z_Param__Result=P_THIS->GetObjectType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectType) \
	{ \
		P_GET_ENUM(MazeObjectType,Z_Param_ObjectTypeValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetObjectType(MazeObjectType(Z_Param_ObjectTypeValue)); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTextureFileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTextureFileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureFileNameValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureFileName(Z_Param_TextureFileNameValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(MazeObjectType*)Z_Param__Result=P_THIS->GetObjectType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectType) \
	{ \
		P_GET_ENUM(MazeObjectType,Z_Param_ObjectTypeValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetObjectType(MazeObjectType(Z_Param_ObjectTypeValue)); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeObject(); \
	friend struct Z_Construct_UClass_AMazeObject_Statics; \
public: \
	DECLARE_CLASS(AMazeObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AMazeObject)


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAMazeObject(); \
	friend struct Z_Construct_UClass_AMazeObject_Statics; \
public: \
	DECLARE_CLASS(AMazeObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AMazeObject)


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_STANDARD_CONSTRUCTORS \
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


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeObject(AMazeObject&&); \
	NO_API AMazeObject(const AMazeObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeObject)


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectType() { return STRUCT_OFFSET(AMazeObject, ObjectType); } \
	FORCEINLINE static uint32 __PPO__TextureFileName() { return STRUCT_OFFSET(AMazeObject, TextureFileName); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AMazeObject, StaticMesh); }


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_22_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObject_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class AMazeObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_MazeObject_h


#define FOREACH_ENUM_MAZEOBJECTTYPE(op) \
	op(MazeObjectType::CUBE) \
	op(MazeObjectType::CYLINDER) \
	op(MazeObjectType::SPHERE) \
	op(MazeObjectType::CONE) \
	op(MazeObjectType::FIGURINE) \
	op(MazeObjectType::INVALID) 

enum class MazeObjectType;
template<> RODENTVR_API UEnum* StaticEnum<MazeObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
