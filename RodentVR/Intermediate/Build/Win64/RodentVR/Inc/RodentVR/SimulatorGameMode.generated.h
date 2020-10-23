// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_SimulatorGameMode_generated_h
#error "SimulatorGameMode.generated.h already included, missing '#pragma once' in SimulatorGameMode.h"
#endif
#define RODENTVR_SimulatorGameMode_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_12_DELEGATE \
static inline void FMazeFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MazeFinishedDelegate) \
{ \
	MazeFinishedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_11_DELEGATE \
static inline void FMazeLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MazeLoadedDelegate) \
{ \
	MazeLoadedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadNextMaze); \
	DECLARE_FUNCTION(execStopNIDAQDevices); \
	DECLARE_FUNCTION(execOnMazeFinished); \
	DECLARE_FUNCTION(execOnMazeLoaded);


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadNextMaze); \
	DECLARE_FUNCTION(execStopNIDAQDevices); \
	DECLARE_FUNCTION(execOnMazeFinished); \
	DECLARE_FUNCTION(execOnMazeLoaded);


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimulatorGameMode(); \
	friend struct Z_Construct_UClass_ASimulatorGameMode_Statics; \
public: \
	DECLARE_CLASS(ASimulatorGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ASimulatorGameMode)


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASimulatorGameMode(); \
	friend struct Z_Construct_UClass_ASimulatorGameMode_Statics; \
public: \
	DECLARE_CLASS(ASimulatorGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(ASimulatorGameMode)


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimulatorGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimulatorGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulatorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulatorGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimulatorGameMode(ASimulatorGameMode&&); \
	NO_API ASimulatorGameMode(const ASimulatorGameMode&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimulatorGameMode(ASimulatorGameMode&&); \
	NO_API ASimulatorGameMode(const ASimulatorGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulatorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulatorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimulatorGameMode)


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StopConditionsChecker() { return STRUCT_OFFSET(ASimulatorGameMode, StopConditionsChecker); }


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_18_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class ASimulatorGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_SimulatorGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
