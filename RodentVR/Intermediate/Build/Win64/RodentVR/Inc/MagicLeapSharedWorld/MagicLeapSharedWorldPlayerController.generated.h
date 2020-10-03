// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMagicLeapSharedWorldAlignmentTransforms;
struct FMagicLeapSharedWorldLocalData;
#ifdef MAGICLEAPSHAREDWORLD_MagicLeapSharedWorldPlayerController_generated_h
#error "MagicLeapSharedWorldPlayerController.generated.h already included, missing '#pragma once' in MagicLeapSharedWorldPlayerController.h"
#endif
#define MAGICLEAPSHAREDWORLD_MagicLeapSharedWorldPlayerController_generated_h

#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_RPC_WRAPPERS \
	virtual void ServerSetAlignmentTransforms_Implementation(FMagicLeapSharedWorldAlignmentTransforms const& InAlignmentTransforms); \
	virtual void ClientSetChosenOne_Implementation(bool bChosenOne); \
	virtual void ClientMarkReadyForSendingLocalData_Implementation(); \
	virtual void ServerSetLocalWorldData_Implementation(FMagicLeapSharedWorldLocalData const& LocalWorldReplicationData); \
 \
	DECLARE_FUNCTION(execServerSetAlignmentTransforms); \
	DECLARE_FUNCTION(execCanSendLocalDataToServer); \
	DECLARE_FUNCTION(execIsChosenOne); \
	DECLARE_FUNCTION(execClientSetChosenOne); \
	DECLARE_FUNCTION(execClientMarkReadyForSendingLocalData); \
	DECLARE_FUNCTION(execServerSetLocalWorldData);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetAlignmentTransforms_Implementation(FMagicLeapSharedWorldAlignmentTransforms const& InAlignmentTransforms); \
	virtual void ClientSetChosenOne_Implementation(bool bChosenOne); \
	virtual void ClientMarkReadyForSendingLocalData_Implementation(); \
	virtual void ServerSetLocalWorldData_Implementation(FMagicLeapSharedWorldLocalData const& LocalWorldReplicationData); \
 \
	DECLARE_FUNCTION(execServerSetAlignmentTransforms); \
	DECLARE_FUNCTION(execCanSendLocalDataToServer); \
	DECLARE_FUNCTION(execIsChosenOne); \
	DECLARE_FUNCTION(execClientSetChosenOne); \
	DECLARE_FUNCTION(execClientMarkReadyForSendingLocalData); \
	DECLARE_FUNCTION(execServerSetLocalWorldData);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_EVENT_PARMS \
	struct MagicLeapSharedWorldPlayerController_eventClientSetChosenOne_Parms \
	{ \
		bool bChosenOne; \
	}; \
	struct MagicLeapSharedWorldPlayerController_eventServerSetAlignmentTransforms_Parms \
	{ \
		FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms; \
	}; \
	struct MagicLeapSharedWorldPlayerController_eventServerSetLocalWorldData_Parms \
	{ \
		FMagicLeapSharedWorldLocalData LocalWorldReplicationData; \
	};


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_CALLBACK_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicLeapSharedWorldPlayerController(); \
	friend struct Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMagicLeapSharedWorldPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapSharedWorld"), NO_API) \
	DECLARE_SERIALIZER(AMagicLeapSharedWorldPlayerController)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMagicLeapSharedWorldPlayerController(); \
	friend struct Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMagicLeapSharedWorldPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapSharedWorld"), NO_API) \
	DECLARE_SERIALIZER(AMagicLeapSharedWorldPlayerController)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicLeapSharedWorldPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicLeapSharedWorldPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicLeapSharedWorldPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicLeapSharedWorldPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicLeapSharedWorldPlayerController(AMagicLeapSharedWorldPlayerController&&); \
	NO_API AMagicLeapSharedWorldPlayerController(const AMagicLeapSharedWorldPlayerController&); \
public:


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicLeapSharedWorldPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicLeapSharedWorldPlayerController(AMagicLeapSharedWorldPlayerController&&); \
	NO_API AMagicLeapSharedWorldPlayerController(const AMagicLeapSharedWorldPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicLeapSharedWorldPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicLeapSharedWorldPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicLeapSharedWorldPlayerController)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_10_PROLOG \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_EVENT_PARMS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_INCLASS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MagicLeapSharedWorldPlayerController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPSHAREDWORLD_API UClass* StaticClass<class AMagicLeapSharedWorldPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
