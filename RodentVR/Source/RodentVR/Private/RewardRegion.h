// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RewardRegion.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRewardRegionEnterDelegate, int, RegionEnteredId);

UCLASS()
class ARewardRegion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARewardRegion();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int32 RegionId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	bool IsRewardDispensingEnabled;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int32 RewardDeviceId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float RewardDurationSec;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float ToneDurationSec;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float TonePitchHz;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float ToneVolumeMultiplier;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	bool IsToneEnabled;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	static FRewardRegionEnterDelegate OnRewardRegionEnterDelegate;


	UFUNCTION(BlueprintCallable, Category="Reward Region")
	void OnRewardRegionEnter(int RegionEnteredId);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
