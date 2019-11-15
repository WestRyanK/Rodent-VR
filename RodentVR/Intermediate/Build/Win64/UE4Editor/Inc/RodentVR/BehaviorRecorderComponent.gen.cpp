// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/BehaviorRecorderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorRecorderComponent() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorRecorderComponent_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorRecorderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished();
	RODENTVR_API UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded();
	RODENTVR_API UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter();
	RODENTVR_API UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_Save();
// End Cross Module References
	void UBehaviorRecorderComponent::StaticRegisterNativesUBehaviorRecorderComponent()
	{
		UClass* Class = UBehaviorRecorderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMazeFinished", &UBehaviorRecorderComponent::execOnMazeFinished },
			{ "OnMazeLoaded", &UBehaviorRecorderComponent::execOnMazeLoaded },
			{ "OnRewardRegionEnter", &UBehaviorRecorderComponent::execOnRewardRegionEnter },
			{ "Save", &UBehaviorRecorderComponent::execSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "OnMazeFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "OnMazeLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics
	{
		struct BehaviorRecorderComponent_eventOnRewardRegionEnter_Parms
		{
			int32 RegionEnteredId;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RegionEnteredId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::NewProp_RegionEnteredId = { "RegionEnteredId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecorderComponent_eventOnRewardRegionEnter_Parms, RegionEnteredId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::NewProp_RegionEnteredId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "OnRewardRegionEnter", nullptr, nullptr, sizeof(BehaviorRecorderComponent_eventOnRewardRegionEnter_Parms), Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics
	{
		struct BehaviorRecorderComponent_eventSave_Parms
		{
			FString Filename;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecorderComponent_eventSave_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "Save", nullptr, nullptr, sizeof(BehaviorRecorderComponent_eventSave_Parms), Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBehaviorRecorderComponent_NoRegister()
	{
		return UBehaviorRecorderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorRecorderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorRecorderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBehaviorRecorderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished, "OnMazeFinished" }, // 3199429141
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded, "OnMazeLoaded" }, // 991673537
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_OnRewardRegionEnter, "OnRewardRegionEnter" }, // 1450809448
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_Save, "Save" }, // 317798542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorRecorderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BehaviorRecording/BehaviorRecorderComponent.h" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorRecorderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorRecorderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorRecorderComponent_Statics::ClassParams = {
		&UBehaviorRecorderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorRecorderComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorRecorderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorRecorderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorRecorderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorRecorderComponent, 795056203);
	template<> RODENTVR_API UClass* StaticClass<UBehaviorRecorderComponent>()
	{
		return UBehaviorRecorderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorRecorderComponent(Z_Construct_UClass_UBehaviorRecorderComponent, &UBehaviorRecorderComponent::StaticClass, TEXT("/Script/RodentVR"), TEXT("UBehaviorRecorderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorRecorderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
