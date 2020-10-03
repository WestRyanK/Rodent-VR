// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICLEAPEYETRACKER_MagicLeapEyeTrackerTypes_generated_h
#error "MagicLeapEyeTrackerTypes.generated.h already included, missing '#pragma once' in MagicLeapEyeTrackerTypes.h"
#endif
#define MAGICLEAPEYETRACKER_MagicLeapEyeTrackerTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapEyeTracker_Public_MagicLeapEyeTrackerTypes_h


#define FOREACH_ENUM_EMAGICLEAPEYETRACKINGCALIBRATIONSTATUS(op) \
	op(EMagicLeapEyeTrackingCalibrationStatus::None) \
	op(EMagicLeapEyeTrackingCalibrationStatus::Bad) \
	op(EMagicLeapEyeTrackingCalibrationStatus::Good) 

enum class EMagicLeapEyeTrackingCalibrationStatus : uint8;
template<> MAGICLEAPEYETRACKER_API UEnum* StaticEnum<EMagicLeapEyeTrackingCalibrationStatus>();

#define FOREACH_ENUM_EMAGICLEAPEYETRACKINGSTATUS(op) \
	op(EMagicLeapEyeTrackingStatus::NotConnected) \
	op(EMagicLeapEyeTrackingStatus::Disabled) \
	op(EMagicLeapEyeTrackingStatus::UserNotPresent) \
	op(EMagicLeapEyeTrackingStatus::UserPresent) \
	op(EMagicLeapEyeTrackingStatus::UserPresentAndWatchingWindow) 

enum class EMagicLeapEyeTrackingStatus : uint8;
template<> MAGICLEAPEYETRACKER_API UEnum* StaticEnum<EMagicLeapEyeTrackingStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
