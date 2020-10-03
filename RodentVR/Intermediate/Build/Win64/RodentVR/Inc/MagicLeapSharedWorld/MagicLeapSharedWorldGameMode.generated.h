// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapSharedWorldSharedData;
#ifdef MAGICLEAPSHAREDWORLD_MagicLeapSharedWorldGameMode_generated_h
#error "MagicLeapSharedWorldGameMode.generated.h already included, missing '#pragma once' in MagicLeapSharedWorldGameMode.h"
#endif
#define MAGICLEAPSHAREDWORLD_MagicLeapSharedWorldGameMode_generated_h

#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_68_DELEGATE \
static inline void FMagicLeapOnNewLocalDataFromClients_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapOnNewLocalDataFromClients) \
{ \
	MagicLeapOnNewLocalDataFromClients.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_RPC_WRAPPERS \
	virtual void SelectChosenOne_Implementation(); \
	virtual void DetermineSharedWorldData_Implementation(FMagicLeapSharedWorldSharedData& NewSharedWorldData); \
 \
	DECLARE_FUNCTION(execSendSharedWorldDataToClients); \
	DECLARE_FUNCTION(execSelectChosenOne); \
	DECLARE_FUNCTION(execDetermineSharedWorldData);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SelectChosenOne_Implementation(); \
	virtual void DetermineSharedWorldData_Implementation(FMagicLeapSharedWorldSharedData& NewSharedWorldData); \
 \
	DECLARE_FUNCTION(execSendSharedWorldDataToClients); \
	DECLARE_FUNCTION(execSelectChosenOne); \
	DECLARE_FUNCTION(execDetermineSharedWorldData);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_EVENT_PARMS \
	struct MagicLeapSharedWorldGameMode_eventDetermineSharedWorldData_Parms \
	{ \
		FMagicLeapSharedWorldSharedData NewSharedWorldData; \
	};


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_CALLBACK_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicLeapSharedWorldGameMode(); \
	friend struct Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics; \
public: \
	DECLARE_CLASS(AMagicLeapSharedWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapSharedWorld"), NO_API) \
	DECLARE_SERIALIZER(AMagicLeapSharedWorldGameMode)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMagicLeapSharedWorldGameMode(); \
	friend struct Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics; \
public: \
	DECLARE_CLASS(AMagicLeapSharedWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapSharedWorld"), NO_API) \
	DECLARE_SERIALIZER(AMagicLeapSharedWorldGameMode)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicLeapSharedWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicLeapSharedWorldGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicLeapSharedWorldGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicLeapSharedWorldGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicLeapSharedWorldGameMode(AMagicLeapSharedWorldGameMode&&); \
	NO_API AMagicLeapSharedWorldGameMode(const AMagicLeapSharedWorldGameMode&); \
public:


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicLeapSharedWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicLeapSharedWorldGameMode(AMagicLeapSharedWorldGameMode&&); \
	NO_API AMagicLeapSharedWorldGameMode(const AMagicLeapSharedWorldGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicLeapSharedWorldGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicLeapSharedWorldGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicLeapSharedWorldGameMode)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChosenOne() { return STRUCT_OFFSET(AMagicLeapSharedWorldGameMode, ChosenOne); }


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_18_PROLOG \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_EVENT_PARMS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_INCLASS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MagicLeapSharedWorldGameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPSHAREDWORLD_API UClass* StaticClass<class AMagicLeapSharedWorldGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
