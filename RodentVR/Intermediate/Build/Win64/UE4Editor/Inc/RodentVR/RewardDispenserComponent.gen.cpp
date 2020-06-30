// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/RewardDispenserComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardDispenserComponent() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_URewardDispenserComponent_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_URewardDispenserComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UDevice_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URewardDispenserComponent::execStopDispensingRewards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDispensingRewards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URewardDispenserComponent::execDispenseReward)
	{
		P_GET_OBJECT(UDevice,Z_Param_Device);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RewardDeviceDispensingDurationSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispenseReward(Z_Param_Device,Z_Param_RewardDeviceDispensingDurationSec);
		P_NATIVE_END;
	}
	void URewardDispenserComponent::StaticRegisterNativesURewardDispenserComponent()
	{
		UClass* Class = URewardDispenserComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DispenseReward", &URewardDispenserComponent::execDispenseReward },
			{ "StopDispensingRewards", &URewardDispenserComponent::execStopDispensingRewards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics
	{
		struct RewardDispenserComponent_eventDispenseReward_Parms
		{
			UDevice* Device;
			float RewardDeviceDispensingDurationSec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RewardDeviceDispensingDurationSec;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::NewProp_RewardDeviceDispensingDurationSec = { "RewardDeviceDispensingDurationSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RewardDispenserComponent_eventDispenseReward_Parms, RewardDeviceDispensingDurationSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RewardDispenserComponent_eventDispenseReward_Parms, Device), Z_Construct_UClass_UDevice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::NewProp_RewardDeviceDispensingDurationSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::NewProp_Device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/RewardDispenserComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewardDispenserComponent, nullptr, "DispenseReward", nullptr, nullptr, sizeof(RewardDispenserComponent_eventDispenseReward_Parms), Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URewardDispenserComponent_DispenseReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URewardDispenserComponent_DispenseReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/RewardDispenserComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewardDispenserComponent, nullptr, "StopDispensingRewards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URewardDispenserComponent_NoRegister()
	{
		return URewardDispenserComponent::StaticClass();
	}
	struct Z_Construct_UClass_URewardDispenserComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URewardDispenserComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URewardDispenserComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URewardDispenserComponent_DispenseReward, "DispenseReward" }, // 3988278605
		{ &Z_Construct_UFunction_URewardDispenserComponent_StopDispensingRewards, "StopDispensingRewards" }, // 2896289044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewardDispenserComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Simulator/RewardDispenserComponent.h" },
		{ "ModuleRelativePath", "Private/Simulator/RewardDispenserComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URewardDispenserComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URewardDispenserComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URewardDispenserComponent_Statics::ClassParams = {
		&URewardDispenserComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URewardDispenserComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URewardDispenserComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URewardDispenserComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URewardDispenserComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URewardDispenserComponent, 2401105661);
	template<> RODENTVR_API UClass* StaticClass<URewardDispenserComponent>()
	{
		return URewardDispenserComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URewardDispenserComponent(Z_Construct_UClass_URewardDispenserComponent, &URewardDispenserComponent::StaticClass, TEXT("/Script/RodentVR"), TEXT("URewardDispenserComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URewardDispenserComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
