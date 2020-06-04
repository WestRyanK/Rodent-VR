// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/Maze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_AMaze_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_AMaze();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMaze::execGetMazeTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=AMaze::GetMazeTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execSetTextures)
	{
		P_GET_TMAP(FString,FString,Z_Param_TexturesValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextures(Z_Param_TexturesValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execGetTextures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetTextures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execSetMazeName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MazeNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMazeName(Z_Param_MazeNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execGetMazeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMazeName();
		P_NATIVE_END;
	}
	void AMaze::StaticRegisterNativesAMaze()
	{
		UClass* Class = AMaze::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMazeName", &AMaze::execGetMazeName },
			{ "GetMazeTag", &AMaze::execGetMazeTag },
			{ "GetTextures", &AMaze::execGetTextures },
			{ "SetMazeName", &AMaze::execSetMazeName },
			{ "SetTextures", &AMaze::execSetTextures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaze_GetMazeName_Statics
	{
		struct Maze_eventGetMazeName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_GetMazeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventGetMazeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetMazeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetMazeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetMazeName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetMazeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "GetMazeName", nullptr, nullptr, sizeof(Maze_eventGetMazeName_Parms), Z_Construct_UFunction_AMaze_GetMazeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetMazeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetMazeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetMazeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetMazeTag_Statics
	{
		struct Maze_eventGetMazeTag_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMaze_GetMazeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventGetMazeTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetMazeTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetMazeTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetMazeTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetMazeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "GetMazeTag", nullptr, nullptr, sizeof(Maze_eventGetMazeTag_Parms), Z_Construct_UFunction_AMaze_GetMazeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazeTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetMazeTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetMazeTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetMazeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetMazeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetTextures_Statics
	{
		struct Maze_eventGetTextures_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMaze_GetTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventGetTextures_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_GetTextures_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_GetTextures_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetTextures_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetTextures_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetTextures_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetTextures_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "GetTextures", nullptr, nullptr, sizeof(Maze_eventGetTextures_Parms), Z_Construct_UFunction_AMaze_GetTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_GetTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SetMazeName_Statics
	{
		struct Maze_eventSetMazeName_Parms
		{
			FString MazeNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_SetMazeName_Statics::NewProp_MazeNameValue = { "MazeNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSetMazeName_Parms, MazeNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SetMazeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SetMazeName_Statics::NewProp_MazeNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SetMazeName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SetMazeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "SetMazeName", nullptr, nullptr, sizeof(Maze_eventSetMazeName_Parms), Z_Construct_UFunction_AMaze_SetMazeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetMazeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SetMazeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetMazeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SetMazeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SetMazeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SetTextures_Statics
	{
		struct Maze_eventSetTextures_Parms
		{
			TMap<FString,FString> TexturesValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TexturesValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturesValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturesValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMaze_SetTextures_Statics::NewProp_TexturesValue = { "TexturesValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSetTextures_Parms, TexturesValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_SetTextures_Statics::NewProp_TexturesValue_Key_KeyProp = { "TexturesValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_SetTextures_Statics::NewProp_TexturesValue_ValueProp = { "TexturesValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SetTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SetTextures_Statics::NewProp_TexturesValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SetTextures_Statics::NewProp_TexturesValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SetTextures_Statics::NewProp_TexturesValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SetTextures_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SetTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "SetTextures", nullptr, nullptr, sizeof(Maze_eventSetTextures_Parms), Z_Construct_UFunction_AMaze_SetTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SetTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SetTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SetTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaze_NoRegister()
	{
		return AMaze::StaticClass();
	}
	struct Z_Construct_UClass_AMaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Textures_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Textures_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MazeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaze_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_GetMazeName, "GetMazeName" }, // 2219952338
		{ &Z_Construct_UFunction_AMaze_GetMazeTag, "GetMazeTag" }, // 2137745922
		{ &Z_Construct_UFunction_AMaze_GetTextures, "GetTextures" }, // 4131344711
		{ &Z_Construct_UFunction_AMaze_SetMazeName, "SetMazeName" }, // 488361507
		{ &Z_Construct_UFunction_AMaze_SetTextures, "SetTextures" }, // 348134886
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Simulator/Maze.h" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Textures_MetaData[] = {
		{ "BlueprintGetter", "GetTextures" },
		{ "BlueprintSetter", "SetTextures" },
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Textures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_MazeName_MetaData[] = {
		{ "BlueprintGetter", "GetMazeName" },
		{ "BlueprintSetter", "SetMazeName" },
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Private/Simulator/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazeName = { "MazeName", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, MazeName), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_MazeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_MazeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Textures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Textures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaze_Statics::ClassParams = {
		&AMaze::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMaze_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaze, 102781185);
	template<> RODENTVR_API UClass* StaticClass<AMaze>()
	{
		return AMaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaze(Z_Construct_UClass_AMaze, &AMaze::StaticClass, TEXT("/Script/RodentVR"), TEXT("AMaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
