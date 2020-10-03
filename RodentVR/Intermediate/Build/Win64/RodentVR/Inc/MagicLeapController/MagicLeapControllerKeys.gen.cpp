// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapController/Public/MagicLeapControllerKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapControllerKeys() {}
// Cross Module References
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode();
	UPackage* Z_Construct_UPackage__Script_MagicLeapController();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType();
// End Cross Module References
	static UEnum* EMagicLeapControllerTrackingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerTrackingMode"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerTrackingMode>()
	{
		return EMagicLeapControllerTrackingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerTrackingMode(EMagicLeapControllerTrackingMode_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerTrackingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode_Hash() { return 4246761502U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerTrackingMode"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerTrackingMode::InputService", (int64)EMagicLeapControllerTrackingMode::InputService },
				{ "EMagicLeapControllerTrackingMode::CoordinateFrameUID", (int64)EMagicLeapControllerTrackingMode::CoordinateFrameUID },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Tracking modes provided by Magic Leap. */" },
				{ "CoordinateFrameUID.Name", "EMagicLeapControllerTrackingMode::CoordinateFrameUID" },
				{ "InputService.Name", "EMagicLeapControllerTrackingMode::InputService" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "ToolTip", "Tracking modes provided by Magic Leap." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerTrackingMode",
				"EMagicLeapControllerTrackingMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapControllerHapticIntensity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerHapticIntensity"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerHapticIntensity>()
	{
		return EMagicLeapControllerHapticIntensity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerHapticIntensity(EMagicLeapControllerHapticIntensity_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerHapticIntensity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity_Hash() { return 2295911252U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerHapticIntensity"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerHapticIntensity::Low", (int64)EMagicLeapControllerHapticIntensity::Low },
				{ "EMagicLeapControllerHapticIntensity::Medium", (int64)EMagicLeapControllerHapticIntensity::Medium },
				{ "EMagicLeapControllerHapticIntensity::High", (int64)EMagicLeapControllerHapticIntensity::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Haptic intesities supported on the controller. */" },
				{ "High.Name", "EMagicLeapControllerHapticIntensity::High" },
				{ "Low.Name", "EMagicLeapControllerHapticIntensity::Low" },
				{ "Medium.Name", "EMagicLeapControllerHapticIntensity::Medium" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "ToolTip", "Haptic intesities supported on the controller." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerHapticIntensity",
				"EMagicLeapControllerHapticIntensity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapControllerHapticPattern_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerHapticPattern"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerHapticPattern>()
	{
		return EMagicLeapControllerHapticPattern_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerHapticPattern(EMagicLeapControllerHapticPattern_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerHapticPattern"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern_Hash() { return 2442248269U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerHapticPattern"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerHapticPattern::None", (int64)EMagicLeapControllerHapticPattern::None },
				{ "EMagicLeapControllerHapticPattern::Click", (int64)EMagicLeapControllerHapticPattern::Click },
				{ "EMagicLeapControllerHapticPattern::Bump", (int64)EMagicLeapControllerHapticPattern::Bump },
				{ "EMagicLeapControllerHapticPattern::DoubleClick", (int64)EMagicLeapControllerHapticPattern::DoubleClick },
				{ "EMagicLeapControllerHapticPattern::Buzz", (int64)EMagicLeapControllerHapticPattern::Buzz },
				{ "EMagicLeapControllerHapticPattern::Tick", (int64)EMagicLeapControllerHapticPattern::Tick },
				{ "EMagicLeapControllerHapticPattern::ForceDown", (int64)EMagicLeapControllerHapticPattern::ForceDown },
				{ "EMagicLeapControllerHapticPattern::ForceUp", (int64)EMagicLeapControllerHapticPattern::ForceUp },
				{ "EMagicLeapControllerHapticPattern::ForceDwell", (int64)EMagicLeapControllerHapticPattern::ForceDwell },
				{ "EMagicLeapControllerHapticPattern::SecondForceDown", (int64)EMagicLeapControllerHapticPattern::SecondForceDown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bump.Name", "EMagicLeapControllerHapticPattern::Bump" },
				{ "Buzz.Name", "EMagicLeapControllerHapticPattern::Buzz" },
				{ "Click.Name", "EMagicLeapControllerHapticPattern::Click" },
				{ "Comment", "/** Haptic patterns supported on the controller. */" },
				{ "DoubleClick.Name", "EMagicLeapControllerHapticPattern::DoubleClick" },
				{ "ForceDown.Name", "EMagicLeapControllerHapticPattern::ForceDown" },
				{ "ForceDwell.Name", "EMagicLeapControllerHapticPattern::ForceDwell" },
				{ "ForceUp.Name", "EMagicLeapControllerHapticPattern::ForceUp" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "None.Name", "EMagicLeapControllerHapticPattern::None" },
				{ "SecondForceDown.Name", "EMagicLeapControllerHapticPattern::SecondForceDown" },
				{ "Tick.Name", "EMagicLeapControllerHapticPattern::Tick" },
				{ "ToolTip", "Haptic patterns supported on the controller." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerHapticPattern",
				"EMagicLeapControllerHapticPattern",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapControllerLEDSpeed_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerLEDSpeed"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDSpeed>()
	{
		return EMagicLeapControllerLEDSpeed_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerLEDSpeed(EMagicLeapControllerLEDSpeed_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerLEDSpeed"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed_Hash() { return 1248677781U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerLEDSpeed"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerLEDSpeed::Slow", (int64)EMagicLeapControllerLEDSpeed::Slow },
				{ "EMagicLeapControllerLEDSpeed::Medium", (int64)EMagicLeapControllerLEDSpeed::Medium },
				{ "EMagicLeapControllerLEDSpeed::Fast", (int64)EMagicLeapControllerLEDSpeed::Fast },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** LED speeds supported on the controller. */" },
				{ "Fast.Name", "EMagicLeapControllerLEDSpeed::Fast" },
				{ "Medium.Name", "EMagicLeapControllerLEDSpeed::Medium" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "Slow.Name", "EMagicLeapControllerLEDSpeed::Slow" },
				{ "ToolTip", "LED speeds supported on the controller." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerLEDSpeed",
				"EMagicLeapControllerLEDSpeed",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapControllerLEDColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerLEDColor"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDColor>()
	{
		return EMagicLeapControllerLEDColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerLEDColor(EMagicLeapControllerLEDColor_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerLEDColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor_Hash() { return 2816773704U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerLEDColor"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerLEDColor::BrightMissionRed", (int64)EMagicLeapControllerLEDColor::BrightMissionRed },
				{ "EMagicLeapControllerLEDColor::PastelMissionRed", (int64)EMagicLeapControllerLEDColor::PastelMissionRed },
				{ "EMagicLeapControllerLEDColor::BrightFloridaOrange", (int64)EMagicLeapControllerLEDColor::BrightFloridaOrange },
				{ "EMagicLeapControllerLEDColor::PastelFloridaOrange", (int64)EMagicLeapControllerLEDColor::PastelFloridaOrange },
				{ "EMagicLeapControllerLEDColor::BrightLunaYellow", (int64)EMagicLeapControllerLEDColor::BrightLunaYellow },
				{ "EMagicLeapControllerLEDColor::PastelLunaYellow", (int64)EMagicLeapControllerLEDColor::PastelLunaYellow },
				{ "EMagicLeapControllerLEDColor::BrightNebulaPink", (int64)EMagicLeapControllerLEDColor::BrightNebulaPink },
				{ "EMagicLeapControllerLEDColor::PastelNebulaPink", (int64)EMagicLeapControllerLEDColor::PastelNebulaPink },
				{ "EMagicLeapControllerLEDColor::BrightCosmicPurple", (int64)EMagicLeapControllerLEDColor::BrightCosmicPurple },
				{ "EMagicLeapControllerLEDColor::PastelCosmicPurple", (int64)EMagicLeapControllerLEDColor::PastelCosmicPurple },
				{ "EMagicLeapControllerLEDColor::BrightMysticBlue", (int64)EMagicLeapControllerLEDColor::BrightMysticBlue },
				{ "EMagicLeapControllerLEDColor::PastelMysticBlue", (int64)EMagicLeapControllerLEDColor::PastelMysticBlue },
				{ "EMagicLeapControllerLEDColor::BrightCelestialBlue", (int64)EMagicLeapControllerLEDColor::BrightCelestialBlue },
				{ "EMagicLeapControllerLEDColor::PastelCelestialBlue", (int64)EMagicLeapControllerLEDColor::PastelCelestialBlue },
				{ "EMagicLeapControllerLEDColor::BrightShaggleGreen", (int64)EMagicLeapControllerLEDColor::BrightShaggleGreen },
				{ "EMagicLeapControllerLEDColor::PastelShaggleGreen", (int64)EMagicLeapControllerLEDColor::PastelShaggleGreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BrightCelestialBlue.Name", "EMagicLeapControllerLEDColor::BrightCelestialBlue" },
				{ "BrightCosmicPurple.Name", "EMagicLeapControllerLEDColor::BrightCosmicPurple" },
				{ "BrightFloridaOrange.Name", "EMagicLeapControllerLEDColor::BrightFloridaOrange" },
				{ "BrightLunaYellow.Name", "EMagicLeapControllerLEDColor::BrightLunaYellow" },
				{ "BrightMissionRed.Name", "EMagicLeapControllerLEDColor::BrightMissionRed" },
				{ "BrightMysticBlue.Name", "EMagicLeapControllerLEDColor::BrightMysticBlue" },
				{ "BrightNebulaPink.Name", "EMagicLeapControllerLEDColor::BrightNebulaPink" },
				{ "BrightShaggleGreen.Name", "EMagicLeapControllerLEDColor::BrightShaggleGreen" },
				{ "Comment", "/** LED colors supported on the controller. */" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "PastelCelestialBlue.Name", "EMagicLeapControllerLEDColor::PastelCelestialBlue" },
				{ "PastelCosmicPurple.Name", "EMagicLeapControllerLEDColor::PastelCosmicPurple" },
				{ "PastelFloridaOrange.Name", "EMagicLeapControllerLEDColor::PastelFloridaOrange" },
				{ "PastelLunaYellow.Name", "EMagicLeapControllerLEDColor::PastelLunaYellow" },
				{ "PastelMissionRed.Name", "EMagicLeapControllerLEDColor::PastelMissionRed" },
				{ "PastelMysticBlue.Name", "EMagicLeapControllerLEDColor::PastelMysticBlue" },
				{ "PastelNebulaPink.Name", "EMagicLeapControllerLEDColor::PastelNebulaPink" },
				{ "PastelShaggleGreen.Name", "EMagicLeapControllerLEDColor::PastelShaggleGreen" },
				{ "ToolTip", "LED colors supported on the controller." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerLEDColor",
				"EMagicLeapControllerLEDColor",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapControllerLEDEffect_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerLEDEffect"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDEffect>()
	{
		return EMagicLeapControllerLEDEffect_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerLEDEffect(EMagicLeapControllerLEDEffect_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerLEDEffect"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect_Hash() { return 657188398U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerLEDEffect"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerLEDEffect::RotateCW", (int64)EMagicLeapControllerLEDEffect::RotateCW },
				{ "EMagicLeapControllerLEDEffect::RotateCCW", (int64)EMagicLeapControllerLEDEffect::RotateCCW },
				{ "EMagicLeapControllerLEDEffect::Pulse", (int64)EMagicLeapControllerLEDEffect::Pulse },
				{ "EMagicLeapControllerLEDEffect::PaintCW", (int64)EMagicLeapControllerLEDEffect::PaintCW },
				{ "EMagicLeapControllerLEDEffect::PaintCCW", (int64)EMagicLeapControllerLEDEffect::PaintCCW },
				{ "EMagicLeapControllerLEDEffect::Blink", (int64)EMagicLeapControllerLEDEffect::Blink },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blink.Name", "EMagicLeapControllerLEDEffect::Blink" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** LED effects supported on the controller. */" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "PaintCCW.Name", "EMagicLeapControllerLEDEffect::PaintCCW" },
				{ "PaintCW.Name", "EMagicLeapControllerLEDEffect::PaintCW" },
				{ "Pulse.Name", "EMagicLeapControllerLEDEffect::Pulse" },
				{ "RotateCCW.Name", "EMagicLeapControllerLEDEffect::RotateCCW" },
				{ "RotateCW.Name", "EMagicLeapControllerLEDEffect::RotateCW" },
				{ "ToolTip", "LED effects supported on the controller." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerLEDEffect",
				"EMagicLeapControllerLEDEffect",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapControllerLEDPattern_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerLEDPattern"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerLEDPattern>()
	{
		return EMagicLeapControllerLEDPattern_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerLEDPattern(EMagicLeapControllerLEDPattern_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerLEDPattern"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern_Hash() { return 3380770258U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerLEDPattern"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerLEDPattern::None", (int64)EMagicLeapControllerLEDPattern::None },
				{ "EMagicLeapControllerLEDPattern::Clock01", (int64)EMagicLeapControllerLEDPattern::Clock01 },
				{ "EMagicLeapControllerLEDPattern::Clock02", (int64)EMagicLeapControllerLEDPattern::Clock02 },
				{ "EMagicLeapControllerLEDPattern::Clock03", (int64)EMagicLeapControllerLEDPattern::Clock03 },
				{ "EMagicLeapControllerLEDPattern::Clock04", (int64)EMagicLeapControllerLEDPattern::Clock04 },
				{ "EMagicLeapControllerLEDPattern::Clock05", (int64)EMagicLeapControllerLEDPattern::Clock05 },
				{ "EMagicLeapControllerLEDPattern::Clock06", (int64)EMagicLeapControllerLEDPattern::Clock06 },
				{ "EMagicLeapControllerLEDPattern::Clock07", (int64)EMagicLeapControllerLEDPattern::Clock07 },
				{ "EMagicLeapControllerLEDPattern::Clock08", (int64)EMagicLeapControllerLEDPattern::Clock08 },
				{ "EMagicLeapControllerLEDPattern::Clock09", (int64)EMagicLeapControllerLEDPattern::Clock09 },
				{ "EMagicLeapControllerLEDPattern::Clock10", (int64)EMagicLeapControllerLEDPattern::Clock10 },
				{ "EMagicLeapControllerLEDPattern::Clock11", (int64)EMagicLeapControllerLEDPattern::Clock11 },
				{ "EMagicLeapControllerLEDPattern::Clock12", (int64)EMagicLeapControllerLEDPattern::Clock12 },
				{ "EMagicLeapControllerLEDPattern::Clock01_07", (int64)EMagicLeapControllerLEDPattern::Clock01_07 },
				{ "EMagicLeapControllerLEDPattern::Clock02_08", (int64)EMagicLeapControllerLEDPattern::Clock02_08 },
				{ "EMagicLeapControllerLEDPattern::Clock03_09", (int64)EMagicLeapControllerLEDPattern::Clock03_09 },
				{ "EMagicLeapControllerLEDPattern::Clock04_10", (int64)EMagicLeapControllerLEDPattern::Clock04_10 },
				{ "EMagicLeapControllerLEDPattern::Clock05_11", (int64)EMagicLeapControllerLEDPattern::Clock05_11 },
				{ "EMagicLeapControllerLEDPattern::Clock06_12", (int64)EMagicLeapControllerLEDPattern::Clock06_12 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Clock01.Name", "EMagicLeapControllerLEDPattern::Clock01" },
				{ "Clock01_07.Name", "EMagicLeapControllerLEDPattern::Clock01_07" },
				{ "Clock02.Name", "EMagicLeapControllerLEDPattern::Clock02" },
				{ "Clock02_08.Name", "EMagicLeapControllerLEDPattern::Clock02_08" },
				{ "Clock03.Name", "EMagicLeapControllerLEDPattern::Clock03" },
				{ "Clock03_09.Name", "EMagicLeapControllerLEDPattern::Clock03_09" },
				{ "Clock04.Name", "EMagicLeapControllerLEDPattern::Clock04" },
				{ "Clock04_10.Name", "EMagicLeapControllerLEDPattern::Clock04_10" },
				{ "Clock05.Name", "EMagicLeapControllerLEDPattern::Clock05" },
				{ "Clock05_11.Name", "EMagicLeapControllerLEDPattern::Clock05_11" },
				{ "Clock06.Name", "EMagicLeapControllerLEDPattern::Clock06" },
				{ "Clock06_12.Name", "EMagicLeapControllerLEDPattern::Clock06_12" },
				{ "Clock07.Name", "EMagicLeapControllerLEDPattern::Clock07" },
				{ "Clock08.Name", "EMagicLeapControllerLEDPattern::Clock08" },
				{ "Clock09.Name", "EMagicLeapControllerLEDPattern::Clock09" },
				{ "Clock10.Name", "EMagicLeapControllerLEDPattern::Clock10" },
				{ "Clock11.Name", "EMagicLeapControllerLEDPattern::Clock11" },
				{ "Clock12.Name", "EMagicLeapControllerLEDPattern::Clock12" },
				{ "Comment", "/** LED patterns supported on the controller. */" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "None.Name", "EMagicLeapControllerLEDPattern::None" },
				{ "ToolTip", "LED patterns supported on the controller." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerLEDPattern",
				"EMagicLeapControllerLEDPattern",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapControllerType"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapControllerType>()
	{
		return EMagicLeapControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapControllerType(EMagicLeapControllerType_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType_Hash() { return 3970217880U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapControllerType"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapControllerType::None", (int64)EMagicLeapControllerType::None },
				{ "EMagicLeapControllerType::Device", (int64)EMagicLeapControllerType::Device },
				{ "EMagicLeapControllerType::MobileApp", (int64)EMagicLeapControllerType::MobileApp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Defines the Magic Leap controller type. */" },
				{ "Device.Name", "EMagicLeapControllerType::Device" },
				{ "MobileApp.Name", "EMagicLeapControllerType::MobileApp" },
				{ "ModuleRelativePath", "Public/MagicLeapControllerKeys.h" },
				{ "None.Name", "EMagicLeapControllerType::None" },
				{ "ToolTip", "Defines the Magic Leap controller type." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapControllerType",
				"EMagicLeapControllerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
