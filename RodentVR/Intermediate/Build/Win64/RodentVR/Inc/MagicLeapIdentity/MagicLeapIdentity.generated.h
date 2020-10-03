// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMagicLeapIdentityError : uint8;
enum class EMagicLeapIdentityKey : uint8;
struct FMagicLeapIdentityAttribute;
#ifdef MAGICLEAPIDENTITY_MagicLeapIdentity_generated_h
#error "MagicLeapIdentity.generated.h already included, missing '#pragma once' in MagicLeapIdentity.h"
#endif
#define MAGICLEAPIDENTITY_MagicLeapIdentity_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_42_DELEGATE \
struct MagicLeapIdentity_eventModifyIdentityAttributeValueDelegate_Parms \
{ \
	EMagicLeapIdentityError ResultCode; \
	TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully; \
}; \
static inline void FModifyIdentityAttributeValueDelegate_DelegateWrapper(const FScriptDelegate& ModifyIdentityAttributeValueDelegate, EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> const& AttributesUpdatedSuccessfully) \
{ \
	MagicLeapIdentity_eventModifyIdentityAttributeValueDelegate_Parms Parms; \
	Parms.ResultCode=ResultCode; \
	Parms.AttributesUpdatedSuccessfully=AttributesUpdatedSuccessfully; \
	ModifyIdentityAttributeValueDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_35_DELEGATE \
struct MagicLeapIdentity_eventRequestIdentityAttributeValueDelegate_Parms \
{ \
	EMagicLeapIdentityError ResultCode; \
	TArray<FMagicLeapIdentityAttribute> AttributeValue; \
}; \
static inline void FRequestIdentityAttributeValueDelegate_DelegateWrapper(const FScriptDelegate& RequestIdentityAttributeValueDelegate, EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentityAttribute> const& AttributeValue) \
{ \
	MagicLeapIdentity_eventRequestIdentityAttributeValueDelegate_Parms Parms; \
	Parms.ResultCode=ResultCode; \
	Parms.AttributeValue=AttributeValue; \
	RequestIdentityAttributeValueDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_28_DELEGATE \
struct MagicLeapIdentity_eventAvailableIdentityAttributesDelegate_Parms \
{ \
	EMagicLeapIdentityError ResultCode; \
	TArray<EMagicLeapIdentityKey> AvailableAttributes; \
}; \
static inline void FAvailableIdentityAttributesDelegate_DelegateWrapper(const FScriptDelegate& AvailableIdentityAttributesDelegate, EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> const& AvailableAttributes) \
{ \
	MagicLeapIdentity_eventAvailableIdentityAttributesDelegate_Parms Parms; \
	Parms.ResultCode=ResultCode; \
	Parms.AvailableAttributes=AvailableAttributes; \
	AvailableIdentityAttributesDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestAttributeValueAsync); \
	DECLARE_FUNCTION(execRequestAttributeValue); \
	DECLARE_FUNCTION(execGetAllAvailableAttributesAsync); \
	DECLARE_FUNCTION(execGetAllAvailableAttributes);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestAttributeValueAsync); \
	DECLARE_FUNCTION(execRequestAttributeValue); \
	DECLARE_FUNCTION(execGetAllAvailableAttributesAsync); \
	DECLARE_FUNCTION(execGetAllAvailableAttributes);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapIdentity(); \
	friend struct Z_Construct_UClass_UMagicLeapIdentity_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapIdentity, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapIdentity"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapIdentity)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapIdentity(); \
	friend struct Z_Construct_UClass_UMagicLeapIdentity_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapIdentity, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapIdentity"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapIdentity)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapIdentity(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapIdentity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapIdentity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapIdentity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapIdentity(UMagicLeapIdentity&&); \
	NO_API UMagicLeapIdentity(const UMagicLeapIdentity&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapIdentity(UMagicLeapIdentity&&); \
	NO_API UMagicLeapIdentity(const UMagicLeapIdentity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapIdentity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapIdentity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMagicLeapIdentity)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_14_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPIDENTITY_API UClass* StaticClass<class UMagicLeapIdentity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
