// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Hardware/BallInput/BallInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallInput() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UBallInput_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBallInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	DEFINE_FUNCTION(UBallInput::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBallInput::Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBallInput::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBallInput::Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBallInput::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBallInput::Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBallInput::execGetCurrentDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBallInput::GetCurrentDeviceName();
		P_NATIVE_END;
	}
	void UBallInput::StaticRegisterNativesUBallInput()
	{
		UClass* Class = UBallInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentDeviceName", &UBallInput::execGetCurrentDeviceName },
			{ "Initialize", &UBallInput::execInitialize },
			{ "Start", &UBallInput::execStart },
			{ "Stop", &UBallInput::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics
	{
		struct BallInput_eventGetCurrentDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BallInput_eventGetCurrentDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Hardware/BallInput/BallInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallInput, nullptr, "GetCurrentDeviceName", nullptr, nullptr, sizeof(BallInput_eventGetCurrentDeviceName_Parms), Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBallInput_GetCurrentDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBallInput_GetCurrentDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBallInput_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBallInput_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Hardware/BallInput/BallInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallInput_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallInput, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBallInput_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInput_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBallInput_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBallInput_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBallInput_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBallInput_Start_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09Starts reading from input devices to determine movement.\n\x09\x09Input devices are read on a separate thread and accumulated.\n\x09\x09""Call get_movement_delta() to determine how much movement\n\x09\x09has occurred since the last call.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Hardware/BallInput/BallInput.h" },
		{ "ToolTip", "Starts reading from input devices to determine movement.\nInput devices are read on a separate thread and accumulated.\nCall get_movement_delta() to determine how much movement\nhas occurred since the last call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallInput_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallInput, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBallInput_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInput_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBallInput_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBallInput_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBallInput_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBallInput_Stop_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09Stops reading from input devices and terminates reading thread.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Hardware/BallInput/BallInput.h" },
		{ "ToolTip", "Stops reading from input devices and terminates reading thread." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallInput_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallInput, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBallInput_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInput_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBallInput_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBallInput_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBallInput_NoRegister()
	{
		return UBallInput::StaticClass();
	}
	struct Z_Construct_UClass_UBallInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBallInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBallInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBallInput_GetCurrentDeviceName, "GetCurrentDeviceName" }, // 3396007211
		{ &Z_Construct_UFunction_UBallInput_Initialize, "Initialize" }, // 448558302
		{ &Z_Construct_UFunction_UBallInput_Start, "Start" }, // 2159151602
		{ &Z_Construct_UFunction_UBallInput_Stop, "Stop" }, // 2009495493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Hardware/BallInput/BallInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Hardware/BallInput/BallInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBallInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBallInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBallInput_Statics::ClassParams = {
		&UBallInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBallInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBallInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBallInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBallInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBallInput, 35205433);
	template<> RODENTVR_API UClass* StaticClass<UBallInput>()
	{
		return UBallInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBallInput(Z_Construct_UClass_UBallInput, &UBallInput::StaticClass, TEXT("/Script/RodentVR"), TEXT("UBallInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBallInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
