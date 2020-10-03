// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICLEAPCONTROLLER_MagicLeapControllerKeys_generated_h
#error "MagicLeapControllerKeys.generated.h already included, missing '#pragma once' in MagicLeapControllerKeys.h"
#endif
#define MAGICLEAPCONTROLLER_MagicLeapControllerKeys_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapController_Public_MagicLeapControllerKeys_h


#define FOREACH_ENUM_EMAGICLEAPCONTROLLERTRACKINGMODE(op) \
	op(EMagicLeapControllerTrackingMode::InputService) \
	op(EMagicLeapControllerTrackingMode::CoordinateFrameUID) 

enum class EMagicLeapControllerTrackingMode : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerTrackingMode>();

#define FOREACH_ENUM_EMAGICLEAPCONTROLLERHAPTICINTENSITY(op) \
	op(EMagicLeapControllerHapticIntensity::Low) \
	op(EMagicLeapControllerHapticIntensity::Medium) \
	op(EMagicLeapControllerHapticIntensity::High) 

enum class EMagicLeapControllerHapticIntensity : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerHapticIntensity>();

#define FOREACH_ENUM_EMAGICLEAPCONTROLLERHAPTICPATTERN(op) \
	op(EMagicLeapControllerHapticPattern::None) \
	op(EMagicLeapControllerHapticPattern::Click) \
	op(EMagicLeapControllerHapticPattern::Bump) \
	op(EMagicLeapControllerHapticPattern::DoubleClick) \
	op(EMagicLeapControllerHapticPattern::Buzz) \
	op(EMagicLeapControllerHapticPattern::Tick) \
	op(EMagicLeapControllerHapticPattern::ForceDown) \
	op(EMagicLeapControllerHapticPattern::ForceUp) \
	op(EMagicLeapControllerHapticPattern::ForceDwell) \
	op(EMagicLeapControllerHapticPattern::SecondForceDown) 

enum class EMagicLeapControllerHapticPattern : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerHapticPattern>();

#define FOREACH_ENUM_EMAGICLEAPCONTROLLERLEDSPEED(op) \
	op(EMagicLeapControllerLEDSpeed::Slow) \
	op(EMagicLeapControllerLEDSpeed::Medium) \
	op(EMagicLeapControllerLEDSpeed::Fast) 

enum class EMagicLeapControllerLEDSpeed : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDSpeed>();

#define FOREACH_ENUM_EMAGICLEAPCONTROLLERLEDCOLOR(op) \
	op(EMagicLeapControllerLEDColor::BrightMissionRed) \
	op(EMagicLeapControllerLEDColor::PastelMissionRed) \
	op(EMagicLeapControllerLEDColor::BrightFloridaOrange) \
	op(EMagicLeapControllerLEDColor::PastelFloridaOrange) \
	op(EMagicLeapControllerLEDColor::BrightLunaYellow) \
	op(EMagicLeapControllerLEDColor::PastelLunaYellow) \
	op(EMagicLeapControllerLEDColor::BrightNebulaPink) \
	op(EMagicLeapControllerLEDColor::PastelNebulaPink) \
	op(EMagicLeapControllerLEDColor::BrightCosmicPurple) \
	op(EMagicLeapControllerLEDColor::PastelCosmicPurple) \
	op(EMagicLeapControllerLEDColor::BrightMysticBlue) \
	op(EMagicLeapControllerLEDColor::PastelMysticBlue) \
	op(EMagicLeapControllerLEDColor::BrightCelestialBlue) \
	op(EMagicLeapControllerLEDColor::PastelCelestialBlue) \
	op(EMagicLeapControllerLEDColor::BrightShaggleGreen) \
	op(EMagicLeapControllerLEDColor::PastelShaggleGreen) 

enum class EMagicLeapControllerLEDColor : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDColor>();

#define FOREACH_ENUM_EMAGICLEAPCONTROLLERLEDEFFECT(op) \
	op(EMagicLeapControllerLEDEffect::RotateCW) \
	op(EMagicLeapControllerLEDEffect::RotateCCW) \
	op(EMagicLeapControllerLEDEffect::Pulse) \
	op(EMagicLeapControllerLEDEffect::PaintCW) \
	op(EMagicLeapControllerLEDEffect::PaintCCW) \
	op(EMagicLeapControllerLEDEffect::Blink) 

enum class EMagicLeapControllerLEDEffect : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDEffect>();

#define FOREACH_ENUM_EMAGICLEAPCONTROLLERLEDPATTERN(op) \
	op(EMagicLeapControllerLEDPattern::None) \
	op(EMagicLeapControllerLEDPattern::Clock01) \
	op(EMagicLeapControllerLEDPattern::Clock02) \
	op(EMagicLeapControllerLEDPattern::Clock03) \
	op(EMagicLeapControllerLEDPattern::Clock04) \
	op(EMagicLeapControllerLEDPattern::Clock05) \
	op(EMagicLeapControllerLEDPattern::Clock06) \
	op(EMagicLeapControllerLEDPattern::Clock07) \
	op(EMagicLeapControllerLEDPattern::Clock08) \
	op(EMagicLeapControllerLEDPattern::Clock09) \
	op(EMagicLeapControllerLEDPattern::Clock10) \
	op(EMagicLeapControllerLEDPattern::Clock11) \
	op(EMagicLeapControllerLEDPattern::Clock12) \
	op(EMagicLeapControllerLEDPattern::Clock01_07) \
	op(EMagicLeapControllerLEDPattern::Clock02_08) \
	op(EMagicLeapControllerLEDPattern::Clock03_09) \
	op(EMagicLeapControllerLEDPattern::Clock04_10) \
	op(EMagicLeapControllerLEDPattern::Clock05_11) \
	op(EMagicLeapControllerLEDPattern::Clock06_12) 

enum class EMagicLeapControllerLEDPattern : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDPattern>();

#define FOREACH_ENUM_EMAGICLEAPCONTROLLERTYPE(op) \
	op(EMagicLeapControllerType::None) \
	op(EMagicLeapControllerType::Device) \
	op(EMagicLeapControllerType::MobileApp) 

enum class EMagicLeapControllerType : uint8;
template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
