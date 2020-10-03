// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapSharedWorld/Public/MagicLeapSharedWorldPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapSharedWorldPlayerController() {}
// Cross Module References
	MAGICLEAPSHAREDWORLD_API UClass* Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_NoRegister();
	MAGICLEAPSHAREDWORLD_API UClass* Z_Construct_UClass_AMagicLeapSharedWorldPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MagicLeapSharedWorld();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData();
// End Cross Module References
	DEFINE_FUNCTION(AMagicLeapSharedWorldPlayerController::execServerSetAlignmentTransforms)
	{
		P_GET_STRUCT(FMagicLeapSharedWorldAlignmentTransforms,Z_Param_InAlignmentTransforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAlignmentTransforms_Implementation(Z_Param_InAlignmentTransforms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldPlayerController::execCanSendLocalDataToServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSendLocalDataToServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldPlayerController::execIsChosenOne)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChosenOne();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldPlayerController::execClientSetChosenOne)
	{
		P_GET_UBOOL(Z_Param_bChosenOne);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetChosenOne_Implementation(Z_Param_bChosenOne);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldPlayerController::execClientMarkReadyForSendingLocalData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientMarkReadyForSendingLocalData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldPlayerController::execServerSetLocalWorldData)
	{
		P_GET_STRUCT(FMagicLeapSharedWorldLocalData,Z_Param_LocalWorldReplicationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetLocalWorldData_Implementation(Z_Param_LocalWorldReplicationData);
		P_NATIVE_END;
	}
	static FName NAME_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData = FName(TEXT("ClientMarkReadyForSendingLocalData"));
	void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData),NULL);
	}
	static FName NAME_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne = FName(TEXT("ClientSetChosenOne"));
	void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
	{
		MagicLeapSharedWorldPlayerController_eventClientSetChosenOne_Parms Parms;
		Parms.bChosenOne=bChosenOne ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne),&Parms);
	}
	static FName NAME_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms = FName(TEXT("ServerSetAlignmentTransforms"));
	void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms const& InAlignmentTransforms)
	{
		MagicLeapSharedWorldPlayerController_eventServerSetAlignmentTransforms_Parms Parms;
		Parms.InAlignmentTransforms=InAlignmentTransforms;
		ProcessEvent(FindFunctionChecked(NAME_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms),&Parms);
	}
	static FName NAME_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData = FName(TEXT("ServerSetLocalWorldData"));
	void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData const& LocalWorldReplicationData)
	{
		MagicLeapSharedWorldPlayerController_eventServerSetLocalWorldData_Parms Parms;
		Parms.LocalWorldReplicationData=LocalWorldReplicationData;
		ProcessEvent(FindFunctionChecked(NAME_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData),&Parms);
	}
	void AMagicLeapSharedWorldPlayerController::StaticRegisterNativesAMagicLeapSharedWorldPlayerController()
	{
		UClass* Class = AMagicLeapSharedWorldPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSendLocalDataToServer", &AMagicLeapSharedWorldPlayerController::execCanSendLocalDataToServer },
			{ "ClientMarkReadyForSendingLocalData", &AMagicLeapSharedWorldPlayerController::execClientMarkReadyForSendingLocalData },
			{ "ClientSetChosenOne", &AMagicLeapSharedWorldPlayerController::execClientSetChosenOne },
			{ "IsChosenOne", &AMagicLeapSharedWorldPlayerController::execIsChosenOne },
			{ "ServerSetAlignmentTransforms", &AMagicLeapSharedWorldPlayerController::execServerSetAlignmentTransforms },
			{ "ServerSetLocalWorldData", &AMagicLeapSharedWorldPlayerController::execServerSetLocalWorldData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics
	{
		struct MagicLeapSharedWorldPlayerController_eventCanSendLocalDataToServer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSharedWorldPlayerController_eventCanSendLocalDataToServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSharedWorldPlayerController_eventCanSendLocalDataToServer_Parms), &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/** \n\x09 * Getter to check if the current client can start sending local pins to the server\n\x09 * @return true if it is now safe to send local data to server, false otherwise\n\x09 * @see ServerSetLocalWorldData()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldPlayerController.h" },
		{ "ToolTip", "Getter to check if the current client can start sending local pins to the server\n@return true if it is now safe to send local data to server, false otherwise\n@see ServerSetLocalWorldData()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldPlayerController, nullptr, "CanSendLocalDataToServer", nullptr, nullptr, sizeof(MagicLeapSharedWorldPlayerController_eventCanSendLocalDataToServer_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Marks the client ready to start sending local data to the server.\n\x09 * Currently this function or the ::CanSendLocalDataToServer() function is not that relevant to the implementation.\n\x09 * The data will reach the server even if ::ServerSetLocalWorldData() is called before this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldPlayerController.h" },
		{ "ToolTip", "Marks the client ready to start sending local data to the server.\nCurrently this function or the ::CanSendLocalDataToServer() function is not that relevant to the implementation.\nThe data will reach the server even if ::ServerSetLocalWorldData() is called before this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldPlayerController, nullptr, "ClientMarkReadyForSendingLocalData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics
	{
		static void NewProp_bChosenOne_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChosenOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::NewProp_bChosenOne_SetBit(void* Obj)
	{
		((MagicLeapSharedWorldPlayerController_eventClientSetChosenOne_Parms*)Obj)->bChosenOne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::NewProp_bChosenOne = { "bChosenOne", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSharedWorldPlayerController_eventClientSetChosenOne_Parms), &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::NewProp_bChosenOne_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::NewProp_bChosenOne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Marks the client as the \"chosen-one\" or pseudo-authoritative for this shared world session.\n\x09 * \n\x09 * Means that this client is responsible for sending the list of it's pin transforms (in world space so its own alignment is unaffected)\n\x09 * to the server via ServerSetAlignmentTransforms(). Everyone will align to this client's coordinate space\n\x09 * using those pin transforms. The game mode or the player controller doesnt directly use this property. It is just a helper\n\x09 * data point to determine which client should send the alignment transforms. Apps can choose to implement their own ways\n\x09 * to select which client should should everyone align with.\n\x09 * @see ServerSetAlignmentTransforms\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldPlayerController.h" },
		{ "ToolTip", "Marks the client as the \"chosen-one\" or pseudo-authoritative for this shared world session.\n\nMeans that this client is responsible for sending the list of it's pin transforms (in world space so its own alignment is unaffected)\nto the server via ServerSetAlignmentTransforms(). Everyone will align to this client's coordinate space\nusing those pin transforms. The game mode or the player controller doesnt directly use this property. It is just a helper\ndata point to determine which client should send the alignment transforms. Apps can choose to implement their own ways\nto select which client should should everyone align with.\n@see ServerSetAlignmentTransforms" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldPlayerController, nullptr, "ClientSetChosenOne", nullptr, nullptr, sizeof(MagicLeapSharedWorldPlayerController_eventClientSetChosenOne_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics
	{
		struct MagicLeapSharedWorldPlayerController_eventIsChosenOne_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSharedWorldPlayerController_eventIsChosenOne_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSharedWorldPlayerController_eventIsChosenOne_Parms), &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/** \n\x09 * Getter to check if the current client is the chosen one\n\x09 * @return true if this client is the chosen one, false otherwise\n\x09 * @see ClientSetChosenOne()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldPlayerController.h" },
		{ "ToolTip", "Getter to check if the current client is the chosen one\n@return true if this client is the chosen one, false otherwise\n@see ClientSetChosenOne()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldPlayerController, nullptr, "IsChosenOne", nullptr, nullptr, sizeof(MagicLeapSharedWorldPlayerController_eventIsChosenOne_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAlignmentTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAlignmentTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::NewProp_InAlignmentTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::NewProp_InAlignmentTransforms = { "InAlignmentTransforms", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSharedWorldPlayerController_eventServerSetAlignmentTransforms_Parms, InAlignmentTransforms), Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::NewProp_InAlignmentTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::NewProp_InAlignmentTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::NewProp_InAlignmentTransforms,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Sets list of transforms to be used by all clients to align coordinate spaces.\n\x09 * \n\x09 * This list is redirected to AMagicLeapSharedWorldGameState which performs the replication.\n\x09 * Bind an event to AMagicLeapSharedWorldGameState::OnAlignmentTransformsUpdated to get a\n\x09 * notification when new alignment transforms are available.\n\x09 * If performing shared world alignment on-the-fly (i.e. without any prior setup like in a museum app),\n\x09 * these transforms should be sent by a single selected client. Apps can make use of the \"chosen one\"\n\x09 * client for this purpose. Override AMagicLeapSharedWorldGameMode::SelectChosenOne() to select which\n\x09 * of the connected clients should send the alignment transforms. By default the first connected client\n\x09 * is considered the \"chosen one\".\n\x09 * \n\x09 * @see AMagicLeapSharedWorldGameMode::SelectChosenOne()\n\x09 * @see AMagicLeapSharedWorldGameState::OnAlignmentTransformsUpdated\n\x09 * @see AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldPlayerController.h" },
		{ "ToolTip", "Sets list of transforms to be used by all clients to align coordinate spaces.\n\nThis list is redirected to AMagicLeapSharedWorldGameState which performs the replication.\nBind an event to AMagicLeapSharedWorldGameState::OnAlignmentTransformsUpdated to get a\nnotification when new alignment transforms are available.\nIf performing shared world alignment on-the-fly (i.e. without any prior setup like in a museum app),\nthese transforms should be sent by a single selected client. Apps can make use of the \"chosen one\"\nclient for this purpose. Override AMagicLeapSharedWorldGameMode::SelectChosenOne() to select which\nof the connected clients should send the alignment transforms. By default the first connected client\nis considered the \"chosen one\".\n\n@see AMagicLeapSharedWorldGameMode::SelectChosenOne()\n@see AMagicLeapSharedWorldGameState::OnAlignmentTransformsUpdated\n@see AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldPlayerController, nullptr, "ServerSetAlignmentTransforms", nullptr, nullptr, sizeof(MagicLeapSharedWorldPlayerController_eventServerSetAlignmentTransforms_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalWorldReplicationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalWorldReplicationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::NewProp_LocalWorldReplicationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::NewProp_LocalWorldReplicationData = { "LocalWorldReplicationData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSharedWorldPlayerController_eventServerSetLocalWorldData_Parms, LocalWorldReplicationData), Z_Construct_UScriptStruct_FMagicLeapSharedWorldLocalData, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::NewProp_LocalWorldReplicationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::NewProp_LocalWorldReplicationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::NewProp_LocalWorldReplicationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Updates list of pins local to a client on the server.\n\x09 * \n\x09 * This makes the list of local pins available to AMagicLeapSharedWorldGameMode to determine\n\x09 * which ones to share across all clients and use for global coordinate space alignment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldPlayerController.h" },
		{ "ToolTip", "Updates list of pins local to a client on the server.\n\nThis makes the list of local pins available to AMagicLeapSharedWorldGameMode to determine\nwhich ones to share across all clients and use for global coordinate space alignment." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldPlayerController, nullptr, "ServerSetLocalWorldData", nullptr, nullptr, sizeof(MagicLeapSharedWorldPlayerController_eventServerSetLocalWorldData_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_NoRegister()
	{
		return AMagicLeapSharedWorldPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSharedWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer, "CanSendLocalDataToServer" }, // 2441959503
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData, "ClientMarkReadyForSendingLocalData" }, // 2543797211
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ClientSetChosenOne, "ClientSetChosenOne" }, // 4195858980
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_IsChosenOne, "IsChosenOne" }, // 37170204
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms, "ServerSetAlignmentTransforms" }, // 94196576
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData, "ServerSetLocalWorldData" }, // 524619421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MagicLeapSharedWorldPlayerController.h" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicLeapSharedWorldPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::ClassParams = {
		&AMagicLeapSharedWorldPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicLeapSharedWorldPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicLeapSharedWorldPlayerController, 1353647085);
	template<> MAGICLEAPSHAREDWORLD_API UClass* StaticClass<AMagicLeapSharedWorldPlayerController>()
	{
		return AMagicLeapSharedWorldPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicLeapSharedWorldPlayerController(Z_Construct_UClass_AMagicLeapSharedWorldPlayerController, &AMagicLeapSharedWorldPlayerController::StaticClass, TEXT("/Script/MagicLeapSharedWorld"), TEXT("AMagicLeapSharedWorldPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicLeapSharedWorldPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
