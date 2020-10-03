// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef MAGICLEAPIMAGETRACKER_MagicLeapImageTrackerTypes_generated_h
#error "MagicLeapImageTrackerTypes.generated.h already included, missing '#pragma once' in MagicLeapImageTrackerTypes.h"
#endif
#define MAGICLEAPIMAGETRACKER_MagicLeapImageTrackerTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapImageTrackerTarget_Statics; \
	MAGICLEAPIMAGETRACKER_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPIMAGETRACKER_API UScriptStruct* StaticStruct<struct FMagicLeapImageTrackerTarget>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_44_DELEGATE \
static inline void FMagicLeapImageTargetLostMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapImageTargetLostMulti) \
{ \
	MagicLeapImageTargetLostMulti.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_43_DELEGATE \
static inline void FMagicLeapImageTargetLost_DelegateWrapper(const FScriptDelegate& MagicLeapImageTargetLost) \
{ \
	MagicLeapImageTargetLost.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_40_DELEGATE \
static inline void FMagicLeapImageTargetFoundMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapImageTargetFoundMulti) \
{ \
	MagicLeapImageTargetFoundMulti.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_39_DELEGATE \
static inline void FMagicLeapImageTargetFound_DelegateWrapper(const FScriptDelegate& MagicLeapImageTargetFound) \
{ \
	MagicLeapImageTargetFound.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_36_DELEGATE \
static inline void FMagicLeapSetImageTargetFailedMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapSetImageTargetFailedMulti) \
{ \
	MagicLeapSetImageTargetFailedMulti.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_35_DELEGATE \
static inline void FMagicLeapSetImageTargetFailed_DelegateWrapper(const FScriptDelegate& MagicLeapSetImageTargetFailed) \
{ \
	MagicLeapSetImageTargetFailed.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_32_DELEGATE \
static inline void FMagicLeapSetImageTargetSucceededMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapSetImageTargetSucceededMulti) \
{ \
	MagicLeapSetImageTargetSucceededMulti.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_31_DELEGATE \
static inline void FMagicLeapSetImageTargetSucceeded_DelegateWrapper(const FScriptDelegate& MagicLeapSetImageTargetSucceeded) \
{ \
	MagicLeapSetImageTargetSucceeded.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_25_DELEGATE \
struct _Script_MagicLeapImageTracker_eventMagicLeapImageTargetReliableTrackingMulti_Parms \
{ \
	FVector NewLocation; \
	FRotator NewRotation; \
}; \
static inline void FMagicLeapImageTargetReliableTrackingMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapImageTargetReliableTrackingMulti, FVector const& NewLocation, FRotator const& NewRotation) \
{ \
	_Script_MagicLeapImageTracker_eventMagicLeapImageTargetReliableTrackingMulti_Parms Parms; \
	Parms.NewLocation=NewLocation; \
	Parms.NewRotation=NewRotation; \
	MagicLeapImageTargetReliableTrackingMulti.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_24_DELEGATE \
struct _Script_MagicLeapImageTracker_eventMagicLeapImageTargetReliableTracking_Parms \
{ \
	FVector NewLocation; \
	FRotator NewRotation; \
}; \
static inline void FMagicLeapImageTargetReliableTracking_DelegateWrapper(const FScriptDelegate& MagicLeapImageTargetReliableTracking, FVector const& NewLocation, FRotator const& NewRotation) \
{ \
	_Script_MagicLeapImageTracker_eventMagicLeapImageTargetReliableTracking_Parms Parms; \
	Parms.NewLocation=NewLocation; \
	Parms.NewRotation=NewRotation; \
	MagicLeapImageTargetReliableTracking.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_17_DELEGATE \
struct _Script_MagicLeapImageTracker_eventMagicLeapImageTargetUnreliableTrackingMulti_Parms \
{ \
	FVector LastTrackedLocation; \
	FRotator LastTrackedRotation; \
	FVector NewUnreliableLocation; \
	FRotator NewUnreliableRotation; \
}; \
static inline void FMagicLeapImageTargetUnreliableTrackingMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapImageTargetUnreliableTrackingMulti, FVector const& LastTrackedLocation, FRotator const& LastTrackedRotation, FVector const& NewUnreliableLocation, FRotator const& NewUnreliableRotation) \
{ \
	_Script_MagicLeapImageTracker_eventMagicLeapImageTargetUnreliableTrackingMulti_Parms Parms; \
	Parms.LastTrackedLocation=LastTrackedLocation; \
	Parms.LastTrackedRotation=LastTrackedRotation; \
	Parms.NewUnreliableLocation=NewUnreliableLocation; \
	Parms.NewUnreliableRotation=NewUnreliableRotation; \
	MagicLeapImageTargetUnreliableTrackingMulti.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h_16_DELEGATE \
struct _Script_MagicLeapImageTracker_eventMagicLeapImageTargetUnreliableTracking_Parms \
{ \
	FVector LastTrackedLocation; \
	FRotator LastTrackedRotation; \
	FVector NewUnreliableLocation; \
	FRotator NewUnreliableRotation; \
}; \
static inline void FMagicLeapImageTargetUnreliableTracking_DelegateWrapper(const FScriptDelegate& MagicLeapImageTargetUnreliableTracking, FVector const& LastTrackedLocation, FRotator const& LastTrackedRotation, FVector const& NewUnreliableLocation, FRotator const& NewUnreliableRotation) \
{ \
	_Script_MagicLeapImageTracker_eventMagicLeapImageTargetUnreliableTracking_Parms Parms; \
	Parms.LastTrackedLocation=LastTrackedLocation; \
	Parms.LastTrackedRotation=LastTrackedRotation; \
	Parms.NewUnreliableLocation=NewUnreliableLocation; \
	Parms.NewUnreliableRotation=NewUnreliableRotation; \
	MagicLeapImageTargetUnreliableTracking.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapImageTracker_Public_MagicLeapImageTrackerTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
