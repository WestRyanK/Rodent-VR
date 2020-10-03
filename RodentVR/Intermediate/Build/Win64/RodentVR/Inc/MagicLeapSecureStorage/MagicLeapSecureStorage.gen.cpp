// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapSecureStorage/Public/MagicLeapSecureStorage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapSecureStorage() {}
// Cross Module References
	MAGICLEAPSECURESTORAGE_API UClass* Z_Construct_UClass_UMagicLeapSecureStorage_NoRegister();
	MAGICLEAPSECURESTORAGE_API UClass* Z_Construct_UClass_UMagicLeapSecureStorage();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapSecureStorage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execDeleteSecureData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::DeleteSecureData(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureSaveGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_OBJECT_REF(USaveGame,Z_Param_Out_ObjectToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureSaveGame(Z_Param_Key,Z_Param_Out_ObjectToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureSaveGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_OBJECT(USaveGame,Z_Param_ObjectToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureSaveGame(Z_Param_Key,Z_Param_ObjectToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureTransform)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureTransform(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureRotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureRotator(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureVector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureVector(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureString(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureFloat(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureInt64(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureInt(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureByte(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execGetSecureBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_DataToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::GetSecureBool(Z_Param_Key,Z_Param_Out_DataToRetrieve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureTransform)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureTransform(Z_Param_Key,Z_Param_Out_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureRotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureRotator(Z_Param_Key,Z_Param_Out_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureVector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureVector(Z_Param_Key,Z_Param_Out_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureString(Z_Param_Key,Z_Param_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureFloat(Z_Param_Key,Z_Param_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FInt64Property,Z_Param_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureInt64(Z_Param_Key,Z_Param_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureInt(Z_Param_Key,Z_Param_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureByte(Z_Param_Key,Z_Param_DataToStore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapSecureStorage::execPutSecureBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_DataToStore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapSecureStorage::PutSecureBool(Z_Param_Key,Z_Param_DataToStore);
		P_NATIVE_END;
	}
	void UMagicLeapSecureStorage::StaticRegisterNativesUMagicLeapSecureStorage()
	{
		UClass* Class = UMagicLeapSecureStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteSecureData", &UMagicLeapSecureStorage::execDeleteSecureData },
			{ "GetSecureArray", &UMagicLeapSecureStorage::execGetSecureArray },
			{ "GetSecureBool", &UMagicLeapSecureStorage::execGetSecureBool },
			{ "GetSecureByte", &UMagicLeapSecureStorage::execGetSecureByte },
			{ "GetSecureFloat", &UMagicLeapSecureStorage::execGetSecureFloat },
			{ "GetSecureInt", &UMagicLeapSecureStorage::execGetSecureInt },
			{ "GetSecureInt64", &UMagicLeapSecureStorage::execGetSecureInt64 },
			{ "GetSecureRotator", &UMagicLeapSecureStorage::execGetSecureRotator },
			{ "GetSecureSaveGame", &UMagicLeapSecureStorage::execGetSecureSaveGame },
			{ "GetSecureString", &UMagicLeapSecureStorage::execGetSecureString },
			{ "GetSecureTransform", &UMagicLeapSecureStorage::execGetSecureTransform },
			{ "GetSecureVector", &UMagicLeapSecureStorage::execGetSecureVector },
			{ "PutSecureArray", &UMagicLeapSecureStorage::execPutSecureArray },
			{ "PutSecureBool", &UMagicLeapSecureStorage::execPutSecureBool },
			{ "PutSecureByte", &UMagicLeapSecureStorage::execPutSecureByte },
			{ "PutSecureFloat", &UMagicLeapSecureStorage::execPutSecureFloat },
			{ "PutSecureInt", &UMagicLeapSecureStorage::execPutSecureInt },
			{ "PutSecureInt64", &UMagicLeapSecureStorage::execPutSecureInt64 },
			{ "PutSecureRotator", &UMagicLeapSecureStorage::execPutSecureRotator },
			{ "PutSecureSaveGame", &UMagicLeapSecureStorage::execPutSecureSaveGame },
			{ "PutSecureString", &UMagicLeapSecureStorage::execPutSecureString },
			{ "PutSecureTransform", &UMagicLeapSecureStorage::execPutSecureTransform },
			{ "PutSecureVector", &UMagicLeapSecureStorage::execPutSecureVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics
	{
		struct MagicLeapSecureStorage_eventDeleteSecureData_Parms
		{
			FString Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventDeleteSecureData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventDeleteSecureData_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventDeleteSecureData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Deletes the data associated with the specified key.\n\x09  @param   Key The string key of the data to delete.\n\x09  @return  True if the data was deleted successfully or did not exist altogether, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Deletes the data associated with the specified key.\n@param   Key The string key of the data to delete.\n@return  True if the data was deleted successfully or did not exist altogether, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "DeleteSecureData", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventDeleteSecureData_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureArray_Parms
		{
			FString Key;
			TArray<int32> DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataToRetrieve;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataToRetrieve_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureArray_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureArray_Parms, DataToRetrieve), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_DataToRetrieve_Inner = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_DataToRetrieve_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "DataToRetrieve" },
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves an array associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to an array that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves an array associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to an array that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureArray", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureArray_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureBool_Parms
		{
			FString Key;
			bool DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_DataToRetrieve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureBool_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_DataToRetrieve_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureBool_Parms*)Obj)->DataToRetrieve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureBool_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_DataToRetrieve_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the boolean associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the boolean associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureBool", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureBool_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureByte_Parms
		{
			FString Key;
			uint8 DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureByte_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureByte_Parms, DataToRetrieve), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureByte_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the byte (uint8) associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the byte (uint8) associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureByte", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureByte_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureFloat_Parms
		{
			FString Key;
			float DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureFloat_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureFloat_Parms, DataToRetrieve), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the float associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the float associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureFloat", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureFloat_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureInt_Parms
		{
			FString Key;
			int32 DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureInt_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureInt_Parms, DataToRetrieve), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureInt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the integer (int32) associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the integer (int32) associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureInt", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureInt_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureInt64_Parms
		{
			FString Key;
			int64 DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureInt64_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureInt64_Parms, DataToRetrieve), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureInt64_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the 64 bit integer associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the 64 bit integer associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureInt64", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureInt64_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureRotator_Parms
		{
			FString Key;
			FRotator DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureRotator_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureRotator_Parms, DataToRetrieve), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureRotator_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the rotator associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by `GetSecureArray`" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the rotator associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureRotator", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureRotator_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureSaveGame_Parms
		{
			FString Key;
			USaveGame* ObjectToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureSaveGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureSaveGame_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_ObjectToRetrieve = { "ObjectToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureSaveGame_Parms, ObjectToRetrieve), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureSaveGame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_ObjectToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves a USaveGame object associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   ObjectToRetrieve Reference to a USaveGame object that will be populated with the serialized data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves a USaveGame object associated with the specified key.\n@param   Key The string key to look for.\n@param   ObjectToRetrieve Reference to a USaveGame object that will be populated with the serialized data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureSaveGame", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureSaveGame_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureString_Parms
		{
			FString Key;
			FString DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureString_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureString_Parms, DataToRetrieve), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the string associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the string associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureString", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureString_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureTransform_Parms
		{
			FString Key;
			FTransform DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureTransform_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureTransform_Parms, DataToRetrieve), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureTransform_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the transform associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by `GetSecureArray`" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the transform associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureTransform", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureTransform_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics
	{
		struct MagicLeapSecureStorage_eventGetSecureVector_Parms
		{
			FString Key;
			FVector DataToRetrieve;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataToRetrieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventGetSecureVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventGetSecureVector_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_DataToRetrieve = { "DataToRetrieve", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureVector_Parms, DataToRetrieve), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventGetSecureVector_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_DataToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Retrieves the vector associated with the specified key.\n\x09  @param   Key The string key to look for.\n\x09  @param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n\x09  @return  True if the key was found and output parameter was successfully populated with the data, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by `GetSecureArray`" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Retrieves the vector associated with the specified key.\n@param   Key The string key to look for.\n@param   DataToRetrieve Reference to the variable that will be populated with the stored data.\n@return  True if the key was found and output parameter was successfully populated with the data, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "GetSecureVector", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventGetSecureVector_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureArray_Parms
		{
			FString Key;
			TArray<int32> DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataToStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataToStore;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataToStore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureArray_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_DataToStore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureArray_Parms, DataToStore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_DataToStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_DataToStore_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_DataToStore_Inner = { "DataToStore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_DataToStore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::Function_MetaDataParams[] = {
		{ "ArrayParm", "DataToStore" },
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the data under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the data under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureArray", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureArray_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureBool_Parms
		{
			FString Key;
			bool DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_DataToStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureBool_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_DataToStore_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureBool_Parms*)Obj)->DataToStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureBool_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_DataToStore_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the boolean under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the boolean under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureBool", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureBool_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureByte_Parms
		{
			FString Key;
			uint8 DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureByte_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureByte_Parms, DataToStore), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureByte_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the byte (uint8) under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the byte (uint8) under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureByte", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureByte_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureFloat_Parms
		{
			FString Key;
			float DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureFloat_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureFloat_Parms, DataToStore), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the float under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the float under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureFloat", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureFloat_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureInt_Parms
		{
			FString Key;
			int32 DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureInt_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureInt_Parms, DataToStore), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureInt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the integer (int32) under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the integer (int32) under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureInt", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureInt_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureInt64_Parms
		{
			FString Key;
			int64 DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureInt64_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureInt64_Parms, DataToStore), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureInt64_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the 64 bit integer under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the 64 bit integer under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureInt64", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureInt64_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureRotator_Parms
		{
			FString Key;
			FRotator DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataToStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureRotator_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_DataToStore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureRotator_Parms, DataToStore), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_DataToStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_DataToStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureRotator_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the rotator under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by `PutSecureArray`" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the rotator under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureRotator", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureRotator_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureSaveGame_Parms
		{
			FString Key;
			USaveGame* ObjectToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureSaveGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureSaveGame_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_ObjectToStore = { "ObjectToStore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureSaveGame_Parms, ObjectToStore), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureSaveGame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_ObjectToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the USaveGame object under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   ObjectToStore The USaveGame object to serialize and store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the USaveGame object under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   ObjectToStore The USaveGame object to serialize and store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureSaveGame", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureSaveGame_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureString_Parms
		{
			FString Key;
			FString DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataToStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureString_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_DataToStore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureString_Parms, DataToStore), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_DataToStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_DataToStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the string under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the string under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureString", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureString_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureTransform_Parms
		{
			FString Key;
			FTransform DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataToStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureTransform_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_DataToStore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureTransform_Parms, DataToStore), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_DataToStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_DataToStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureTransform_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the transform under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by `PutSecureArray`" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the transform under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureTransform", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureTransform_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics
	{
		struct MagicLeapSecureStorage_eventPutSecureVector_Parms
		{
			FString Key;
			FVector DataToStore;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataToStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSecureStorage_eventPutSecureVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSecureStorage_eventPutSecureVector_Parms), &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_DataToStore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_DataToStore = { "DataToStore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureVector_Parms, DataToStore), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_DataToStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_DataToStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSecureStorage_eventPutSecureVector_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_DataToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "SecureStorage|MagicLeap" },
		{ "Comment", "/**\n\x09  Stores the vector under the specified key. An existing key would be overwritten.\n\x09  @param   Key String key associated with the data.\n\x09  @param   DataToStore The data to store.\n\x09  @return  True if the data was stored successfully, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by `PutSecureArray`" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Stores the vector under the specified key. An existing key would be overwritten.\n@param   Key String key associated with the data.\n@param   DataToStore The data to store.\n@return  True if the data was stored successfully, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapSecureStorage, nullptr, "PutSecureVector", nullptr, nullptr, sizeof(MagicLeapSecureStorage_eventPutSecureVector_Parms), Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapSecureStorage_NoRegister()
	{
		return UMagicLeapSecureStorage::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapSecureStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapSecureStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSecureStorage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapSecureStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_DeleteSecureData, "DeleteSecureData" }, // 3990531172
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureArray, "GetSecureArray" }, // 185966778
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureBool, "GetSecureBool" }, // 3017172442
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureByte, "GetSecureByte" }, // 3125537945
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureFloat, "GetSecureFloat" }, // 210117815
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt, "GetSecureInt" }, // 3671883255
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureInt64, "GetSecureInt64" }, // 1473643566
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureRotator, "GetSecureRotator" }, // 1864274580
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureSaveGame, "GetSecureSaveGame" }, // 604790214
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureString, "GetSecureString" }, // 1610111551
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureTransform, "GetSecureTransform" }, // 2753246894
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_GetSecureVector, "GetSecureVector" }, // 3613418795
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureArray, "PutSecureArray" }, // 1548701305
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureBool, "PutSecureBool" }, // 2524874008
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureByte, "PutSecureByte" }, // 1311983188
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureFloat, "PutSecureFloat" }, // 9306451
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt, "PutSecureInt" }, // 2952292849
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureInt64, "PutSecureInt64" }, // 3177172055
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureRotator, "PutSecureRotator" }, // 650692804
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureSaveGame, "PutSecureSaveGame" }, // 1170059345
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureString, "PutSecureString" }, // 3809430594
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureTransform, "PutSecureTransform" }, // 1720835595
		{ &Z_Construct_UFunction_UMagicLeapSecureStorage_PutSecureVector, "PutSecureVector" }, // 4126312557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapSecureStorage_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\n  Function library for the Magic Leap Secure Storage API.\n  Currently supports bool, uint8, int32, float, FString, FVector, FRotator and FTransform via Blueprints.\n  Provides a template function for any non specialized types to be used via C++.\n*/" },
		{ "IncludePath", "MagicLeapSecureStorage.h" },
		{ "ModuleRelativePath", "Public/MagicLeapSecureStorage.h" },
		{ "ToolTip", "Function library for the Magic Leap Secure Storage API.\nCurrently supports bool, uint8, int32, float, FString, FVector, FRotator and FTransform via Blueprints.\nProvides a template function for any non specialized types to be used via C++." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapSecureStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapSecureStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapSecureStorage_Statics::ClassParams = {
		&UMagicLeapSecureStorage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapSecureStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSecureStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapSecureStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapSecureStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapSecureStorage, 1543912383);
	template<> MAGICLEAPSECURESTORAGE_API UClass* StaticClass<UMagicLeapSecureStorage>()
	{
		return UMagicLeapSecureStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapSecureStorage(Z_Construct_UClass_UMagicLeapSecureStorage, &UMagicLeapSecureStorage::StaticClass, TEXT("/Script/MagicLeapSecureStorage"), TEXT("UMagicLeapSecureStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapSecureStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
