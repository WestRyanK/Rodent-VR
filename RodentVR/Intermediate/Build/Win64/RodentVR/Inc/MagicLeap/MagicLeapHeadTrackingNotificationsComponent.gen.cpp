// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/MagicLeapHeadTrackingNotificationsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapHeadTrackingNotificationsComponent() {}
// Cross Module References
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_NoRegister();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UVRNotificationsComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature();
// End Cross Module References
	void UMagicLeapHeadTrackingNotificationsComponent::StaticRegisterNativesUMagicLeapHeadTrackingNotificationsComponent()
	{
	}
	UClass* Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_NoRegister()
	{
		return UMagicLeapHeadTrackingNotificationsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHeadTrackingNewSessionStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeadTrackingNewSessionStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHeadTrackingRecoveryFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeadTrackingRecoveryFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHeadTrackingRecovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeadTrackingRecovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHeadTrackingLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeadTrackingLost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRNotificationsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/** \n  Provides head tracking map events to enable apps to cleanly handle it. \n  The most important event to be aware of is when a map changes.\n  In the case that a new map session begins, or recovery fails, all formerly cached transform\n  and world reconstruction data (raycast, planes, mesh) is invalidated and must be updated.\n*/" },
		{ "IncludePath", "MagicLeapHeadTrackingNotificationsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapHeadTrackingNotificationsComponent.h" },
		{ "ToolTip", "Provides head tracking map events to enable apps to cleanly handle it.\nThe most important event to be aware of is when a map changes.\nIn the case that a new map session begins, or recovery fails, all formerly cached transform\nand world reconstruction data (raycast, planes, mesh) is invalidated and must be updated." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingNewSessionStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Comment", "/** New map session created. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHeadTrackingNotificationsComponent.h" },
		{ "ToolTip", "New map session created." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingNewSessionStarted = { "OnHeadTrackingNewSessionStarted", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingNewSessionStarted), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingNewSessionStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingNewSessionStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecoveryFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Comment", "/** Failed to recover previous map. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHeadTrackingNotificationsComponent.h" },
		{ "ToolTip", "Failed to recover previous map." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecoveryFailed = { "OnHeadTrackingRecoveryFailed", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingRecoveryFailed), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecoveryFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecoveryFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Comment", "/** Previous map was recovered. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHeadTrackingNotificationsComponent.h" },
		{ "ToolTip", "Previous map was recovered." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecovered = { "OnHeadTrackingRecovered", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingRecovered), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingLost_MetaData[] = {
		{ "Comment", "/** Map was lost. It could possibly recover. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHeadTrackingNotificationsComponent.h" },
		{ "ToolTip", "Map was lost. It could possibly recover." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingLost = { "OnHeadTrackingLost", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapHeadTrackingNotificationsComponent, OnHeadTrackingLost), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingLost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingNewSessionStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecoveryFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingRecovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::NewProp_OnHeadTrackingLost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapHeadTrackingNotificationsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::ClassParams = {
		&UMagicLeapHeadTrackingNotificationsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapHeadTrackingNotificationsComponent, 4279729816);
	template<> MAGICLEAP_API UClass* StaticClass<UMagicLeapHeadTrackingNotificationsComponent>()
	{
		return UMagicLeapHeadTrackingNotificationsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapHeadTrackingNotificationsComponent(Z_Construct_UClass_UMagicLeapHeadTrackingNotificationsComponent, &UMagicLeapHeadTrackingNotificationsComponent::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UMagicLeapHeadTrackingNotificationsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapHeadTrackingNotificationsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
