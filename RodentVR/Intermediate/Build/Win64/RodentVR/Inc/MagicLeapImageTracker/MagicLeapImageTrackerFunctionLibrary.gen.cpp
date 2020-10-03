// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapImageTracker/Public/MagicLeapImageTrackerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapImageTrackerFunctionLibrary() {}
// Cross Module References
	MAGICLEAPIMAGETRACKER_API UClass* Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_NoRegister();
	MAGICLEAPIMAGETRACKER_API UClass* Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapImageTracker();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapImageTrackerFunctionLibrary::execIsImageTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapImageTrackerFunctionLibrary::execEnableImageTracking)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapImageTrackerFunctionLibrary::EnableImageTracking(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapImageTrackerFunctionLibrary::execGetMaxSimultaneousTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapImageTrackerFunctionLibrary::execSetMaxSimultaneousTargets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSimultaneousTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(Z_Param_MaxSimultaneousTargets);
		P_NATIVE_END;
	}
	void UMagicLeapImageTrackerFunctionLibrary::StaticRegisterNativesUMagicLeapImageTrackerFunctionLibrary()
	{
		UClass* Class = UMagicLeapImageTrackerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableImageTracking", &UMagicLeapImageTrackerFunctionLibrary::execEnableImageTracking },
			{ "GetMaxSimultaneousTargets", &UMagicLeapImageTrackerFunctionLibrary::execGetMaxSimultaneousTargets },
			{ "IsImageTrackingEnabled", &UMagicLeapImageTrackerFunctionLibrary::execIsImageTrackingEnabled },
			{ "SetMaxSimultaneousTargets", &UMagicLeapImageTrackerFunctionLibrary::execSetMaxSimultaneousTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics
	{
		struct MagicLeapImageTrackerFunctionLibrary_eventEnableImageTracking_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((MagicLeapImageTrackerFunctionLibrary_eventEnableImageTracking_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapImageTrackerFunctionLibrary_eventEnableImageTracking_Parms), &Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  If true, image tracker will detect and track targets.\n\n\x09  When enabled Image Tracker will gain access to the camera and start\n\x09  trackingimages. Enabling image tracker is expensive, takes about 1500ms\n\x09  on the average.\n\n\x09  When disabled Image Tracker will release the camera and stop tracking\n\x09  images. Internal state of the tracker will be maintained (i.e. list of\n\x09  active/inactive argets and their target_handles).\n\n\x09  This is done automatically on application pause / resume.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerFunctionLibrary.h" },
		{ "ToolTip", "If true, image tracker will detect and track targets.\n\nWhen enabled Image Tracker will gain access to the camera and start\ntrackingimages. Enabling image tracker is expensive, takes about 1500ms\non the average.\n\nWhen disabled Image Tracker will release the camera and stop tracking\nimages. Internal state of the tracker will be maintained (i.e. list of\nactive/inactive argets and their target_handles).\n\nThis is done automatically on application pause / resume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary, nullptr, "EnableImageTracking", nullptr, nullptr, sizeof(MagicLeapImageTrackerFunctionLibrary_eventEnableImageTracking_Parms), Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics
	{
		struct MagicLeapImageTrackerFunctionLibrary_eventGetMaxSimultaneousTargets_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapImageTrackerFunctionLibrary_eventGetMaxSimultaneousTargets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/**\n\x09\x09Gets the maximum number of Image Targets that can be tracked at any given time.\n\x09\x09@return The maximum number of Image Targets that can be tracked at any given time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerFunctionLibrary.h" },
		{ "ToolTip", "Gets the maximum number of Image Targets that can be tracked at any given time.\n@return The maximum number of Image Targets that can be tracked at any given time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary, nullptr, "GetMaxSimultaneousTargets", nullptr, nullptr, sizeof(MagicLeapImageTrackerFunctionLibrary_eventGetMaxSimultaneousTargets_Parms), Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics
	{
		struct MagicLeapImageTrackerFunctionLibrary_eventIsImageTrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapImageTrackerFunctionLibrary_eventIsImageTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapImageTrackerFunctionLibrary_eventIsImageTrackingEnabled_Parms), &Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/**\n\x09\x09Gets the active state of the image tracking system.\n\x09\x09@return True if image tracking is enabled, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerFunctionLibrary.h" },
		{ "ToolTip", "Gets the active state of the image tracking system.\n@return True if image tracking is enabled, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary, nullptr, "IsImageTrackingEnabled", nullptr, nullptr, sizeof(MagicLeapImageTrackerFunctionLibrary_eventIsImageTrackingEnabled_Parms), Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics
	{
		struct MagicLeapImageTrackerFunctionLibrary_eventSetMaxSimultaneousTargets_Parms
		{
			int32 MaxSimultaneousTargets;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousTargets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::NewProp_MaxSimultaneousTargets = { "MaxSimultaneousTargets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapImageTrackerFunctionLibrary_eventSetMaxSimultaneousTargets_Parms, MaxSimultaneousTargets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::NewProp_MaxSimultaneousTargets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Set maximum number of Image Targets that can be tracked at any given time.\n\n\x09  If the tracker is already tracking the maximum number of targets\n\x09  possible then it will stop searching for new targets which helps\n\x09  in reducing the load on the CPU. For example, if you are interested in\n\x09  tracking a maximum of x targets from a list y (x < y) targets then set this\n\x09  parameter to x.\n\n\x09  The valid range for this parameter is from 1 through 25.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerFunctionLibrary.h" },
		{ "ToolTip", "Set maximum number of Image Targets that can be tracked at any given time.\n\nIf the tracker is already tracking the maximum number of targets\npossible then it will stop searching for new targets which helps\nin reducing the load on the CPU. For example, if you are interested in\ntracking a maximum of x targets from a list y (x < y) targets then set this\nparameter to x.\n\nThe valid range for this parameter is from 1 through 25." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary, nullptr, "SetMaxSimultaneousTargets", nullptr, nullptr, sizeof(MagicLeapImageTrackerFunctionLibrary_eventSetMaxSimultaneousTargets_Parms), Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_NoRegister()
	{
		return UMagicLeapImageTrackerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapImageTracker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking, "EnableImageTracking" }, // 2828929694
		{ &Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets, "GetMaxSimultaneousTargets" }, // 1759509000
		{ &Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled, "IsImageTrackingEnabled" }, // 1223439807
		{ &Z_Construct_UFunction_UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets, "SetMaxSimultaneousTargets" }, // 1061336978
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapImageTrackerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapImageTrackerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapImageTrackerFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapImageTrackerFunctionLibrary, 4085317577);
	template<> MAGICLEAPIMAGETRACKER_API UClass* StaticClass<UMagicLeapImageTrackerFunctionLibrary>()
	{
		return UMagicLeapImageTrackerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapImageTrackerFunctionLibrary(Z_Construct_UClass_UMagicLeapImageTrackerFunctionLibrary, &UMagicLeapImageTrackerFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapImageTracker"), TEXT("UMagicLeapImageTrackerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapImageTrackerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
