// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapEyeTracker/Public/MagicLeapEyeTrackerModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapEyeTrackerModule() {}
// Cross Module References
	MAGICLEAPEYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState();
	UPackage* Z_Construct_UPackage__Script_MagicLeapEyeTracker();
	MAGICLEAPEYETRACKER_API UClass* Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_NoRegister();
	MAGICLEAPEYETRACKER_API UClass* Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MAGICLEAPEYETRACKER_API UEnum* Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus();
// End Cross Module References
class UScriptStruct* FMagicLeapEyeBlinkState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPEYETRACKER_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState, Z_Construct_UPackage__Script_MagicLeapEyeTracker(), TEXT("MagicLeapEyeBlinkState"), sizeof(FMagicLeapEyeBlinkState), Get_Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPEYETRACKER_API UScriptStruct* StaticStruct<FMagicLeapEyeBlinkState>()
{
	return FMagicLeapEyeBlinkState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapEyeBlinkState(FMagicLeapEyeBlinkState::StaticStruct, TEXT("/Script/MagicLeapEyeTracker"), TEXT("MagicLeapEyeBlinkState"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapEyeTracker_StaticRegisterNativesFMagicLeapEyeBlinkState
{
	FScriptStruct_MagicLeapEyeTracker_StaticRegisterNativesFMagicLeapEyeBlinkState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapEyeBlinkState")),new UScriptStruct::TCppStructOps<FMagicLeapEyeBlinkState>);
	}
} ScriptStruct_MagicLeapEyeTracker_StaticRegisterNativesFMagicLeapEyeBlinkState;
	struct Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyeBlinked_MetaData[];
#endif
		static void NewProp_RightEyeBlinked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightEyeBlinked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyeBlinked_MetaData[];
#endif
		static void NewProp_LeftEyeBlinked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftEyeBlinked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapEyeBlinkState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_RightEyeBlinked_MetaData[] = {
		{ "Category", "Eye Blink State" },
		{ "Comment", "/** True if eyes are inside a blink. When not wearing the device, values can be arbitrary. */" },
		{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerModule.h" },
		{ "ToolTip", "True if eyes are inside a blink. When not wearing the device, values can be arbitrary." },
	};
#endif
	void Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_RightEyeBlinked_SetBit(void* Obj)
	{
		((FMagicLeapEyeBlinkState*)Obj)->RightEyeBlinked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_RightEyeBlinked = { "RightEyeBlinked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMagicLeapEyeBlinkState), &Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_RightEyeBlinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_RightEyeBlinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_RightEyeBlinked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_LeftEyeBlinked_MetaData[] = {
		{ "Category", "Eye Blink State" },
		{ "Comment", "/** True if eyes are inside a blink. When not wearing the device, values can be arbitrary. */" },
		{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerModule.h" },
		{ "ToolTip", "True if eyes are inside a blink. When not wearing the device, values can be arbitrary." },
	};
#endif
	void Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_LeftEyeBlinked_SetBit(void* Obj)
	{
		((FMagicLeapEyeBlinkState*)Obj)->LeftEyeBlinked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_LeftEyeBlinked = { "LeftEyeBlinked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMagicLeapEyeBlinkState), &Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_LeftEyeBlinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_LeftEyeBlinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_LeftEyeBlinked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_RightEyeBlinked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::NewProp_LeftEyeBlinked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapEyeTracker,
		nullptr,
		&NewStructOps,
		"MagicLeapEyeBlinkState",
		sizeof(FMagicLeapEyeBlinkState),
		alignof(FMagicLeapEyeBlinkState),
		Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapEyeTracker();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapEyeBlinkState"), sizeof(FMagicLeapEyeBlinkState), Get_Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState_Hash() { return 1225775769U; }
	DEFINE_FUNCTION(UMagicLeapEyeTrackerFunctionLibrary::execGetCalibrationStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapEyeTrackingCalibrationStatus*)Z_Param__Result=UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapEyeTrackerFunctionLibrary::execGetEyeBlinkState)
	{
		P_GET_STRUCT_REF(FMagicLeapEyeBlinkState,Z_Param_Out_BlinkState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(Z_Param_Out_BlinkState);
		P_NATIVE_END;
	}
	void UMagicLeapEyeTrackerFunctionLibrary::StaticRegisterNativesUMagicLeapEyeTrackerFunctionLibrary()
	{
		UClass* Class = UMagicLeapEyeTrackerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCalibrationStatus", &UMagicLeapEyeTrackerFunctionLibrary::execGetCalibrationStatus },
			{ "GetEyeBlinkState", &UMagicLeapEyeTrackerFunctionLibrary::execGetEyeBlinkState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics
	{
		struct MagicLeapEyeTrackerFunctionLibrary_eventGetCalibrationStatus_Parms
		{
			EMagicLeapEyeTrackingCalibrationStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapEyeTrackerFunctionLibrary_eventGetCalibrationStatus_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EyeTracking|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary, nullptr, "GetCalibrationStatus", nullptr, nullptr, sizeof(MagicLeapEyeTrackerFunctionLibrary_eventGetCalibrationStatus_Parms), Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics
	{
		struct MagicLeapEyeTrackerFunctionLibrary_eventGetEyeBlinkState_Parms
		{
			FMagicLeapEyeBlinkState BlinkState;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlinkState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapEyeTrackerFunctionLibrary_eventGetEyeBlinkState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapEyeTrackerFunctionLibrary_eventGetEyeBlinkState_Parms), &Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::NewProp_BlinkState = { "BlinkState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapEyeTrackerFunctionLibrary_eventGetEyeBlinkState_Parms, BlinkState), Z_Construct_UScriptStruct_FMagicLeapEyeBlinkState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::NewProp_BlinkState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary, nullptr, "GetEyeBlinkState", nullptr, nullptr, sizeof(MagicLeapEyeTrackerFunctionLibrary_eventGetEyeBlinkState_Parms), Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_NoRegister()
	{
		return UMagicLeapEyeTrackerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapEyeTracker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus, "GetCalibrationStatus" }, // 2341324020
		{ &Z_Construct_UFunction_UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState, "GetEyeBlinkState" }, // 2556519424
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapEyeTrackerModule.h" },
		{ "ModuleRelativePath", "Public/MagicLeapEyeTrackerModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapEyeTrackerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapEyeTrackerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapEyeTrackerFunctionLibrary, 3638364098);
	template<> MAGICLEAPEYETRACKER_API UClass* StaticClass<UMagicLeapEyeTrackerFunctionLibrary>()
	{
		return UMagicLeapEyeTrackerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapEyeTrackerFunctionLibrary(Z_Construct_UClass_UMagicLeapEyeTrackerFunctionLibrary, &UMagicLeapEyeTrackerFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapEyeTracker"), TEXT("UMagicLeapEyeTrackerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapEyeTrackerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
