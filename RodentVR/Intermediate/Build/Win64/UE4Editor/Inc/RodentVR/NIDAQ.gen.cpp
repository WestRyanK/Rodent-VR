// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Hardware/NIDAQ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNIDAQ() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UNIDAQ_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UNIDAQ();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UNIDAQ_control_NIDAQ();
	RODENTVR_API UFunction* Z_Construct_UFunction_UNIDAQ_init_NIDAQ();
// End Cross Module References
	void UNIDAQ::StaticRegisterNativesUNIDAQ()
	{
		UClass* Class = UNIDAQ::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "control_NIDAQ", &UNIDAQ::execcontrol_NIDAQ },
			{ "init_NIDAQ", &UNIDAQ::execinit_NIDAQ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics
	{
		struct NIDAQ_eventcontrol_NIDAQ_Parms
		{
			bool isOn;
			FString deviceName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static void NewProp_isOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NIDAQ_eventcontrol_NIDAQ_Parms, deviceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::NewProp_isOn_SetBit(void* Obj)
	{
		((NIDAQ_eventcontrol_NIDAQ_Parms*)Obj)->isOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::NewProp_isOn = { "isOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NIDAQ_eventcontrol_NIDAQ_Parms), &Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::NewProp_isOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::NewProp_isOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIDAQ" },
		{ "ModuleRelativePath", "Hardware/NIDAQ.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNIDAQ, nullptr, "control_NIDAQ", nullptr, nullptr, sizeof(NIDAQ_eventcontrol_NIDAQ_Parms), Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNIDAQ_control_NIDAQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNIDAQ_control_NIDAQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNIDAQ_init_NIDAQ_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNIDAQ_init_NIDAQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIDAQ" },
		{ "ModuleRelativePath", "Hardware/NIDAQ.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNIDAQ_init_NIDAQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNIDAQ, nullptr, "init_NIDAQ", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNIDAQ_init_NIDAQ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNIDAQ_init_NIDAQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNIDAQ_init_NIDAQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNIDAQ_init_NIDAQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNIDAQ_NoRegister()
	{
		return UNIDAQ::StaticClass();
	}
	struct Z_Construct_UClass_UNIDAQ_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNIDAQ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNIDAQ_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNIDAQ_control_NIDAQ, "control_NIDAQ" }, // 2336713459
		{ &Z_Construct_UFunction_UNIDAQ_init_NIDAQ, "init_NIDAQ" }, // 3110797265
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNIDAQ_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Hardware/NIDAQ.h" },
		{ "ModuleRelativePath", "Hardware/NIDAQ.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNIDAQ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNIDAQ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNIDAQ_Statics::ClassParams = {
		&UNIDAQ::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNIDAQ_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNIDAQ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNIDAQ()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNIDAQ_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNIDAQ, 3124771528);
	template<> RODENTVR_API UClass* StaticClass<UNIDAQ>()
	{
		return UNIDAQ::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNIDAQ(Z_Construct_UClass_UNIDAQ, &UNIDAQ::StaticClass, TEXT("/Script/RodentVR"), TEXT("UNIDAQ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNIDAQ);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
