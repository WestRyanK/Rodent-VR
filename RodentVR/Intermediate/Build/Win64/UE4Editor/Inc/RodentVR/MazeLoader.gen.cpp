// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeLoader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UMazeLoader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeLoader();
	RODENTVR_API UClass* Z_Construct_UClass_UXmlFileReader();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UMazeLoader_LoadMaze();
	RODENTVR_API UClass* Z_Construct_UClass_UStopConditionsChecker_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UMazeLoader::StaticRegisterNativesUMazeLoader()
	{
		UClass* Class = UMazeLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMaze", &UMazeLoader::execLoadMaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics
	{
		struct MazeLoader_eventLoadMaze_Parms
		{
			UObject* WorldContextObject;
			FString MazePath;
			UStopConditionsChecker* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeLoader_eventLoadMaze_Parms, ReturnValue), Z_Construct_UClass_UStopConditionsChecker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::NewProp_MazePath = { "MazePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeLoader_eventLoadMaze_Parms, MazePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeLoader_eventLoadMaze_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::NewProp_MazePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category=\"Loading\", meta = (WorldContext = WorldContextObject))\n" },
		{ "ModuleRelativePath", "Private/Settings/MazeLoader.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category=\"Loading\", meta = (WorldContext = WorldContextObject))" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeLoader, nullptr, "LoadMaze", nullptr, nullptr, sizeof(MazeLoader_eventLoadMaze_Parms), Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeLoader_LoadMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeLoader_LoadMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeLoader_NoRegister()
	{
		return UMazeLoader::StaticClass();
	}
	struct Z_Construct_UClass_UMazeLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXmlFileReader,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeLoader_LoadMaze, "LoadMaze" }, // 383314872
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/MazeLoader.h" },
		{ "ModuleRelativePath", "Private/Settings/MazeLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeLoader_Statics::ClassParams = {
		&UMazeLoader::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeLoader_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMazeLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeLoader, 3424137662);
	template<> RODENTVR_API UClass* StaticClass<UMazeLoader>()
	{
		return UMazeLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeLoader(Z_Construct_UClass_UMazeLoader, &UMazeLoader::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
