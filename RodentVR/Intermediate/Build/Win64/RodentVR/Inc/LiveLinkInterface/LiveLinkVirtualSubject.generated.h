// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkVirtualSubject_generated_h
#error "LiveLinkVirtualSubject.generated.h already included, missing '#pragma once' in LiveLinkVirtualSubject.h"
#endif
#define LIVELINKINTERFACE_LiveLinkVirtualSubject_generated_h

#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_SPARSE_DATA
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkVirtualSubject(); \
	friend struct Z_Construct_UClass_ULiveLinkVirtualSubject_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkVirtualSubject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkVirtualSubject)


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkVirtualSubject(); \
	friend struct Z_Construct_UClass_ULiveLinkVirtualSubject_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkVirtualSubject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkVirtualSubject)


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkVirtualSubject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkVirtualSubject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkVirtualSubject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkVirtualSubject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkVirtualSubject(ULiveLinkVirtualSubject&&); \
	NO_API ULiveLinkVirtualSubject(const ULiveLinkVirtualSubject&); \
public:


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkVirtualSubject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkVirtualSubject(ULiveLinkVirtualSubject&&); \
	NO_API ULiveLinkVirtualSubject(const ULiveLinkVirtualSubject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkVirtualSubject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkVirtualSubject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkVirtualSubject)


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Role() { return STRUCT_OFFSET(ULiveLinkVirtualSubject, Role); } \
	FORCEINLINE static uint32 __PPO__Subjects() { return STRUCT_OFFSET(ULiveLinkVirtualSubject, Subjects); } \
	FORCEINLINE static uint32 __PPO__FrameTranslators() { return STRUCT_OFFSET(ULiveLinkVirtualSubject, FrameTranslators); }


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_19_PROLOG
#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_SPARSE_DATA \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_INCLASS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_SPARSE_DATA \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkVirtualSubject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
