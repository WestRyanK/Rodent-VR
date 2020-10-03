// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapHandTracking/Public/MagicLeapHandTrackingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapHandTrackingTypes() {}
// Cross Module References
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace();
	UPackage* Z_Construct_UPackage__Script_MagicLeapHandTracking();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint();
// End Cross Module References
	static UEnum* EMagicLeapGestureTransformSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace, Z_Construct_UPackage__Script_MagicLeapHandTracking(), TEXT("EMagicLeapGestureTransformSpace"));
		}
		return Singleton;
	}
	template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapGestureTransformSpace>()
	{
		return EMagicLeapGestureTransformSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapGestureTransformSpace(EMagicLeapGestureTransformSpace_StaticEnum, TEXT("/Script/MagicLeapHandTracking"), TEXT("EMagicLeapGestureTransformSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace_Hash() { return 2693952563U; }
	UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapGestureTransformSpace"), 0, Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapGestureTransformSpace::World", (int64)EMagicLeapGestureTransformSpace::World },
				{ "EMagicLeapGestureTransformSpace::Hand", (int64)EMagicLeapGestureTransformSpace::Hand },
				{ "EMagicLeapGestureTransformSpace::Tracking", (int64)EMagicLeapGestureTransformSpace::Tracking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Gesture key point transform spaces. */" },
				{ "Hand.Comment", "/** Gesture key point transforms are reported in gesture hand center space.*/" },
				{ "Hand.Name", "EMagicLeapGestureTransformSpace::Hand" },
				{ "Hand.ToolTip", "Gesture key point transforms are reported in gesture hand center space." },
				{ "ModuleRelativePath", "Public/MagicLeapHandTrackingTypes.h" },
				{ "ToolTip", "Gesture key point transform spaces." },
				{ "Tracking.Comment", "/** Gesture key point transforms are reported in device Tracking space. */" },
				{ "Tracking.Name", "EMagicLeapGestureTransformSpace::Tracking" },
				{ "Tracking.ToolTip", "Gesture key point transforms are reported in device Tracking space." },
				{ "World.Comment", "/** Gesture key point transforms are reported in Unreal world space. This is more costly on CPU.*/" },
				{ "World.Name", "EMagicLeapGestureTransformSpace::World" },
				{ "World.ToolTip", "Gesture key point transforms are reported in Unreal world space. This is more costly on CPU." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapHandTracking,
				nullptr,
				"EMagicLeapGestureTransformSpace",
				"EMagicLeapGestureTransformSpace",
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
	static UEnum* EMagicLeapHandTrackingGestureFilterLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel, Z_Construct_UPackage__Script_MagicLeapHandTracking(), TEXT("EMagicLeapHandTrackingGestureFilterLevel"));
		}
		return Singleton;
	}
	template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingGestureFilterLevel>()
	{
		return EMagicLeapHandTrackingGestureFilterLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapHandTrackingGestureFilterLevel(EMagicLeapHandTrackingGestureFilterLevel_StaticEnum, TEXT("/Script/MagicLeapHandTracking"), TEXT("EMagicLeapHandTrackingGestureFilterLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel_Hash() { return 455344210U; }
	UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapHandTrackingGestureFilterLevel"), 0, Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapHandTrackingGestureFilterLevel::NoFilter", (int64)EMagicLeapHandTrackingGestureFilterLevel::NoFilter },
				{ "EMagicLeapHandTrackingGestureFilterLevel::SlightRobustnessToFlicker", (int64)EMagicLeapHandTrackingGestureFilterLevel::SlightRobustnessToFlicker },
				{ "EMagicLeapHandTrackingGestureFilterLevel::MoreRobustnessToFlicker", (int64)EMagicLeapHandTrackingGestureFilterLevel::MoreRobustnessToFlicker },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Filtering for the gesture recognition and hand switching. */" },
				{ "ModuleRelativePath", "Public/MagicLeapHandTrackingTypes.h" },
				{ "MoreRobustnessToFlicker.Comment", "/** More robust to flicker at higher latency cost. */" },
				{ "MoreRobustnessToFlicker.Name", "EMagicLeapHandTrackingGestureFilterLevel::MoreRobustnessToFlicker" },
				{ "MoreRobustnessToFlicker.ToolTip", "More robust to flicker at higher latency cost." },
				{ "NoFilter.Comment", "/** No filtering is done, the gestures are raw. */" },
				{ "NoFilter.Name", "EMagicLeapHandTrackingGestureFilterLevel::NoFilter" },
				{ "NoFilter.ToolTip", "No filtering is done, the gestures are raw." },
				{ "SlightRobustnessToFlicker.Comment", "/** Some robustness to flicker at some cost of latency. */" },
				{ "SlightRobustnessToFlicker.Name", "EMagicLeapHandTrackingGestureFilterLevel::SlightRobustnessToFlicker" },
				{ "SlightRobustnessToFlicker.ToolTip", "Some robustness to flicker at some cost of latency." },
				{ "ToolTip", "Filtering for the gesture recognition and hand switching." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapHandTracking,
				nullptr,
				"EMagicLeapHandTrackingGestureFilterLevel",
				"EMagicLeapHandTrackingGestureFilterLevel",
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
	static UEnum* EMagicLeapHandTrackingKeypointFilterLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel, Z_Construct_UPackage__Script_MagicLeapHandTracking(), TEXT("EMagicLeapHandTrackingKeypointFilterLevel"));
		}
		return Singleton;
	}
	template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingKeypointFilterLevel>()
	{
		return EMagicLeapHandTrackingKeypointFilterLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapHandTrackingKeypointFilterLevel(EMagicLeapHandTrackingKeypointFilterLevel_StaticEnum, TEXT("/Script/MagicLeapHandTracking"), TEXT("EMagicLeapHandTrackingKeypointFilterLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel_Hash() { return 4116517497U; }
	UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapHandTrackingKeypointFilterLevel"), 0, Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapHandTrackingKeypointFilterLevel::NoFilter", (int64)EMagicLeapHandTrackingKeypointFilterLevel::NoFilter },
				{ "EMagicLeapHandTrackingKeypointFilterLevel::SimpleSmoothing", (int64)EMagicLeapHandTrackingKeypointFilterLevel::SimpleSmoothing },
				{ "EMagicLeapHandTrackingKeypointFilterLevel::PredictiveSmoothing", (int64)EMagicLeapHandTrackingKeypointFilterLevel::PredictiveSmoothing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Filtering for the keypoints and hand centers. */" },
				{ "ModuleRelativePath", "Public/MagicLeapHandTrackingTypes.h" },
				{ "NoFilter.Comment", "/** No filtering is done, the points are raw. */" },
				{ "NoFilter.Name", "EMagicLeapHandTrackingKeypointFilterLevel::NoFilter" },
				{ "NoFilter.ToolTip", "No filtering is done, the points are raw." },
				{ "PredictiveSmoothing.Comment", "/** Predictive smoothing, at higher cost of latency. */" },
				{ "PredictiveSmoothing.Name", "EMagicLeapHandTrackingKeypointFilterLevel::PredictiveSmoothing" },
				{ "PredictiveSmoothing.ToolTip", "Predictive smoothing, at higher cost of latency." },
				{ "SimpleSmoothing.Comment", "/** Some smoothing at the cost of latency. */" },
				{ "SimpleSmoothing.Name", "EMagicLeapHandTrackingKeypointFilterLevel::SimpleSmoothing" },
				{ "SimpleSmoothing.ToolTip", "Some smoothing at the cost of latency." },
				{ "ToolTip", "Filtering for the keypoints and hand centers." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapHandTracking,
				nullptr,
				"EMagicLeapHandTrackingKeypointFilterLevel",
				"EMagicLeapHandTrackingKeypointFilterLevel",
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
	static UEnum* EMagicLeapHandTrackingGesture_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture, Z_Construct_UPackage__Script_MagicLeapHandTracking(), TEXT("EMagicLeapHandTrackingGesture"));
		}
		return Singleton;
	}
	template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingGesture>()
	{
		return EMagicLeapHandTrackingGesture_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapHandTrackingGesture(EMagicLeapHandTrackingGesture_StaticEnum, TEXT("/Script/MagicLeapHandTracking"), TEXT("EMagicLeapHandTrackingGesture"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture_Hash() { return 4007843990U; }
	UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapHandTrackingGesture"), 0, Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapHandTrackingGesture::Finger", (int64)EMagicLeapHandTrackingGesture::Finger },
				{ "EMagicLeapHandTrackingGesture::Fist", (int64)EMagicLeapHandTrackingGesture::Fist },
				{ "EMagicLeapHandTrackingGesture::Pinch", (int64)EMagicLeapHandTrackingGesture::Pinch },
				{ "EMagicLeapHandTrackingGesture::Thumb", (int64)EMagicLeapHandTrackingGesture::Thumb },
				{ "EMagicLeapHandTrackingGesture::L", (int64)EMagicLeapHandTrackingGesture::L },
				{ "EMagicLeapHandTrackingGesture::OpenHand", (int64)EMagicLeapHandTrackingGesture::OpenHand },
				{ "EMagicLeapHandTrackingGesture::OpenHandBack", (int64)EMagicLeapHandTrackingGesture::OpenHandBack },
				{ "EMagicLeapHandTrackingGesture::Ok", (int64)EMagicLeapHandTrackingGesture::Ok },
				{ "EMagicLeapHandTrackingGesture::C", (int64)EMagicLeapHandTrackingGesture::C },
				{ "EMagicLeapHandTrackingGesture::NoPose", (int64)EMagicLeapHandTrackingGesture::NoPose },
				{ "EMagicLeapHandTrackingGesture::NoHand", (int64)EMagicLeapHandTrackingGesture::NoHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "C.Comment", "/** A rounded 'C' alphabet shape. */" },
				{ "C.Name", "EMagicLeapHandTrackingGesture::C" },
				{ "C.ToolTip", "A rounded 'C' alphabet shape." },
				{ "Comment", "/*! Static key pose types which are available when both hands are separated. */" },
				{ "Finger.Comment", "/** One finger. */" },
				{ "Finger.Name", "EMagicLeapHandTrackingGesture::Finger" },
				{ "Finger.ToolTip", "One finger." },
				{ "Fist.Comment", "/** A closed fist. */" },
				{ "Fist.Name", "EMagicLeapHandTrackingGesture::Fist" },
				{ "Fist.ToolTip", "A closed fist." },
				{ "L.Comment", "/** An L shape. */" },
				{ "L.Name", "EMagicLeapHandTrackingGesture::L" },
				{ "L.ToolTip", "An L shape." },
				{ "ModuleRelativePath", "Public/MagicLeapHandTrackingTypes.h" },
				{ "NoHand.Comment", "/** No hand was present. */" },
				{ "NoHand.Name", "EMagicLeapHandTrackingGesture::NoHand" },
				{ "NoHand.ToolTip", "No hand was present." },
				{ "NoPose.Comment", "/** No pose detected. */" },
				{ "NoPose.Name", "EMagicLeapHandTrackingGesture::NoPose" },
				{ "NoPose.ToolTip", "No pose detected." },
				{ "Ok.Comment", "/** A pinch with all fingers, except the index finger and the thumb, extended out. */" },
				{ "Ok.Name", "EMagicLeapHandTrackingGesture::Ok" },
				{ "Ok.ToolTip", "A pinch with all fingers, except the index finger and the thumb, extended out." },
				{ "OpenHand.Comment", "/** An open palm of the hand facing the user. */" },
				{ "OpenHand.Name", "EMagicLeapHandTrackingGesture::OpenHand" },
				{ "OpenHand.ToolTip", "An open palm of the hand facing the user." },
				{ "OpenHandBack.Comment", "/** DEPRECATED (USE OpenHand INSTEAD) - A back open hand of the hand facing away from the user. */" },
				{ "OpenHandBack.Name", "EMagicLeapHandTrackingGesture::OpenHandBack" },
				{ "OpenHandBack.ToolTip", "DEPRECATED (USE OpenHand INSTEAD) - A back open hand of the hand facing away from the user." },
				{ "Pinch.Comment", "/** A pinch. */" },
				{ "Pinch.Name", "EMagicLeapHandTrackingGesture::Pinch" },
				{ "Pinch.ToolTip", "A pinch." },
				{ "Thumb.Comment", "/** A closed fist with the thumb pointed up. */" },
				{ "Thumb.Name", "EMagicLeapHandTrackingGesture::Thumb" },
				{ "Thumb.ToolTip", "A closed fist with the thumb pointed up." },
				{ "ToolTip", "! Static key pose types which are available when both hands are separated." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapHandTracking,
				nullptr,
				"EMagicLeapHandTrackingGesture",
				"EMagicLeapHandTrackingGesture",
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
	static UEnum* EMagicLeapHandTrackingKeypoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint, Z_Construct_UPackage__Script_MagicLeapHandTracking(), TEXT("EMagicLeapHandTrackingKeypoint"));
		}
		return Singleton;
	}
	template<> MAGICLEAPHANDTRACKING_API UEnum* StaticEnum<EMagicLeapHandTrackingKeypoint>()
	{
		return EMagicLeapHandTrackingKeypoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapHandTrackingKeypoint(EMagicLeapHandTrackingKeypoint_StaticEnum, TEXT("/Script/MagicLeapHandTracking"), TEXT("EMagicLeapHandTrackingKeypoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint_Hash() { return 1306888735U; }
	UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapHandTrackingKeypoint"), 0, Get_Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapHandTrackingKeypoint::Thumb_Tip", (int64)EMagicLeapHandTrackingKeypoint::Thumb_Tip },
				{ "EMagicLeapHandTrackingKeypoint::Thumb_IP", (int64)EMagicLeapHandTrackingKeypoint::Thumb_IP },
				{ "EMagicLeapHandTrackingKeypoint::Thumb_MCP", (int64)EMagicLeapHandTrackingKeypoint::Thumb_MCP },
				{ "EMagicLeapHandTrackingKeypoint::Thumb_CMC", (int64)EMagicLeapHandTrackingKeypoint::Thumb_CMC },
				{ "EMagicLeapHandTrackingKeypoint::Index_Tip", (int64)EMagicLeapHandTrackingKeypoint::Index_Tip },
				{ "EMagicLeapHandTrackingKeypoint::Index_DIP", (int64)EMagicLeapHandTrackingKeypoint::Index_DIP },
				{ "EMagicLeapHandTrackingKeypoint::Index_PIP", (int64)EMagicLeapHandTrackingKeypoint::Index_PIP },
				{ "EMagicLeapHandTrackingKeypoint::Index_MCP", (int64)EMagicLeapHandTrackingKeypoint::Index_MCP },
				{ "EMagicLeapHandTrackingKeypoint::Middle_Tip", (int64)EMagicLeapHandTrackingKeypoint::Middle_Tip },
				{ "EMagicLeapHandTrackingKeypoint::Middle_DIP", (int64)EMagicLeapHandTrackingKeypoint::Middle_DIP },
				{ "EMagicLeapHandTrackingKeypoint::Middle_PIP", (int64)EMagicLeapHandTrackingKeypoint::Middle_PIP },
				{ "EMagicLeapHandTrackingKeypoint::Middle_MCP", (int64)EMagicLeapHandTrackingKeypoint::Middle_MCP },
				{ "EMagicLeapHandTrackingKeypoint::Ring_Tip", (int64)EMagicLeapHandTrackingKeypoint::Ring_Tip },
				{ "EMagicLeapHandTrackingKeypoint::Ring_DIP", (int64)EMagicLeapHandTrackingKeypoint::Ring_DIP },
				{ "EMagicLeapHandTrackingKeypoint::Ring_PIP", (int64)EMagicLeapHandTrackingKeypoint::Ring_PIP },
				{ "EMagicLeapHandTrackingKeypoint::Ring_MCP", (int64)EMagicLeapHandTrackingKeypoint::Ring_MCP },
				{ "EMagicLeapHandTrackingKeypoint::Pinky_Tip", (int64)EMagicLeapHandTrackingKeypoint::Pinky_Tip },
				{ "EMagicLeapHandTrackingKeypoint::Pinky_DIP", (int64)EMagicLeapHandTrackingKeypoint::Pinky_DIP },
				{ "EMagicLeapHandTrackingKeypoint::Pinky_PIP", (int64)EMagicLeapHandTrackingKeypoint::Pinky_PIP },
				{ "EMagicLeapHandTrackingKeypoint::Pinky_MCP", (int64)EMagicLeapHandTrackingKeypoint::Pinky_MCP },
				{ "EMagicLeapHandTrackingKeypoint::Wrist_Center", (int64)EMagicLeapHandTrackingKeypoint::Wrist_Center },
				{ "EMagicLeapHandTrackingKeypoint::Wrist_Ulnar", (int64)EMagicLeapHandTrackingKeypoint::Wrist_Ulnar },
				{ "EMagicLeapHandTrackingKeypoint::Wrist_Radial", (int64)EMagicLeapHandTrackingKeypoint::Wrist_Radial },
				{ "EMagicLeapHandTrackingKeypoint::Hand_Center", (int64)EMagicLeapHandTrackingKeypoint::Hand_Center },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*! Transforms that could be tracked on the hand. In 0.15.0 RC5 8 of them may be tracked.*/" },
				{ "Hand_Center.Name", "EMagicLeapHandTrackingKeypoint::Hand_Center" },
				{ "Index_DIP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Index_DIP.Name", "EMagicLeapHandTrackingKeypoint::Index_DIP" },
				{ "Index_DIP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Index_MCP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Index_MCP.Name", "EMagicLeapHandTrackingKeypoint::Index_MCP" },
				{ "Index_MCP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Index_PIP.Name", "EMagicLeapHandTrackingKeypoint::Index_PIP" },
				{ "Index_Tip.Name", "EMagicLeapHandTrackingKeypoint::Index_Tip" },
				{ "Middle_DIP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Middle_DIP.Name", "EMagicLeapHandTrackingKeypoint::Middle_DIP" },
				{ "Middle_DIP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Middle_MCP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Middle_MCP.Name", "EMagicLeapHandTrackingKeypoint::Middle_MCP" },
				{ "Middle_MCP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Middle_PIP.Name", "EMagicLeapHandTrackingKeypoint::Middle_PIP" },
				{ "Middle_Tip.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Middle_Tip.Name", "EMagicLeapHandTrackingKeypoint::Middle_Tip" },
				{ "Middle_Tip.ToolTip", "SDK 0.21.0 tracked" },
				{ "ModuleRelativePath", "Public/MagicLeapHandTrackingTypes.h" },
				{ "Pinky_DIP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Pinky_DIP.Name", "EMagicLeapHandTrackingKeypoint::Pinky_DIP" },
				{ "Pinky_DIP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Pinky_MCP.Name", "EMagicLeapHandTrackingKeypoint::Pinky_MCP" },
				{ "Pinky_PIP.Name", "EMagicLeapHandTrackingKeypoint::Pinky_PIP" },
				{ "Pinky_Tip.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Pinky_Tip.Name", "EMagicLeapHandTrackingKeypoint::Pinky_Tip" },
				{ "Pinky_Tip.ToolTip", "SDK 0.21.0 tracked" },
				{ "Ring_DIP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Ring_DIP.Name", "EMagicLeapHandTrackingKeypoint::Ring_DIP" },
				{ "Ring_DIP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Ring_MCP.Name", "EMagicLeapHandTrackingKeypoint::Ring_MCP" },
				{ "Ring_PIP.Name", "EMagicLeapHandTrackingKeypoint::Ring_PIP" },
				{ "Ring_Tip.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Ring_Tip.Name", "EMagicLeapHandTrackingKeypoint::Ring_Tip" },
				{ "Ring_Tip.ToolTip", "SDK 0.21.0 tracked" },
				{ "Thumb_CMC.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Thumb_CMC.Name", "EMagicLeapHandTrackingKeypoint::Thumb_CMC" },
				{ "Thumb_CMC.ToolTip", "SDK 0.21.0 tracked" },
				{ "Thumb_IP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Thumb_IP.Name", "EMagicLeapHandTrackingKeypoint::Thumb_IP" },
				{ "Thumb_IP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Thumb_MCP.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Thumb_MCP.Name", "EMagicLeapHandTrackingKeypoint::Thumb_MCP" },
				{ "Thumb_MCP.ToolTip", "SDK 0.21.0 tracked" },
				{ "Thumb_Tip.Name", "EMagicLeapHandTrackingKeypoint::Thumb_Tip" },
				{ "ToolTip", "! Transforms that could be tracked on the hand. In 0.15.0 RC5 8 of them may be tracked." },
				{ "Wrist_Center.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Wrist_Center.Name", "EMagicLeapHandTrackingKeypoint::Wrist_Center" },
				{ "Wrist_Center.ToolTip", "SDK 0.21.0 tracked" },
				{ "Wrist_Radial.Name", "EMagicLeapHandTrackingKeypoint::Wrist_Radial" },
				{ "Wrist_Ulnar.Comment", "// SDK 0.21.0 tracked\n" },
				{ "Wrist_Ulnar.Name", "EMagicLeapHandTrackingKeypoint::Wrist_Ulnar" },
				{ "Wrist_Ulnar.ToolTip", "SDK 0.21.0 tracked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapHandTracking,
				nullptr,
				"EMagicLeapHandTrackingKeypoint",
				"EMagicLeapHandTrackingKeypoint",
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
