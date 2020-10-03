// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/ColorGradient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorGradient() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UColorGradient_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UColorGradient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UColorGradient::execAddColorStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopValue);
		P_GET_STRUCT(FLinearColor,Z_Param_StopColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddColorStop(Z_Param_StopValue,Z_Param_StopColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorGradient::execGetColorStops)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<float,FLinearColor>*)Z_Param__Result=P_THIS->GetColorStops();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorGradient::execGetColorAtValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorAtValue(Z_Param_Value);
		P_NATIVE_END;
	}
	void UColorGradient::StaticRegisterNativesUColorGradient()
	{
		UClass* Class = UColorGradient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddColorStop", &UColorGradient::execAddColorStop },
			{ "GetColorAtValue", &UColorGradient::execGetColorAtValue },
			{ "GetColorStops", &UColorGradient::execGetColorStops },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorGradient_AddColorStop_Statics
	{
		struct ColorGradient_eventAddColorStop_Parms
		{
			float StopValue;
			FLinearColor StopColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::NewProp_StopColor = { "StopColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorGradient_eventAddColorStop_Parms, StopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::NewProp_StopValue = { "StopValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorGradient_eventAddColorStop_Parms, StopValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::NewProp_StopColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::NewProp_StopValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/ColorGradient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorGradient, nullptr, "AddColorStop", nullptr, nullptr, sizeof(ColorGradient_eventAddColorStop_Parms), Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorGradient_AddColorStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorGradient_AddColorStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics
	{
		struct ColorGradient_eventGetColorAtValue_Parms
		{
			float Value;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorGradient_eventGetColorAtValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorGradient_eventGetColorAtValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/ColorGradient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorGradient, nullptr, "GetColorAtValue", nullptr, nullptr, sizeof(ColorGradient_eventGetColorAtValue_Parms), Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorGradient_GetColorAtValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorGradient_GetColorAtValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorGradient_GetColorStops_Statics
	{
		struct ColorGradient_eventGetColorStops_Parms
		{
			TMap<float,FLinearColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorGradient_eventGetColorStops_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/ColorGradient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorGradient, nullptr, "GetColorStops", nullptr, nullptr, sizeof(ColorGradient_eventGetColorStops_Parms), Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorGradient_GetColorStops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorGradient_GetColorStops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UColorGradient_NoRegister()
	{
		return UColorGradient::StaticClass();
	}
	struct Z_Construct_UClass_UColorGradient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorStops_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ColorStops;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorStops_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorStops_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorGradient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorGradient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorGradient_AddColorStop, "AddColorStop" }, // 4128873246
		{ &Z_Construct_UFunction_UColorGradient_GetColorAtValue, "GetColorAtValue" }, // 3456758166
		{ &Z_Construct_UFunction_UColorGradient_GetColorStops, "GetColorStops" }, // 2352837412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorGradient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehaviorRecording/ColorGradient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/ColorGradient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops_MetaData[] = {
		{ "BlueprintGetter", "GetColorStops" },
		{ "Category", "ColorGradient" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/ColorGradient.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops = { "ColorStops", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UColorGradient, ColorStops), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops_Key_KeyProp = { "ColorStops_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops_ValueProp = { "ColorStops", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorGradient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorGradient_Statics::NewProp_ColorStops_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorGradient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorGradient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColorGradient_Statics::ClassParams = {
		&UColorGradient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UColorGradient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UColorGradient_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UColorGradient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorGradient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorGradient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColorGradient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColorGradient, 100768734);
	template<> RODENTVR_API UClass* StaticClass<UColorGradient>()
	{
		return UColorGradient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColorGradient(Z_Construct_UClass_UColorGradient, &UColorGradient::StaticClass, TEXT("/Script/RodentVR"), TEXT("UColorGradient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorGradient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
