// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef MAGICLEAPARPIN_MagicLeapARPinTypes_generated_h
#error "MagicLeapARPinTypes.generated.h already included, missing '#pragma once' in MagicLeapARPinTypes.h"
#endif
#define MAGICLEAPARPIN_MagicLeapARPinTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapARPinState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MAGICLEAPARPIN_API UScriptStruct* StaticStruct<struct FMagicLeapARPinState>();

#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_117_DELEGATE \
struct _Script_MagicLeapARPin_eventMagicLeapARPinUpdatedMultiDelegate_Parms \
{ \
	TArray<FGuid> Added; \
	TArray<FGuid> Updated; \
	TArray<FGuid> Deleted; \
}; \
static inline void FMagicLeapARPinUpdatedMultiDelegate_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapARPinUpdatedMultiDelegate, TArray<FGuid> const& Added, TArray<FGuid> const& Updated, TArray<FGuid> const& Deleted) \
{ \
	_Script_MagicLeapARPin_eventMagicLeapARPinUpdatedMultiDelegate_Parms Parms; \
	Parms.Added=Added; \
	Parms.Updated=Updated; \
	Parms.Deleted=Deleted; \
	MagicLeapARPinUpdatedMultiDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_108_DELEGATE \
struct _Script_MagicLeapARPin_eventMagicLeapARPinUpdatedDelegate_Parms \
{ \
	TArray<FGuid> Added; \
	TArray<FGuid> Updated; \
	TArray<FGuid> Deleted; \
}; \
static inline void FMagicLeapARPinUpdatedDelegate_DelegateWrapper(const FScriptDelegate& MagicLeapARPinUpdatedDelegate, TArray<FGuid> const& Added, TArray<FGuid> const& Updated, TArray<FGuid> const& Deleted) \
{ \
	_Script_MagicLeapARPin_eventMagicLeapARPinUpdatedDelegate_Parms Parms; \
	Parms.Added=Added; \
	Parms.Updated=Updated; \
	Parms.Deleted=Deleted; \
	MagicLeapARPinUpdatedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_RPC_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMagicLeapARPinSaveGame(); \
	friend struct Z_Construct_UClass_UMagicLeapARPinSaveGame_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapARPinSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapARPin"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapARPinSaveGame)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUMagicLeapARPinSaveGame(); \
	friend struct Z_Construct_UClass_UMagicLeapARPinSaveGame_Statics; \
public: \
	DECLARE_CLASS(UMagicLeapARPinSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapARPin"), NO_API) \
	DECLARE_SERIALIZER(UMagicLeapARPinSaveGame)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMagicLeapARPinSaveGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMagicLeapARPinSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapARPinSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapARPinSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapARPinSaveGame(UMagicLeapARPinSaveGame&&); \
	NO_API UMagicLeapARPinSaveGame(const UMagicLeapARPinSaveGame&); \
public:


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMagicLeapARPinSaveGame(UMagicLeapARPinSaveGame&&); \
	NO_API UMagicLeapARPinSaveGame(const UMagicLeapARPinSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMagicLeapARPinSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMagicLeapARPinSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMagicLeapARPinSaveGame)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_53_PROLOG
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_INCLASS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPARPIN_API UClass* StaticClass<class UMagicLeapARPinSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapARPin_Public_MagicLeapARPinTypes_h


#define FOREACH_ENUM_EMAGICLEAPAUTOPINTYPE(op) \
	op(EMagicLeapAutoPinType::OnlyOnDataRestoration) \
	op(EMagicLeapAutoPinType::Always) \
	op(EMagicLeapAutoPinType::Never) 

enum class EMagicLeapAutoPinType : uint8;
template<> MAGICLEAPARPIN_API UEnum* StaticEnum<EMagicLeapAutoPinType>();

#define FOREACH_ENUM_EMAGICLEAPPASSABLEWORLDERROR(op) \
	op(EMagicLeapPassableWorldError::None) \
	op(EMagicLeapPassableWorldError::LowMapQuality) \
	op(EMagicLeapPassableWorldError::UnableToLocalize) \
	op(EMagicLeapPassableWorldError::Unavailable) \
	op(EMagicLeapPassableWorldError::PrivilegeDenied) \
	op(EMagicLeapPassableWorldError::InvalidParam) \
	op(EMagicLeapPassableWorldError::UnspecifiedFailure) \
	op(EMagicLeapPassableWorldError::PrivilegeRequestPending) \
	op(EMagicLeapPassableWorldError::StartupPending) \
	op(EMagicLeapPassableWorldError::NotImplemented) \
	op(EMagicLeapPassableWorldError::PinNotFound) 

enum class EMagicLeapPassableWorldError : uint8;
template<> MAGICLEAPARPIN_API UEnum* StaticEnum<EMagicLeapPassableWorldError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
