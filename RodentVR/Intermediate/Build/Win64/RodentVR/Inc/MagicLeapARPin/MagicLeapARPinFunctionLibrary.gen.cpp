// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapARPin/Public/MagicLeapARPinFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapARPinFunctionLibrary() {}
// Cross Module References
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_NoRegister();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapARPin();
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_MagicLeapARPin_MagicLeapARPinUpdatedDelegate__DelegateSignature();
	MAGICLEAPARPIN_API UEnum* Z_Construct_UEnum_MagicLeapARPin_EMagicLeapPassableWorldError();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAPARPIN_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapARPinState();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execUnBindToOnMagicLeapARPinUpdatedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(FMagicLeapARPinUpdatedDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execBindToOnMagicLeapARPinUpdatedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(FMagicLeapARPinUpdatedDelegate(Z_Param_Out_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execGetARPinStateToString)
	{
		P_GET_STRUCT_REF(FMagicLeapARPinState,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::GetARPinStateToString(Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execGetARPinState)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_PinID);
		P_GET_STRUCT_REF(FMagicLeapARPinState,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapPassableWorldError*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::GetARPinState(Z_Param_Out_PinID,Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execGetARPinPositionAndOrientation)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_PinID);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_UBOOL_REF(Z_Param_Out_PinFoundInEnvironment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(Z_Param_Out_PinID,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_PinFoundInEnvironment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execGetARPinPositionAndOrientation_TrackingSpace)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_PinID);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_UBOOL_REF(Z_Param_Out_PinFoundInEnvironment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(Z_Param_Out_PinID,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_PinFoundInEnvironment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execGetClosestARPin)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SearchPoint);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_PinID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapPassableWorldError*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::GetClosestARPin(Z_Param_Out_SearchPoint,Z_Param_Out_PinID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execGetAvailableARPins)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumRequested);
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_Pins);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapPassableWorldError*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::GetAvailableARPins(Z_Param_NumRequested,Z_Param_Out_Pins);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execGetNumAvailableARPins)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapPassableWorldError*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(Z_Param_Out_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execIsTrackerValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::IsTrackerValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execDestroyTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapPassableWorldError*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::DestroyTracker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinFunctionLibrary::execCreateTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapPassableWorldError*)Z_Param__Result=UMagicLeapARPinFunctionLibrary::CreateTracker();
		P_NATIVE_END;
	}
	void UMagicLeapARPinFunctionLibrary::StaticRegisterNativesUMagicLeapARPinFunctionLibrary()
	{
		UClass* Class = UMagicLeapARPinFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToOnMagicLeapARPinUpdatedDelegate", &UMagicLeapARPinFunctionLibrary::execBindToOnMagicLeapARPinUpdatedDelegate },
			{ "CreateTracker", &UMagicLeapARPinFunctionLibrary::execCreateTracker },
			{ "DestroyTracker", &UMagicLeapARPinFunctionLibrary::execDestroyTracker },
			{ "GetARPinPositionAndOrientation", &UMagicLeapARPinFunctionLibrary::execGetARPinPositionAndOrientation },
			{ "GetARPinPositionAndOrientation_TrackingSpace", &UMagicLeapARPinFunctionLibrary::execGetARPinPositionAndOrientation_TrackingSpace },
			{ "GetARPinState", &UMagicLeapARPinFunctionLibrary::execGetARPinState },
			{ "GetARPinStateToString", &UMagicLeapARPinFunctionLibrary::execGetARPinStateToString },
			{ "GetAvailableARPins", &UMagicLeapARPinFunctionLibrary::execGetAvailableARPins },
			{ "GetClosestARPin", &UMagicLeapARPinFunctionLibrary::execGetClosestARPin },
			{ "GetNumAvailableARPins", &UMagicLeapARPinFunctionLibrary::execGetNumAvailableARPins },
			{ "IsTrackerValid", &UMagicLeapARPinFunctionLibrary::execIsTrackerValid },
			{ "UnBindToOnMagicLeapARPinUpdatedDelegate", &UMagicLeapARPinFunctionLibrary::execUnBindToOnMagicLeapARPinUpdatedDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventBindToOnMagicLeapARPinUpdatedDelegate_Parms
		{
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventBindToOnMagicLeapARPinUpdatedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_MagicLeapARPin_MagicLeapARPinUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Bind a dynamic delegate to the OnMagicLeapARPinUpdated event.\n\x09 * \n\x09 * The delegate reports 3 arrays for ARPins added, updated and deleted.\n\x09 * Whether a pin is considered updated is determined by whehter any of its state parameters changed a specified delta.\n\x09 * The delta thresholds can be set in Project Settings > MagicLeapARPin Plugin\n\x09 * @param Delegate Delegate to bind\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Bind a dynamic delegate to the OnMagicLeapARPinUpdated event.\n\nThe delegate reports 3 arrays for ARPins added, updated and deleted.\nWhether a pin is considered updated is determined by whehter any of its state parameters changed a specified delta.\nThe delta thresholds can be set in Project Settings > MagicLeapARPin Plugin\n@param Delegate Delegate to bind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "BindToOnMagicLeapARPinUpdatedDelegate", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventBindToOnMagicLeapARPinUpdatedDelegate_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventCreateTracker_Parms
		{
			EMagicLeapPassableWorldError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventCreateTracker_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapPassableWorldError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Create an ARPin tracker.\n\x09* @return Error code representing specific success or failure cases. If code is EMagicLeapPassableWorldError::PrivilegeRequestPending,\n\x09* poll for IsTrackerValid() to check when the privilege is granted and tracker successfully created.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Create an ARPin tracker.\n@return Error code representing specific success or failure cases. If code is EMagicLeapPassableWorldError::PrivilegeRequestPending,\npoll for IsTrackerValid() to check when the privilege is granted and tracker successfully created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "CreateTracker", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventCreateTracker_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventDestroyTracker_Parms
		{
			EMagicLeapPassableWorldError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventDestroyTracker_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapPassableWorldError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Destroy an ARPin tracker.\n\x09* @return Error code representing specific success or failure cases.,\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Destroy an ARPin tracker.\n@return Error code representing specific success or failure cases.," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "DestroyTracker", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventDestroyTracker_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms
		{
			FGuid PinID;
			FVector Position;
			FRotator Orientation;
			bool PinFoundInEnvironment;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_PinFoundInEnvironment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PinFoundInEnvironment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms), &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinFoundInEnvironment_SetBit(void* Obj)
	{
		((MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms*)Obj)->PinFoundInEnvironment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinFoundInEnvironment = { "PinFoundInEnvironment", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms), &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinFoundInEnvironment_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinFoundInEnvironment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::NewProp_PinID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns the world position & orientation of the requested Pin.\n\x09* @param PinID ID of the Pin to get the position and orientation for.\n\x09* @param Position Output param for the world position of the Pin. Valid only if return value is true.\n\x09* @param Orientation Output param for the world orientation of the Pin. Valid only if return value is true.\n\x09* @param PinFoundInEnvironment Output param for indicating if the requested Pin was found user's current environment or not.\n\x09* @return true if the PinID was valid and the position & orientation were successfully retrieved.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Returns the world position & orientation of the requested Pin.\n@param PinID ID of the Pin to get the position and orientation for.\n@param Position Output param for the world position of the Pin. Valid only if return value is true.\n@param Orientation Output param for the world orientation of the Pin. Valid only if return value is true.\n@param PinFoundInEnvironment Output param for indicating if the requested Pin was found user's current environment or not.\n@return true if the PinID was valid and the position & orientation were successfully retrieved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "GetARPinPositionAndOrientation", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms
		{
			FGuid PinID;
			FVector Position;
			FRotator Orientation;
			bool PinFoundInEnvironment;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_PinFoundInEnvironment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PinFoundInEnvironment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms), &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinFoundInEnvironment_SetBit(void* Obj)
	{
		((MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms*)Obj)->PinFoundInEnvironment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinFoundInEnvironment = { "PinFoundInEnvironment", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms), &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinFoundInEnvironment_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinFoundInEnvironment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::NewProp_PinID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns the position & orientation of the requested Pin in tracking space\n\x09* @param PinID ID of the Pin to get the position and orientation for.\n\x09* @param Position Output param for the position of the Pin in tracking space. Valid only if return value is true.\n\x09* @param Orientation Output param for the orientation of the Pin in tracking space. Valid only if return value is true.\n\x09* @param PinFoundInEnvironment Output param for indicating if the requested Pin was found user's current environment or not.\n\x09* @return true if the PinID was valid and the position & orientation were successfully retrieved.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Returns the position & orientation of the requested Pin in tracking space\n@param PinID ID of the Pin to get the position and orientation for.\n@param Position Output param for the position of the Pin in tracking space. Valid only if return value is true.\n@param Orientation Output param for the orientation of the Pin in tracking space. Valid only if return value is true.\n@param PinFoundInEnvironment Output param for indicating if the requested Pin was found user's current environment or not.\n@return true if the PinID was valid and the position & orientation were successfully retrieved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "GetARPinPositionAndOrientation_TrackingSpace", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinPositionAndOrientation_TrackingSpace_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventGetARPinState_Parms
		{
			FGuid PinID;
			FMagicLeapARPinState State;
			EMagicLeapPassableWorldError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinState_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapPassableWorldError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinState_Parms, State), Z_Construct_UScriptStruct_FMagicLeapARPinState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_PinID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinState_Parms, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_PinID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_PinID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::NewProp_PinID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns the state of the requested Pin.\n\x09* @param PinID ID of the Pin to get the state for.\n\x09* @param State Output state of the Pin. Valid only if return value is true.\n\x09* @return Error code representing specific success or failure cases.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Returns the state of the requested Pin.\n@param PinID ID of the Pin to get the state for.\n@param State Output state of the Pin. Valid only if return value is true.\n@return Error code representing specific success or failure cases." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "GetARPinState", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinState_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventGetARPinStateToString_Parms
		{
			FMagicLeapARPinState State;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinStateToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetARPinStateToString_Parms, State), Z_Construct_UScriptStruct_FMagicLeapARPinState, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "GetARPinStateToString", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventGetARPinStateToString_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventGetAvailableARPins_Parms
		{
			int32 NumRequested;
			TArray<FGuid> Pins;
			EMagicLeapPassableWorldError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pins_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRequested;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetAvailableARPins_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapPassableWorldError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_Pins = { "Pins", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetAvailableARPins_Parms, Pins), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_Pins_Inner = { "Pins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_NumRequested = { "NumRequested", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetAvailableARPins_Parms, NumRequested), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_Pins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_Pins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::NewProp_NumRequested,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns all the AR Pins currently available.\n\x09* @param NumRequested Max number of AR Pins to query. Pass in a negative integer to get all available Pins.\n\x09* @param Pins Output array containing IDs of the found Pins. Valid only if return value is EMagicLeapPassableWorldError::None.\n\x09* @return Error code representing specific success or failure cases.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Returns all the AR Pins currently available.\n@param NumRequested Max number of AR Pins to query. Pass in a negative integer to get all available Pins.\n@param Pins Output array containing IDs of the found Pins. Valid only if return value is EMagicLeapPassableWorldError::None.\n@return Error code representing specific success or failure cases." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "GetAvailableARPins", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventGetAvailableARPins_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventGetClosestARPin_Parms
		{
			FVector SearchPoint;
			FGuid PinID;
			EMagicLeapPassableWorldError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetClosestARPin_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapPassableWorldError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetClosestARPin_Parms, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_SearchPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_SearchPoint = { "SearchPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetClosestARPin_Parms, SearchPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_SearchPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_SearchPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_PinID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::NewProp_SearchPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns the Pin closest to the target point passed in.\n\x09* @param SearchPoint Position, in world space, to search the closest Pin to.\n\x09* @param PinID Output param for the ID of the closest Pin. Valid only if return value is EMagicLeapPassableWorldError::None.\n\x09* @return Error code representing specific success or failure cases.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Returns the Pin closest to the target point passed in.\n@param SearchPoint Position, in world space, to search the closest Pin to.\n@param PinID Output param for the ID of the closest Pin. Valid only if return value is EMagicLeapPassableWorldError::None.\n@return Error code representing specific success or failure cases." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "GetClosestARPin", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventGetClosestARPin_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventGetNumAvailableARPins_Parms
		{
			int32 Count;
			EMagicLeapPassableWorldError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetNumAvailableARPins_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapPassableWorldError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventGetNumAvailableARPins_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns the count of currently available AR Pins.\n\x09* @param Count Output param for number of currently available AR Pins. Valid only if return value is EMagicLeapPassableWorldError::None.\n\x09* @return Error code representing specific success or failure cases.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Returns the count of currently available AR Pins.\n@param Count Output param for number of currently available AR Pins. Valid only if return value is EMagicLeapPassableWorldError::None.\n@return Error code representing specific success or failure cases." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "GetNumAvailableARPins", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventGetNumAvailableARPins_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventIsTrackerValid_Parms
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
	void Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinFunctionLibrary_eventIsTrackerValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinFunctionLibrary_eventIsTrackerValid_Parms), &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Is an ARPin tracker already created. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Is an ARPin tracker already created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "IsTrackerValid", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventIsTrackerValid_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics
	{
		struct MagicLeapARPinFunctionLibrary_eventUnBindToOnMagicLeapARPinUpdatedDelegate_Parms
		{
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinFunctionLibrary_eventUnBindToOnMagicLeapARPinUpdatedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_MagicLeapARPin_MagicLeapARPinUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Unbind a dynamic delegate from the OnMagicLeapARPinUpdated event.\n\x09 * @param Delegate Delegate to unbind\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Unbind a dynamic delegate from the OnMagicLeapARPinUpdated event.\n@param Delegate Delegate to unbind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, nullptr, "UnBindToOnMagicLeapARPinUpdatedDelegate", nullptr, nullptr, sizeof(MagicLeapARPinFunctionLibrary_eventUnBindToOnMagicLeapARPinUpdatedDelegate_Parms), Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_NoRegister()
	{
		return UMagicLeapARPinFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapARPin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate, "BindToOnMagicLeapARPinUpdatedDelegate" }, // 4177866641
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_CreateTracker, "CreateTracker" }, // 1553222445
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_DestroyTracker, "DestroyTracker" }, // 422428225
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation, "GetARPinPositionAndOrientation" }, // 1342158102
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace, "GetARPinPositionAndOrientation_TrackingSpace" }, // 1096283895
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinState, "GetARPinState" }, // 1931513487
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetARPinStateToString, "GetARPinStateToString" }, // 1480142066
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetAvailableARPins, "GetAvailableARPins" }, // 4034237852
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetClosestARPin, "GetClosestARPin" }, // 3469583565
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins, "GetNumAvailableARPins" }, // 3242347593
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_IsTrackerValid, "IsTrackerValid" }, // 604253550
		{ &Z_Construct_UFunction_UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate, "UnBindToOnMagicLeapARPinUpdatedDelegate" }, // 3608681012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/** Direct API interface for the Magic Leap Persistent AR Pin tracker system. */" },
		{ "IncludePath", "MagicLeapARPinFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinFunctionLibrary.h" },
		{ "ToolTip", "Direct API interface for the Magic Leap Persistent AR Pin tracker system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapARPinFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapARPinFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapARPinFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapARPinFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapARPinFunctionLibrary, 1927061265);
	template<> MAGICLEAPARPIN_API UClass* StaticClass<UMagicLeapARPinFunctionLibrary>()
	{
		return UMagicLeapARPinFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapARPinFunctionLibrary(Z_Construct_UClass_UMagicLeapARPinFunctionLibrary, &UMagicLeapARPinFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapARPin"), TEXT("UMagicLeapARPinFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapARPinFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
