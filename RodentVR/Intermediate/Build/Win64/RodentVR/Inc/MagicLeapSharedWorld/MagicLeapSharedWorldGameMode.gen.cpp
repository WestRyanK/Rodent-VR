// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapSharedWorld/Public/MagicLeapSharedWorldGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapSharedWorldGameMode() {}
// Cross Module References
	MAGICLEAPSHAREDWORLD_API UFunction* Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	MAGICLEAPSHAREDWORLD_API UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameMode();
	MAGICLEAPSHAREDWORLD_API UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MagicLeapSharedWorld();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData();
	MAGICLEAPSHAREDWORLD_API UClass* Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameMode, nullptr, "MagicLeapOnNewLocalDataFromClients__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldGameMode::execSendSharedWorldDataToClients)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendSharedWorldDataToClients();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldGameMode::execSelectChosenOne)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectChosenOne_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldGameMode::execDetermineSharedWorldData)
	{
		P_GET_STRUCT_REF(FMagicLeapSharedWorldSharedData,Z_Param_Out_NewSharedWorldData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetermineSharedWorldData_Implementation(Z_Param_Out_NewSharedWorldData);
		P_NATIVE_END;
	}
	static FName NAME_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData = FName(TEXT("DetermineSharedWorldData"));
	void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData)
	{
		MagicLeapSharedWorldGameMode_eventDetermineSharedWorldData_Parms Parms;
		Parms.NewSharedWorldData=NewSharedWorldData;
		ProcessEvent(FindFunctionChecked(NAME_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData),&Parms);
		NewSharedWorldData=Parms.NewSharedWorldData;
	}
	static FName NAME_AMagicLeapSharedWorldGameMode_SelectChosenOne = FName(TEXT("SelectChosenOne"));
	void AMagicLeapSharedWorldGameMode::SelectChosenOne()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMagicLeapSharedWorldGameMode_SelectChosenOne),NULL);
	}
	void AMagicLeapSharedWorldGameMode::StaticRegisterNativesAMagicLeapSharedWorldGameMode()
	{
		UClass* Class = AMagicLeapSharedWorldGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetermineSharedWorldData", &AMagicLeapSharedWorldGameMode::execDetermineSharedWorldData },
			{ "SelectChosenOne", &AMagicLeapSharedWorldGameMode::execSelectChosenOne },
			{ "SendSharedWorldDataToClients", &AMagicLeapSharedWorldGameMode::execSendSharedWorldDataToClients },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSharedWorldData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::NewProp_NewSharedWorldData = { "NewSharedWorldData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSharedWorldGameMode_eventDetermineSharedWorldData_Parms, NewSharedWorldData), Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::NewProp_NewSharedWorldData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Determine which pins should be used for shared world aligment of all clients.\n\x09 *\n\x09 * The result can be set to AMagicLeapSharedWorldGameMode::SharedWorldData.\n\x09 * Calling SendSharedWorldDataToClients() will replicate these local pins to all clients.\n\x09 * Calling SelectChosenOne() can select a certain client to be pseudo-authoritative i.e. all other clients will align to its coordinate space. \n\x09 * This function is a BlueprintNativeEvent, override to implement a custom behavior.\n\x09 * Default implementation -> simple selection of pins common in all connected non-spectator clients,\n\x09 * with their confidence value thresholded by PinSelectionConfidenceThreshold\n\x09 * @param NewSharedWorldData Output param containing the list of common pins.\n\x09 * @see SendSharedWorldDataToClients\n\x09 * @see SelectChosenOne\n\x09 * @see PinSelectionConfidenceThreshold\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
		{ "ToolTip", "Determine which pins should be used for shared world aligment of all clients.\n\nThe result can be set to AMagicLeapSharedWorldGameMode::SharedWorldData.\nCalling SendSharedWorldDataToClients() will replicate these local pins to all clients.\nCalling SelectChosenOne() can select a certain client to be pseudo-authoritative i.e. all other clients will align to its coordinate space.\nThis function is a BlueprintNativeEvent, override to implement a custom behavior.\nDefault implementation -> simple selection of pins common in all connected non-spectator clients,\nwith their confidence value thresholded by PinSelectionConfidenceThreshold\n@param NewSharedWorldData Output param containing the list of common pins.\n@see SendSharedWorldDataToClients\n@see SelectChosenOne\n@see PinSelectionConfidenceThreshold" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameMode, nullptr, "DetermineSharedWorldData", nullptr, nullptr, sizeof(MagicLeapSharedWorldGameMode_eventDetermineSharedWorldData_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Select a certain client to be the \"chosen-one\" or pseudo-authoritative for this shared world session.\n\x09 * \n\x09 * Means that this client is responsible for sending the list of it's pin transforms (in world space so its own alignment is unaffected)\n\x09 * to the server via AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms().\n\x09 * Everyone will align to this client's coordinate space using those pin transforms.\n\x09 * This function is a BlueprintNativeEvent, override to implement a custom behavior.\n\x09 * Default implementation -> client with best confidence values for selected shared pins.\n\x09 * @return Owning player controller of the client selected as the chosen one.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
		{ "ToolTip", "Select a certain client to be the \"chosen-one\" or pseudo-authoritative for this shared world session.\n\nMeans that this client is responsible for sending the list of it's pin transforms (in world space so its own alignment is unaffected)\nto the server via AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms().\nEveryone will align to this client's coordinate space using those pin transforms.\nThis function is a BlueprintNativeEvent, override to implement a custom behavior.\nDefault implementation -> client with best confidence values for selected shared pins.\n@return Owning player controller of the client selected as the chosen one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameMode, nullptr, "SelectChosenOne", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics
	{
		struct MagicLeapSharedWorldGameMode_eventSendSharedWorldDataToClients_Parms
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
	void Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapSharedWorldGameMode_eventSendSharedWorldDataToClients_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapSharedWorldGameMode_eventSendSharedWorldDataToClients_Parms), &Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Replicate pins common among all clients via AMagicLeapSharedWorldGameState.\n\x09 * \n\x09 * These pins can be selected by calling DetermineSharedWorldData()\n\x09 * @return true if game state was valid, false otherwise\n\x09 * @see DetermineSharedWorldData\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
		{ "ToolTip", "Replicate pins common among all clients via AMagicLeapSharedWorldGameState.\n\nThese pins can be selected by calling DetermineSharedWorldData()\n@return true if game state was valid, false otherwise\n@see DetermineSharedWorldData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameMode, nullptr, "SendSharedWorldDataToClients", nullptr, nullptr, sizeof(MagicLeapSharedWorldGameMode_eventSendSharedWorldDataToClients_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameMode_NoRegister()
	{
		return AMagicLeapSharedWorldGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChosenOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChosenOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinSelectionConfidenceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinSelectionConfidenceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewLocalDataFromClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewLocalDataFromClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedWorldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedWorldData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSharedWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_DetermineSharedWorldData, "DetermineSharedWorldData" }, // 4137466674
		{ &Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature, "MagicLeapOnNewLocalDataFromClients__DelegateSignature" }, // 1144291241
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SelectChosenOne, "SelectChosenOne" }, // 1032482403
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients, "SendSharedWorldDataToClients" }, // 32030320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Game mode to use for shared world experiences on MagicLeap capable XR devices.\n *\n * Requires the game state class to be or derived from AMagicLeapSharedWorldGameState.\n * Requires the player controller class to be or derived from AMagicLeapSharedWorldPlayerController.\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MagicLeapSharedWorldGameMode.h" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Game mode to use for shared world experiences on MagicLeap capable XR devices.\n\nRequires the game state class to be or derived from AMagicLeapSharedWorldGameState.\nRequires the player controller class to be or derived from AMagicLeapSharedWorldPlayerController." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_ChosenOne_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_ChosenOne = { "ChosenOne", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameMode, ChosenOne), Z_Construct_UClass_AMagicLeapSharedWorldPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_ChosenOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_ChosenOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_PinSelectionConfidenceThreshold_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/** Confidence threshold for selecting shared Pins */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
		{ "ToolTip", "Confidence threshold for selecting shared Pins" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_PinSelectionConfidenceThreshold = { "PinSelectionConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameMode, PinSelectionConfidenceThreshold), METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_PinSelectionConfidenceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_PinSelectionConfidenceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_OnNewLocalDataFromClients_MetaData[] = {
		{ "Comment", "/** Event fired when server receives new local data from connected clients. */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
		{ "ToolTip", "Event fired when server receives new local data from connected clients." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_OnNewLocalDataFromClients = { "OnNewLocalDataFromClients", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameMode, OnNewLocalDataFromClients), Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_OnNewLocalDataFromClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_OnNewLocalDataFromClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_SharedWorldData_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/** Cache pins common among all clients */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameMode.h" },
		{ "ToolTip", "Cache pins common among all clients" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_SharedWorldData = { "SharedWorldData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameMode, SharedWorldData), Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_SharedWorldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_SharedWorldData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_ChosenOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_PinSelectionConfidenceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_OnNewLocalDataFromClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::NewProp_SharedWorldData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicLeapSharedWorldGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::ClassParams = {
		&AMagicLeapSharedWorldGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicLeapSharedWorldGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicLeapSharedWorldGameMode, 2959184707);
	template<> MAGICLEAPSHAREDWORLD_API UClass* StaticClass<AMagicLeapSharedWorldGameMode>()
	{
		return AMagicLeapSharedWorldGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicLeapSharedWorldGameMode(Z_Construct_UClass_AMagicLeapSharedWorldGameMode, &AMagicLeapSharedWorldGameMode::StaticClass, TEXT("/Script/MagicLeapSharedWorld"), TEXT("AMagicLeapSharedWorldGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicLeapSharedWorldGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
