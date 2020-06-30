// Copyright Epic Games, Inc. All Rights Reserved.
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
	RODENTVR_API UClass* Z_Construct_UClass_URegionSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBehaviorRecorderComponent::execAddDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorRecorderComponent::execRemoveDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorRecorderComponent::execOnMazeFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMazeFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorRecorderComponent::execOnMazeLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMazeLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorRecorderComponent::execOnRegionEnter)
	{
		P_GET_OBJECT(URegionSettings,Z_Param_RegionEntered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRegionEnter(Z_Param_RegionEntered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorRecorderComponent::execSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save(Z_Param_Filename);
		P_NATIVE_END;
	}
	void UBehaviorRecorderComponent::StaticRegisterNativesUBehaviorRecorderComponent()
	{
		UClass* Class = UBehaviorRecorderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDelegates", &UBehaviorRecorderComponent::execAddDelegates },
			{ "OnMazeFinished", &UBehaviorRecorderComponent::execOnMazeFinished },
			{ "OnMazeLoaded", &UBehaviorRecorderComponent::execOnMazeLoaded },
			{ "OnRegionEnter", &UBehaviorRecorderComponent::execOnRegionEnter },
			{ "RemoveDelegates", &UBehaviorRecorderComponent::execRemoveDelegates },
			{ "Save", &UBehaviorRecorderComponent::execSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "AddDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "OnMazeFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "OnMazeLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics
	{
		struct BehaviorRecorderComponent_eventOnRegionEnter_Parms
		{
			URegionSettings* RegionEntered;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegionEntered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::NewProp_RegionEntered = { "RegionEntered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecorderComponent_eventOnRegionEnter_Parms, RegionEntered), Z_Construct_UClass_URegionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::NewProp_RegionEntered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "OnRegionEnter", nullptr, nullptr, sizeof(BehaviorRecorderComponent_eventOnRegionEnter_Parms), Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecorderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "RemoveDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecorderComponent, nullptr, "Save", nullptr, nullptr, sizeof(BehaviorRecorderComponent_eventSave_Parms), Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecorderComponent_Save_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_AddDelegates, "AddDelegates" }, // 2348626413
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeFinished, "OnMazeFinished" }, // 330781596
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_OnMazeLoaded, "OnMazeLoaded" }, // 4205082645
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_OnRegionEnter, "OnRegionEnter" }, // 2611984326
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_RemoveDelegates, "RemoveDelegates" }, // 3282819206
		{ &Z_Construct_UFunction_UBehaviorRecorderComponent_Save, "Save" }, // 131145810
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
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorRecorderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorRecorderComponent_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UBehaviorRecorderComponent, 1028831673);
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
