// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
enum class EMagicLeapPlaneQueryType : uint8;
struct FMagicLeapPlaneResult;
struct FMagicLeapPlaneBoundaries;
#ifdef MAGICLEAPPLANES_MagicLeapPlanesTypes_generated_h
#error "MagicLeapPlanesTypes.generated.h already included, missing '#pragma once' in MagicLeapPlanesTypes.h"
#endif
#define MAGICLEAPPLANES_MagicLeapPlanesTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapPlaneBoundaries_Statics; \
	MAGICLEAPPLANES_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<struct FMagicLeapPlaneBoundaries>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapPlaneBoundary_Statics; \
	MAGICLEAPPLANES_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<struct FMagicLeapPlaneBoundary>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapPolygon_Statics; \
	MAGICLEAPPLANES_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<struct FMagicLeapPolygon>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapPlanesQuery_Statics; \
	MAGICLEAPPLANES_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<struct FMagicLeapPlanesQuery>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapPlaneResult_Statics; \
	MAGICLEAPPLANES_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPPLANES_API UScriptStruct* StaticStruct<struct FMagicLeapPlaneResult>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_218_DELEGATE \
struct _Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms \
{ \
	bool bSuccess; \
	FGuid QueryHandle; \
	EMagicLeapPlaneQueryType QueryType; \
	TArray<FMagicLeapPlaneResult> NewPlanes; \
	TArray<FGuid> RemovedPlaneIDs; \
	TArray<FMagicLeapPlaneBoundaries> NewPolygons; \
	TArray<FGuid> RemovedPolygonIDs; \
}; \
static inline void FMagicLeapPersistentPlanesResultDelegateMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapPersistentPlanesResultDelegateMulti, bool bSuccess, FGuid const& QueryHandle, const EMagicLeapPlaneQueryType QueryType, TArray<FMagicLeapPlaneResult> const& NewPlanes, TArray<FGuid> const& RemovedPlaneIDs, TArray<FMagicLeapPlaneBoundaries> const& NewPolygons, TArray<FGuid> const& RemovedPolygonIDs) \
{ \
	_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegateMulti_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.QueryHandle=QueryHandle; \
	Parms.QueryType=QueryType; \
	Parms.NewPlanes=NewPlanes; \
	Parms.RemovedPlaneIDs=RemovedPlaneIDs; \
	Parms.NewPolygons=NewPolygons; \
	Parms.RemovedPolygonIDs=RemovedPolygonIDs; \
	MagicLeapPersistentPlanesResultDelegateMulti.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_217_DELEGATE \
struct _Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms \
{ \
	bool bSuccess; \
	FGuid QueryHandle; \
	EMagicLeapPlaneQueryType QueryType; \
	TArray<FMagicLeapPlaneResult> NewPlanes; \
	TArray<FGuid> RemovedPlaneIDs; \
	TArray<FMagicLeapPlaneBoundaries> NewPolygons; \
	TArray<FGuid> RemovedPolygonIDs; \
}; \
static inline void FMagicLeapPersistentPlanesResultDelegate_DelegateWrapper(const FScriptDelegate& MagicLeapPersistentPlanesResultDelegate, bool bSuccess, FGuid const& QueryHandle, const EMagicLeapPlaneQueryType QueryType, TArray<FMagicLeapPlaneResult> const& NewPlanes, TArray<FGuid> const& RemovedPlaneIDs, TArray<FMagicLeapPlaneBoundaries> const& NewPolygons, TArray<FGuid> const& RemovedPolygonIDs) \
{ \
	_Script_MagicLeapPlanes_eventMagicLeapPersistentPlanesResultDelegate_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.QueryHandle=QueryHandle; \
	Parms.QueryType=QueryType; \
	Parms.NewPlanes=NewPlanes; \
	Parms.RemovedPlaneIDs=RemovedPlaneIDs; \
	Parms.NewPolygons=NewPolygons; \
	Parms.RemovedPolygonIDs=RemovedPolygonIDs; \
	MagicLeapPersistentPlanesResultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_213_DELEGATE \
struct _Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms \
{ \
	bool bSuccess; \
	TArray<FMagicLeapPlaneResult> Planes; \
	TArray<FMagicLeapPlaneBoundaries> Polygons; \
}; \
static inline void FMagicLeapPlanesResultDelegateMulti_DelegateWrapper(const FMulticastScriptDelegate& MagicLeapPlanesResultDelegateMulti, bool bSuccess, TArray<FMagicLeapPlaneResult> const& Planes, TArray<FMagicLeapPlaneBoundaries> const& Polygons) \
{ \
	_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegateMulti_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.Planes=Planes; \
	Parms.Polygons=Polygons; \
	MagicLeapPlanesResultDelegateMulti.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h_212_DELEGATE \
struct _Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms \
{ \
	bool bSuccess; \
	TArray<FMagicLeapPlaneResult> Planes; \
	TArray<FMagicLeapPlaneBoundaries> Polygons; \
}; \
static inline void FMagicLeapPlanesResultDelegate_DelegateWrapper(const FScriptDelegate& MagicLeapPlanesResultDelegate, bool bSuccess, TArray<FMagicLeapPlaneResult> const& Planes, TArray<FMagicLeapPlaneBoundaries> const& Polygons) \
{ \
	_Script_MagicLeapPlanes_eventMagicLeapPlanesResultDelegate_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.Planes=Planes; \
	Parms.Polygons=Polygons; \
	MagicLeapPlanesResultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPlanes_Source_Public_MagicLeapPlanesTypes_h


#define FOREACH_ENUM_EMAGICLEAPPLANEQUERYTYPE(op) \
	op(EMagicLeapPlaneQueryType::Bulk) \
	op(EMagicLeapPlaneQueryType::Delta) 

enum class EMagicLeapPlaneQueryType : uint8;
template<> MAGICLEAPPLANES_API UEnum* StaticEnum<EMagicLeapPlaneQueryType>();

#define FOREACH_ENUM_EMAGICLEAPPLANEQUERYFLAGS(op) \
	op(EMagicLeapPlaneQueryFlags::Vertical) \
	op(EMagicLeapPlaneQueryFlags::Horizontal) \
	op(EMagicLeapPlaneQueryFlags::Arbitrary) \
	op(EMagicLeapPlaneQueryFlags::OrientToGravity) \
	op(EMagicLeapPlaneQueryFlags::PreferInner) \
	op(EMagicLeapPlaneQueryFlags::Ceiling) \
	op(EMagicLeapPlaneQueryFlags::Floor) \
	op(EMagicLeapPlaneQueryFlags::Wall) \
	op(EMagicLeapPlaneQueryFlags::Polygons) 

enum class EMagicLeapPlaneQueryFlags : uint8;
template<> MAGICLEAPPLANES_API UEnum* StaticEnum<EMagicLeapPlaneQueryFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
