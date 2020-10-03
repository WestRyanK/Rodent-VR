// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveGame;
struct FTransform;
struct FRotator;
struct FVector;
#ifdef MAGICLEAPSECURESTORAGE_MagicLeapSecureStorage_generated_h
#error "MagicLeapSecureStorage.generated.h already included, missing '#pragma once' in MagicLeapSecureStorage.h"
#endif
#define MAGICLEAPSECURESTORAGE_MagicLeapSecureStorage_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteSecureData); \
	DECLARE_FUNCTION(execGetSecureSaveGame); \
	DECLARE_FUNCTION(execPutSecureSaveGame); \
	DECLARE_FUNCTION(execGetSecureTransform); \
	DECLARE_FUNCTION(execGetSecureRotator); \
	DECLARE_FUNCTION(execGetSecureVector); \
	DECLARE_FUNCTION(execGetSecureString); \
	DECLARE_FUNCTION(execGetSecureFloat); \
	DECLARE_FUNCTION(execGetSecureInt64); \
	DECLARE_FUNCTION(execGetSecureInt); \
	DECLARE_FUNCTION(execGetSecureByte); \
	DECLARE_FUNCTION(execGetSecureBool); \
	DECLARE_FUNCTION(execPutSecureTransform); \
	DECLARE_FUNCTION(execPutSecureRotator); \
	DECLARE_FUNCTION(execPutSecureVector); \
	DECLARE_FUNCTION(execPutSecureString); \
	DECLARE_FUNCTION(execPutSecureFloat); \
	DECLARE_FUNCTION(execPutSecureInt64); \
	DECLARE_FUNCTION(execPutSecureInt); \
	DECLARE_FUNCTION(execPutSecureByte); \
	DECLARE_FUNCTION(execPutSecureBool);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteSecureData); \
	DECLARE_FUNCTION(execGetSecureSaveGame); \
	DECLARE_FUNCTION(execPutSecureSaveGame); \
	DECLARE_FUNCTION(execGetSecureTransform); \
	DECLARE_FUNCTION(execGetSecureRotator); \
	DECLARE_FUNCTION(execGetSecureVector); \
	DECLARE_FUNCTION(execGetSecureString); \
	DECLARE_FUNCTION(execGetSecureFloat); \
	DECLARE_FUNCTION(execGetSecureInt64); \
	DECLARE_FUNCTION(execGetSecureInt); \
	DECLARE_FUNCTION(execGetSecureByte); \
	DECLARE_FUNCTION(execGetSecureBool); \
	DECLARE_FUNCTION(execPutSecureTransform); \
	DECLARE_FUNCTION(execPutSecureRotator); \
	DECLARE_FUNCTION(execPutSecureVector); \
	DECLARE_FUNCTION(execPutSecureString); \
	DECLARE_FUNCTION(execPutSecureFloat); \
	DECLARE_FUNCTION(execPutSecureInt64); \
	DECLARE_FUNCTION(execPutSecureInt); \
	DECLARE_FUNCTION(execPutSecureByte); \
	DECLARE_FUNCTION(execPutSecureBool);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapSecureStorage(); \
	friend struct Z_Construct_UClass_UMagicLeapSecureStorage_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapSecureStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapSecureStorage"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapSecureStorage)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapSecureStorage(); \
	friend struct Z_Construct_UClass_UMagicLeapSecureStorage_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapSecureStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapSecureStorage"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapSecureStorage)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapSecureStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapSecureStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapSecureStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapSecureStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapSecureStorage(UMagicLeapSecureStorage&&); \
	NO_API UMagicLeapSecureStorage(const UMagicLeapSecureStorage&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapSecureStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapSecureStorage(UMagicLeapSecureStorage&&); \
	NO_API UMagicLeapSecureStorage(const UMagicLeapSecureStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapSecureStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapSecureStorage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapSecureStorage)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_17_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPSECURESTORAGE_API UClass* StaticClass<class UMagicLeapSecureStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapSecureStorage_Public_MagicLeapSecureStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
