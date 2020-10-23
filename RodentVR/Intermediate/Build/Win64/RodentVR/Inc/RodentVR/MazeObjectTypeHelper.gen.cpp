// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeObjectTypeHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeObjectTypeHelper() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UMazeObjectTypeHelper_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeObjectTypeHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UEnum* Z_Construct_UEnum_RodentVR_MazeObjectType();
// End Cross Module References
	DEFINE_FUNCTION(UMazeObjectTypeHelper::execStringToObjectType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(MazeObjectType*)Z_Param__Result=UMazeObjectTypeHelper::StringToObjectType(Z_Param_TypeString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeObjectTypeHelper::execObjectTypeToString)
	{
		P_GET_ENUM(MazeObjectType,Z_Param_ObjectType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMazeObjectTypeHelper::ObjectTypeToString(MazeObjectType(Z_Param_ObjectType));
		P_NATIVE_END;
	}
	void UMazeObjectTypeHelper::StaticRegisterNativesUMazeObjectTypeHelper()
	{
		UClass* Class = UMazeObjectTypeHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ObjectTypeToString", &UMazeObjectTypeHelper::execObjectTypeToString },
			{ "StringToObjectType", &UMazeObjectTypeHelper::execStringToObjectType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics
	{
		struct MazeObjectTypeHelper_eventObjectTypeToString_Parms
		{
			MazeObjectType ObjectType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectTypeHelper_eventObjectTypeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectTypeHelper_eventObjectTypeToString_Parms, ObjectType), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::NewProp_ObjectType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObjectTypeHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectTypeHelper, nullptr, "ObjectTypeToString", nullptr, nullptr, sizeof(MazeObjectTypeHelper_eventObjectTypeToString_Parms), Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics
	{
		struct MazeObjectTypeHelper_eventStringToObjectType_Parms
		{
			FString TypeString;
			MazeObjectType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TypeString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectTypeHelper_eventStringToObjectType_Parms, ReturnValue), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::NewProp_TypeString = { "TypeString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectTypeHelper_eventStringToObjectType_Parms, TypeString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::NewProp_TypeString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObjectTypeHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectTypeHelper, nullptr, "StringToObjectType", nullptr, nullptr, sizeof(MazeObjectTypeHelper_eventStringToObjectType_Parms), Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeObjectTypeHelper_NoRegister()
	{
		return UMazeObjectTypeHelper::StaticClass();
	}
	struct Z_Construct_UClass_UMazeObjectTypeHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeObjectTypeHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeObjectTypeHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeObjectTypeHelper_ObjectTypeToString, "ObjectTypeToString" }, // 3963920001
		{ &Z_Construct_UFunction_UMazeObjectTypeHelper_StringToObjectType, "StringToObjectType" }, // 770033185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeObjectTypeHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/MazeObjectTypeHelper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectTypeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeObjectTypeHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeObjectTypeHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeObjectTypeHelper_Statics::ClassParams = {
		&UMazeObjectTypeHelper::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeObjectTypeHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeObjectTypeHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeObjectTypeHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeObjectTypeHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeObjectTypeHelper, 2159443850);
	template<> RODENTVR_API UClass* StaticClass<UMazeObjectTypeHelper>()
	{
		return UMazeObjectTypeHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeObjectTypeHelper(Z_Construct_UClass_UMazeObjectTypeHelper, &UMazeObjectTypeHelper::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeObjectTypeHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeObjectTypeHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
