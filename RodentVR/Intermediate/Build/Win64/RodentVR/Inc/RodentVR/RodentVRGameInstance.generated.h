// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UToneGenerator;
enum class PageEnum : uint8;
class UMazeSettings;
class URodentVRSettings;
#ifdef RODENTVR_RodentVRGameInstance_generated_h
#error "RodentVRGameInstance.generated.h already included, missing '#pragma once' in RodentVRGameInstance.h"
#endif
#define RODENTVR_RodentVRGameInstance_generated_h

#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_22_DELEGATE \
static inline void FSettingsLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SettingsLoadedDelegate) \
{ \
	SettingsLoadedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSettingsLoaded); \
	DECLARE_FUNCTION(execGetToneGenerator); \
	DECLARE_FUNCTION(execGoToPage); \
	DECLARE_FUNCTION(execGetCurrentPage); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSetIgnoreSettingsChanged); \
	DECLARE_FUNCTION(execGetIgnoreSettingsChanged); \
	DECLARE_FUNCTION(execSetSettingsModified); \
	DECLARE_FUNCTION(execGetSettingsModified); \
	DECLARE_FUNCTION(execSetCurrentMaze); \
	DECLARE_FUNCTION(execGetCurrentMaze); \
	DECLARE_FUNCTION(execSetRodentVRSettings); \
	DECLARE_FUNCTION(execGetRodentVRSettings); \
	DECLARE_FUNCTION(execOnRodentVRSettingsChanged);


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSettingsLoaded); \
	DECLARE_FUNCTION(execGetToneGenerator); \
	DECLARE_FUNCTION(execGoToPage); \
	DECLARE_FUNCTION(execGetCurrentPage); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSetIgnoreSettingsChanged); \
	DECLARE_FUNCTION(execGetIgnoreSettingsChanged); \
	DECLARE_FUNCTION(execSetSettingsModified); \
	DECLARE_FUNCTION(execGetSettingsModified); \
	DECLARE_FUNCTION(execSetCurrentMaze); \
	DECLARE_FUNCTION(execGetCurrentMaze); \
	DECLARE_FUNCTION(execSetRodentVRSettings); \
	DECLARE_FUNCTION(execGetRodentVRSettings); \
	DECLARE_FUNCTION(execOnRodentVRSettingsChanged);


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURodentVRGameInstance(); \
	friend struct Z_Construct_UClass_URodentVRGameInstance_Statics; \
public: \
	DECLARE_CLASS(URodentVRGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRGameInstance)


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_INCLASS \
private: \
	static void StaticRegisterNativesURodentVRGameInstance(); \
	friend struct Z_Construct_UClass_URodentVRGameInstance_Statics; \
public: \
	DECLARE_CLASS(URodentVRGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(URodentVRGameInstance)


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URodentVRGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URodentVRGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRGameInstance(URodentVRGameInstance&&); \
	NO_API URodentVRGameInstance(const URodentVRGameInstance&); \
public:


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URodentVRGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URodentVRGameInstance(URodentVRGameInstance&&); \
	NO_API URodentVRGameInstance(const URodentVRGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URodentVRGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URodentVRGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URodentVRGameInstance)


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RodentVRSettings() { return STRUCT_OFFSET(URodentVRGameInstance, RodentVRSettings); } \
	FORCEINLINE static uint32 __PPO__CurrentMaze() { return STRUCT_OFFSET(URodentVRGameInstance, CurrentMaze); } \
	FORCEINLINE static uint32 __PPO__CurrentPage() { return STRUCT_OFFSET(URodentVRGameInstance, CurrentPage); } \
	FORCEINLINE static uint32 __PPO__ToneGenerator() { return STRUCT_OFFSET(URodentVRGameInstance, ToneGenerator); } \
	FORCEINLINE static uint32 __PPO__SettingsModified() { return STRUCT_OFFSET(URodentVRGameInstance, SettingsModified); } \
	FORCEINLINE static uint32 __PPO__IgnoreSettingsChanged() { return STRUCT_OFFSET(URodentVRGameInstance, IgnoreSettingsChanged); }


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_27_PROLOG
#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_INCLASS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class URodentVRGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Core_RodentVRGameInstance_h


#define FOREACH_ENUM_PAGEENUM(op) \
	op(PageEnum::MAINMENU) \
	op(PageEnum::OPTIONS) \
	op(PageEnum::OPTIONS_PLAYLIST) \
	op(PageEnum::EDITOR) \
	op(PageEnum::SIMULATOR) \
	op(PageEnum::BEHAVIORAL_ANALYSIS) \
	op(PageEnum::EXIT) 

enum class PageEnum : uint8;
template<> RODENTVR_API UEnum* StaticEnum<PageEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
