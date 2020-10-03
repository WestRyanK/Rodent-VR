// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICLEAPHANDTRACKING_MagicLeapHandTrackingTypes_generated_h
#error "MagicLeapHandTrackingTypes.generated.h already included, missing '#pragma once' in MagicLeapHandTrackingTypes.h"
#endif
#define MAGICLEAPHANDTRACKING_MagicLeapHandTrackingTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapHandTracking_Public_MagicLeapHandTrackingTypes_h


#define FOREACH_ENUM_EMAGICLEAPGESTURETRANSFORMSPACE(op) \
	op(EMagicLeapGestureTransformSpace::World) \
	op(EMagicLeapGestureTransformSpace::Hand) \
	op(EMagicLeapGestureTransformSpace::Tracking) 

enum class EMagicLeapGestureTransformSpace : uint8;
template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapGestureTransformSpace>();

#define FOREACH_ENUM_EMAGICLEAPHANDTRACKINGGESTUREFILTERLEVEL(op) \
	op(EMagicLeapHandTrackingGestureFilterLevel::NoFilter) \
	op(EMagicLeapHandTrackingGestureFilterLevel::SlightRobustnessToFlicker) \
	op(EMagicLeapHandTrackingGestureFilterLevel::MoreRobustnessToFlicker) 

enum class EMagicLeapHandTrackingGestureFilterLevel : uint8;
template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingGestureFilterLevel>();

#define FOREACH_ENUM_EMAGICLEAPHANDTRACKINGKEYPOINTFILTERLEVEL(op) \
	op(EMagicLeapHandTrackingKeypointFilterLevel::NoFilter) \
	op(EMagicLeapHandTrackingKeypointFilterLevel::SimpleSmoothing) \
	op(EMagicLeapHandTrackingKeypointFilterLevel::PredictiveSmoothing) 

enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8;
template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingKeypointFilterLevel>();

#define FOREACH_ENUM_EMAGICLEAPHANDTRACKINGGESTURE(op) \
	op(EMagicLeapHandTrackingGesture::Finger) \
	op(EMagicLeapHandTrackingGesture::Fist) \
	op(EMagicLeapHandTrackingGesture::Pinch) \
	op(EMagicLeapHandTrackingGesture::Thumb) \
	op(EMagicLeapHandTrackingGesture::L) \
	op(EMagicLeapHandTrackingGesture::OpenHand) \
	op(EMagicLeapHandTrackingGesture::OpenHandBack) \
	op(EMagicLeapHandTrackingGesture::Ok) \
	op(EMagicLeapHandTrackingGesture::C) \
	op(EMagicLeapHandTrackingGesture::NoPose) \
	op(EMagicLeapHandTrackingGesture::NoHand) 

enum class EMagicLeapHandTrackingGesture : uint8;
template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingGesture>();

#define FOREACH_ENUM_EMAGICLEAPHANDTRACKINGKEYPOINT(op) \
	op(EMagicLeapHandTrackingKeypoint::Thumb_Tip) \
	op(EMagicLeapHandTrackingKeypoint::Thumb_IP) \
	op(EMagicLeapHandTrackingKeypoint::Thumb_MCP) \
	op(EMagicLeapHandTrackingKeypoint::Thumb_CMC) \
	op(EMagicLeapHandTrackingKeypoint::Index_Tip) \
	op(EMagicLeapHandTrackingKeypoint::Index_DIP) \
	op(EMagicLeapHandTrackingKeypoint::Index_PIP) \
	op(EMagicLeapHandTrackingKeypoint::Index_MCP) \
	op(EMagicLeapHandTrackingKeypoint::Middle_Tip) \
	op(EMagicLeapHandTrackingKeypoint::Middle_DIP) \
	op(EMagicLeapHandTrackingKeypoint::Middle_PIP) \
	op(EMagicLeapHandTrackingKeypoint::Middle_MCP) \
	op(EMagicLeapHandTrackingKeypoint::Ring_Tip) \
	op(EMagicLeapHandTrackingKeypoint::Ring_DIP) \
	op(EMagicLeapHandTrackingKeypoint::Ring_PIP) \
	op(EMagicLeapHandTrackingKeypoint::Ring_MCP) \
	op(EMagicLeapHandTrackingKeypoint::Pinky_Tip) \
	op(EMagicLeapHandTrackingKeypoint::Pinky_DIP) \
	op(EMagicLeapHandTrackingKeypoint::Pinky_PIP) \
	op(EMagicLeapHandTrackingKeypoint::Pinky_MCP) \
	op(EMagicLeapHandTrackingKeypoint::Wrist_Center) \
	op(EMagicLeapHandTrackingKeypoint::Wrist_Ulnar) \
	op(EMagicLeapHandTrackingKeypoint::Wrist_Radial) \
	op(EMagicLeapHandTrackingKeypoint::Hand_Center) 

enum class EMagicLeapHandTrackingKeypoint : uint8;
template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingKeypoint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
