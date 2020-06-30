// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Simulator/AssetLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetLoader() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UAssetLoader_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UAssetLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UEnum* Z_Construct_UEnum_RodentVR_TextureEnum();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UTextureSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAssetLoader::execGetBuiltInTextures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TextureEnum>*)Z_Param__Result=UAssetLoader::GetBuiltInTextures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetLoader::execLoadTextureFromSettings)
	{
		P_GET_OBJECT(UTextureSettings,Z_Param_TextureSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UAssetLoader::LoadTextureFromSettings(Z_Param_TextureSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetLoader::execLoadTexture)
	{
		P_GET_ENUM(TextureEnum,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UAssetLoader::LoadTexture(TextureEnum(Z_Param_Texture));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetLoader::execLoadTextureFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UAssetLoader::LoadTextureFromFile(Z_Param_FileName,Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetLoader::execLoadMaterialFromTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_OBJECT(UObject,Z_Param_OuterObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=UAssetLoader::LoadMaterialFromTexture(Z_Param_Texture,Z_Param_OuterObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetLoader::execLoadMaterial)
	{
		P_GET_OBJECT(UTextureSettings,Z_Param_TextureSettings);
		P_GET_OBJECT(UObject,Z_Param_OuterObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=UAssetLoader::LoadMaterial(Z_Param_TextureSettings,Z_Param_OuterObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetLoader::execLoadTextureToTexturePathMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetLoader::LoadTextureToTexturePathMap();
		P_NATIVE_END;
	}
	void UAssetLoader::StaticRegisterNativesUAssetLoader()
	{
		UClass* Class = UAssetLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuiltInTextures", &UAssetLoader::execGetBuiltInTextures },
			{ "LoadMaterial", &UAssetLoader::execLoadMaterial },
			{ "LoadMaterialFromTexture", &UAssetLoader::execLoadMaterialFromTexture },
			{ "LoadTexture", &UAssetLoader::execLoadTexture },
			{ "LoadTextureFromFile", &UAssetLoader::execLoadTextureFromFile },
			{ "LoadTextureFromSettings", &UAssetLoader::execLoadTextureFromSettings },
			{ "LoadTextureToTexturePathMap", &UAssetLoader::execLoadTextureToTexturePathMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics
	{
		struct AssetLoader_eventGetBuiltInTextures_Parms
		{
			TArray<TextureEnum> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventGetBuiltInTextures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_RodentVR_TextureEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::NewProp_ReturnValue_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetLoader, nullptr, "GetBuiltInTextures", nullptr, nullptr, sizeof(AssetLoader_eventGetBuiltInTextures_Parms), Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics
	{
		struct AssetLoader_eventLoadMaterial_Parms
		{
			UTextureSettings* TextureSettings;
			UObject* OuterObject;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OuterObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::NewProp_OuterObject = { "OuterObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadMaterial_Parms, OuterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::NewProp_TextureSettings = { "TextureSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadMaterial_Parms, TextureSettings), Z_Construct_UClass_UTextureSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::NewProp_OuterObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::NewProp_TextureSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetLoader, nullptr, "LoadMaterial", nullptr, nullptr, sizeof(AssetLoader_eventLoadMaterial_Parms), Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetLoader_LoadMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetLoader_LoadMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics
	{
		struct AssetLoader_eventLoadMaterialFromTexture_Parms
		{
			UTexture2D* Texture;
			UObject* OuterObject;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OuterObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadMaterialFromTexture_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::NewProp_OuterObject = { "OuterObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadMaterialFromTexture_Parms, OuterObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadMaterialFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::NewProp_OuterObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetLoader, nullptr, "LoadMaterialFromTexture", nullptr, nullptr, sizeof(AssetLoader_eventLoadMaterialFromTexture_Parms), Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics
	{
		struct AssetLoader_eventLoadTexture_Parms
		{
			TextureEnum Texture;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Texture_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTexture_Parms, Texture), Z_Construct_UEnum_RodentVR_TextureEnum, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_Texture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::NewProp_Texture_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetLoader, nullptr, "LoadTexture", nullptr, nullptr, sizeof(AssetLoader_eventLoadTexture_Parms), Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetLoader_LoadTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetLoader_LoadTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics
	{
		struct AssetLoader_eventLoadTextureFromFile_Parms
		{
			FString FileName;
			bool IsValid;
			int32 Width;
			int32 Height;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTextureFromFile_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTextureFromFile_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((AssetLoader_eventLoadTextureFromFile_Parms*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AssetLoader_eventLoadTextureFromFile_Parms), &Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTextureFromFile_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetLoader, nullptr, "LoadTextureFromFile", nullptr, nullptr, sizeof(AssetLoader_eventLoadTextureFromFile_Parms), Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics
	{
		struct AssetLoader_eventLoadTextureFromSettings_Parms
		{
			UTextureSettings* TextureSettings;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTextureFromSettings_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::NewProp_TextureSettings = { "TextureSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetLoader_eventLoadTextureFromSettings_Parms, TextureSettings), Z_Construct_UClass_UTextureSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::NewProp_TextureSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetLoader, nullptr, "LoadTextureFromSettings", nullptr, nullptr, sizeof(AssetLoader_eventLoadTextureFromSettings_Parms), Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetLoader, nullptr, "LoadTextureToTexturePathMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetLoader_NoRegister()
	{
		return UAssetLoader::StaticClass();
	}
	struct Z_Construct_UClass_UAssetLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetLoader_GetBuiltInTextures, "GetBuiltInTextures" }, // 3629626085
		{ &Z_Construct_UFunction_UAssetLoader_LoadMaterial, "LoadMaterial" }, // 1368287979
		{ &Z_Construct_UFunction_UAssetLoader_LoadMaterialFromTexture, "LoadMaterialFromTexture" }, // 1833011309
		{ &Z_Construct_UFunction_UAssetLoader_LoadTexture, "LoadTexture" }, // 3242739526
		{ &Z_Construct_UFunction_UAssetLoader_LoadTextureFromFile, "LoadTextureFromFile" }, // 3516000810
		{ &Z_Construct_UFunction_UAssetLoader_LoadTextureFromSettings, "LoadTextureFromSettings" }, // 1598328259
		{ &Z_Construct_UFunction_UAssetLoader_LoadTextureToTexturePathMap, "LoadTextureToTexturePathMap" }, // 1408552974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Simulator/AssetLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Simulator/AssetLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetLoader_Statics::ClassParams = {
		&UAssetLoader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetLoader, 692218278);
	template<> RODENTVR_API UClass* StaticClass<UAssetLoader>()
	{
		return UAssetLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetLoader(Z_Construct_UClass_UAssetLoader, &UAssetLoader::StaticClass, TEXT("/Script/RodentVR"), TEXT("UAssetLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
