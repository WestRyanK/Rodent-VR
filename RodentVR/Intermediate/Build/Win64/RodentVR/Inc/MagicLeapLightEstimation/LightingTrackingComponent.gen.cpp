// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapLightEstimation/Public/LightingTrackingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingTrackingComponent() {}
// Cross Module References
	MAGICLEAPLIGHTESTIMATION_API UClass* Z_Construct_UClass_UMagicLeapLightingTrackingComponent_NoRegister();
	MAGICLEAPLIGHTESTIMATION_API UClass* Z_Construct_UClass_UMagicLeapLightingTrackingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeapLightEstimation();
// End Cross Module References
	void UMagicLeapLightingTrackingComponent::StaticRegisterNativesUMagicLeapLightingTrackingComponent()
	{
	}
	UClass* Z_Construct_UClass_UMagicLeapLightingTrackingComponent_NoRegister()
	{
		return UMagicLeapLightingTrackingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseColorTemp_MetaData[];
#endif
		static void NewProp_UseColorTemp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseColorTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseGlobalAmbience_MetaData[];
#endif
		static void NewProp_UseGlobalAmbience_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGlobalAmbience;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapLightEstimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\nThe LightingTrackingComponent wraps the Magic Leap lighting tracking API.\nThis api provides lumosity data from the camera that can be used to shade objects in a more realistic\nmanner (via the post processor).\n*/" },
		{ "IncludePath", "LightingTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LightingTrackingComponent.h" },
		{ "ToolTip", "The LightingTrackingComponent wraps the Magic Leap lighting tracking API.\nThis api provides lumosity data from the camera that can be used to shade objects in a more realistic\nmanner (via the post processor)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseColorTemp_MetaData[] = {
		{ "Category", "LightingTracking|MagicLeap" },
		{ "Comment", "/** Set to true if you want the color temperature value from the cameras to be used in post processing. */" },
		{ "ModuleRelativePath", "Public/LightingTrackingComponent.h" },
		{ "ToolTip", "Set to true if you want the color temperature value from the cameras to be used in post processing." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseColorTemp_SetBit(void* Obj)
	{
		((UMagicLeapLightingTrackingComponent*)Obj)->UseColorTemp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseColorTemp = { "UseColorTemp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapLightingTrackingComponent), &Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseColorTemp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseColorTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseColorTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseGlobalAmbience_MetaData[] = {
		{ "Category", "LightingTracking|MagicLeap" },
		{ "Comment", "/** Set to true if you want the global ambience value from the cameras to be used in post processing. */" },
		{ "ModuleRelativePath", "Public/LightingTrackingComponent.h" },
		{ "ToolTip", "Set to true if you want the global ambience value from the cameras to be used in post processing." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseGlobalAmbience_SetBit(void* Obj)
	{
		((UMagicLeapLightingTrackingComponent*)Obj)->UseGlobalAmbience = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseGlobalAmbience = { "UseGlobalAmbience", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapLightingTrackingComponent), &Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseGlobalAmbience_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseGlobalAmbience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseGlobalAmbience_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseColorTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::NewProp_UseGlobalAmbience,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapLightingTrackingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::ClassParams = {
		&UMagicLeapLightingTrackingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapLightingTrackingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapLightingTrackingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapLightingTrackingComponent, 1885261519);
	template<> MAGICLEAPLIGHTESTIMATION_API UClass* StaticClass<UMagicLeapLightingTrackingComponent>()
	{
		return UMagicLeapLightingTrackingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapLightingTrackingComponent(Z_Construct_UClass_UMagicLeapLightingTrackingComponent, &UMagicLeapLightingTrackingComponent::StaticClass, TEXT("/Script/MagicLeapLightEstimation"), TEXT("UMagicLeapLightingTrackingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapLightingTrackingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
