// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/BehaviorRecordingReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorRecordingReader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorRecordingReader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorRecordingReader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorSnapshot_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBehaviorRecordingReader::execLoadBehaviorRecordingFromFile)
	{
		P_GET_OBJECT(UObject,Z_Param_OuterObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_BehaviorRecordingFileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SettingsFileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MazeFileName);
		P_GET_TARRAY_REF(UBehaviorSnapshot*,Z_Param_Out_BehaviorSnapshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBehaviorRecordingReader::LoadBehaviorRecordingFromFile(Z_Param_OuterObject,Z_Param_BehaviorRecordingFileName,Z_Param_Out_SettingsFileName,Z_Param_Out_MazeFileName,Z_Param_Out_BehaviorSnapshots);
		P_NATIVE_END;
	}
	void UBehaviorRecordingReader::StaticRegisterNativesUBehaviorRecordingReader()
	{
		UClass* Class = UBehaviorRecordingReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadBehaviorRecordingFromFile", &UBehaviorRecordingReader::execLoadBehaviorRecordingFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics
	{
		struct BehaviorRecordingReader_eventLoadBehaviorRecordingFromFile_Parms
		{
			UObject* OuterObject;
			FString BehaviorRecordingFileName;
			FString SettingsFileName;
			FString MazeFileName;
			TArray<UBehaviorSnapshot*> BehaviorSnapshots;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BehaviorSnapshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorSnapshots_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingsFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BehaviorRecordingFileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OuterObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_BehaviorSnapshots = { "BehaviorSnapshots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecordingReader_eventLoadBehaviorRecordingFromFile_Parms, BehaviorSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_BehaviorSnapshots_Inner = { "BehaviorSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_MazeFileName = { "MazeFileName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecordingReader_eventLoadBehaviorRecordingFromFile_Parms, MazeFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_SettingsFileName = { "SettingsFileName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecordingReader_eventLoadBehaviorRecordingFromFile_Parms, SettingsFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_BehaviorRecordingFileName = { "BehaviorRecordingFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecordingReader_eventLoadBehaviorRecordingFromFile_Parms, BehaviorRecordingFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_OuterObject = { "OuterObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorRecordingReader_eventLoadBehaviorRecordingFromFile_Parms, OuterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_BehaviorSnapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_BehaviorSnapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_MazeFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_SettingsFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_BehaviorRecordingFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::NewProp_OuterObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecordingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorRecordingReader, nullptr, "LoadBehaviorRecordingFromFile", nullptr, nullptr, sizeof(BehaviorRecordingReader_eventLoadBehaviorRecordingFromFile_Parms), Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBehaviorRecordingReader_NoRegister()
	{
		return UBehaviorRecordingReader::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorRecordingReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorRecordingReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBehaviorRecordingReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorRecordingReader_LoadBehaviorRecordingFromFile, "LoadBehaviorRecordingFromFile" }, // 3756392600
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorRecordingReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehaviorRecording/BehaviorRecordingReader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorRecordingReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorRecordingReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorRecordingReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorRecordingReader_Statics::ClassParams = {
		&UBehaviorRecordingReader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorRecordingReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorRecordingReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorRecordingReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorRecordingReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorRecordingReader, 1974946630);
	template<> RODENTVR_API UClass* StaticClass<UBehaviorRecordingReader>()
	{
		return UBehaviorRecordingReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorRecordingReader(Z_Construct_UClass_UBehaviorRecordingReader, &UBehaviorRecordingReader::StaticClass, TEXT("/Script/RodentVR"), TEXT("UBehaviorRecordingReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorRecordingReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
