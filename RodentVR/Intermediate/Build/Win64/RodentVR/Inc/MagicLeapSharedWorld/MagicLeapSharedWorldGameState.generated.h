// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef MAGICLEAPSHAREDWORLD_MagicLeapSharedWorldGameState_generated_h
#error "MagicLeapSharedWorldGameState.generated.h already included, missing '#pragma once' in MagicLeapSharedWorldGameState.h"
#endif
#define MAGICLEAPSHAREDWORLD_MagicLeapSharedWorldGameState_generated_h

#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_46_DELEGATE \
static inline void FMagicLeapSharedWorldEvent_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapSharedWorldEvent) \
{ \
	MagicLeapSharedWorldEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_RPC_WRAPPERS \
	virtual FTransform CalculateXRCameraRootTransform_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnReplicate_AlignmentTransforms); \
	DECLARE_FUNCTION(execOnReplicate_SharedWorldData); \
	DECLARE_FUNCTION(execCalculateXRCameraRootTransform);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FTransform CalculateXRCameraRootTransform_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnReplicate_AlignmentTransforms); \
	DECLARE_FUNCTION(execOnReplicate_SharedWorldData); \
	DECLARE_FUNCTION(execCalculateXRCameraRootTransform);


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_EVENT_PARMS \
	struct MagicLeapSharedWorldGameState_eventCalculateXRCameraRootTransform_Parms \
	{ \
		FTransform ReturnValue; \
	};


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_CALLBACK_WRAPPERS
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicLeapSharedWorldGameState(); \
	friend struct Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics; \
public: \
	DECLARE_CLASS(AMagicLeapSharedWorldGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapSharedWorld"), NO_API) \
	DECLARE_SERIALIZER(AMagicLeapSharedWorldGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SharedWorldData=NETFIELD_REP_START, \
		AlignmentTransforms, \
		NETFIELD_REP_END=AlignmentTransforms	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMagicLeapSharedWorldGameState(); \
	friend struct Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics; \
public: \
	DECLARE_CLASS(AMagicLeapSharedWorldGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicLeapSharedWorld"), NO_API) \
	DECLARE_SERIALIZER(AMagicLeapSharedWorldGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SharedWorldData=NETFIELD_REP_START, \
		AlignmentTransforms, \
		NETFIELD_REP_END=AlignmentTransforms	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicLeapSharedWorldGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicLeapSharedWorldGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicLeapSharedWorldGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicLeapSharedWorldGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicLeapSharedWorldGameState(AMagicLeapSharedWorldGameState&&); \
	NO_API AMagicLeapSharedWorldGameState(const AMagicLeapSharedWorldGameState&); \
public:


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicLeapSharedWorldGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicLeapSharedWorldGameState(AMagicLeapSharedWorldGameState&&); \
	NO_API AMagicLeapSharedWorldGameState(const AMagicLeapSharedWorldGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicLeapSharedWorldGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicLeapSharedWorldGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicLeapSharedWorldGameState)


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_11_PROLOG \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_EVENT_PARMS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_INCLASS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_CALLBACK_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MagicLeapSharedWorldGameState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPSHAREDWORLD_API UClass* StaticClass<class AMagicLeapSharedWorldGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeapPassableWorld_Source_MagicLeapSharedWorld_Public_MagicLeapSharedWorldGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
