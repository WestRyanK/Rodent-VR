// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapEyeTracker/Public/MagicLeapEyeTrackerTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapEyeTrackerTypes() {}
// Cross Module References
	MAGICLEAPEYETRACKER_API UEnum* Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus();
	UPackage* Z_Construct_UPackage__Script_MagicLeapEyeTracker();
	MAGICLEAPEYETRACKER_API UEnum* Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingStatus();
// End Cross Module References
	static UEnum* EMagicLeapEyeTrackingCalibrationStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus, Z_Construct_UPackage__Script_MagicLeapEyeTracker(), TEXT("EMagicLeapEyeTrackingCalibrationStatus"));
		}
		return Singleton;
	}
	template<> MAGICLEAPEYETRACKER_API UEnum* StaticEnum<EMagicLeapEyeTrackingCalibrationStatus>()
	{
		return EMagicLeapEyeTrackingCalibrationStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapEyeTrackingCalibrationStatus(EMagicLeapEyeTrackingCalibrationStatus_StaticEnum, TEXT("/Script/MagicLeapEyeTracker"), TEXT("EMagicLeapEyeTrackingCalibrationStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus_Hash() { return 1943183696U; }
	UEnum* Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapEyeTracker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapEyeTrackingCalibrationStatus"), 0, Get_Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapEyeTrackingCalibrationStatus::None", (int64)EMagicLeapEyeTrackingCalibrationStatus::None },
				{ "EMagicLeapEyeTrackingCalibrationStatus::Bad", (int64)EMagicLeapEyeTrackingCalibrationStatus::Bad },
				{ "EMagicLeapEyeTrackingCalibrationStatus::Good", (int64)EMagicLeapEyeTrackingCalibrationStatus::Good },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bad.Comment", "/** Calibration was completed with bad results */" },
				{ "Bad.Name", "EMagicLeapEyeTrackingCalibrationStatus::Bad" },
				{ "Bad.ToolTip", "Calibration was completed with bad results" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Possible calibration statuses the eye tracker could report. */" },
				{ "Good.Comment", "/** Calibration was completed with good results */" },
				{ "Good.Name", "EMagicLeapEyeTrackingCalibrationStatus::Good" },
				{ "Good.ToolTip", "Calibration was completed with good results" },
				{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerTypes.h" },
				{ "None.Comment", "/** Calibration was not completed */" },
				{ "None.Name", "EMagicLeapEyeTrackingCalibrationStatus::None" },
				{ "None.ToolTip", "Calibration was not completed" },
				{ "ToolTip", "Possible calibration statuses the eye tracker could report." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapEyeTracker,
				nullptr,
				"EMagicLeapEyeTrackingCalibrationStatus",
				"EMagicLeapEyeTrackingCalibrationStatus",
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
	static UEnum* EMagicLeapEyeTrackingStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingStatus, Z_Construct_UPackage__Script_MagicLeapEyeTracker(), TEXT("EMagicLeapEyeTrackingStatus"));
		}
		return Singleton;
	}
	template<> MAGICLEAPEYETRACKER_API UEnum* StaticEnum<EMagicLeapEyeTrackingStatus>()
	{
		return EMagicLeapEyeTrackingStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapEyeTrackingStatus(EMagicLeapEyeTrackingStatus_StaticEnum, TEXT("/Script/MagicLeapEyeTracker"), TEXT("EMagicLeapEyeTrackingStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingStatus_Hash() { return 3179412044U; }
	UEnum* Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapEyeTracker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapEyeTrackingStatus"), 0, Get_Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapEyeTrackingStatus::NotConnected", (int64)EMagicLeapEyeTrackingStatus::NotConnected },
				{ "EMagicLeapEyeTrackingStatus::Disabled", (int64)EMagicLeapEyeTrackingStatus::Disabled },
				{ "EMagicLeapEyeTrackingStatus::UserNotPresent", (int64)EMagicLeapEyeTrackingStatus::UserNotPresent },
				{ "EMagicLeapEyeTrackingStatus::UserPresent", (int64)EMagicLeapEyeTrackingStatus::UserPresent },
				{ "EMagicLeapEyeTrackingStatus::UserPresentAndWatchingWindow", (int64)EMagicLeapEyeTrackingStatus::UserPresentAndWatchingWindow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Comment", "//The eyetracker is not connected to UE4 for some reason. The tracker might not be plugged in, the game window is currently running on a screen without an eyetracker or is otherwise not available.\n" },
				{ "Disabled.DisplayName", "Disabled" },
				{ "Disabled.Name", "EMagicLeapEyeTrackingStatus::Disabled" },
				{ "Disabled.ToolTip", "The eyetracker is not connected to UE4 for some reason. The tracker might not be plugged in, the game window is currently running on a screen without an eyetracker or is otherwise not available." },
				{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerTypes.h" },
				{ "NotConnected.DisplayName", "Not Connected" },
				{ "NotConnected.Name", "EMagicLeapEyeTrackingStatus::NotConnected" },
				{ "UserNotPresent.Comment", "//Eyetracking has been disabled by the user or developer.\n" },
				{ "UserNotPresent.DisplayName", "User Not Present" },
				{ "UserNotPresent.Name", "EMagicLeapEyeTrackingStatus::UserNotPresent" },
				{ "UserNotPresent.ToolTip", "Eyetracking has been disabled by the user or developer." },
				{ "UserPresent.Comment", "//The eyetracker is running but has not yet detected a user.\n" },
				{ "UserPresent.DisplayName", "User Present" },
				{ "UserPresent.Name", "EMagicLeapEyeTrackingStatus::UserPresent" },
				{ "UserPresent.ToolTip", "The eyetracker is running but has not yet detected a user." },
				{ "UserPresentAndWatchingWindow.Comment", "//The eyetracker has detected a user and is actively tracking them. They appear not to be focusing on the game window at the moment however.\n" },
				{ "UserPresentAndWatchingWindow.DisplayName", "User Present And Watching The Game Window" },
				{ "UserPresentAndWatchingWindow.Name", "EMagicLeapEyeTrackingStatus::UserPresentAndWatchingWindow" },
				{ "UserPresentAndWatchingWindow.ToolTip", "The eyetracker has detected a user and is actively tracking them. They appear not to be focusing on the game window at the moment however." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapEyeTracker,
				nullptr,
				"EMagicLeapEyeTrackingStatus",
				"EMagicLeapEyeTrackingStatus",
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
