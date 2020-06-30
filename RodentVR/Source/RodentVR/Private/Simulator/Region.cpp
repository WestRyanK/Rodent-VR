// Fill out your copyright notice in the Description page of Project Settings.


#include "Region.h"
#include "Engine/StaticMesh.h"
#include "Simulator/AssetLoader.h"
#include "Hardware/ToneGenerator/ToneGenerator.h"
#include "Kismet/GameplayStatics.h"
#include "Core/RodentVRGameInstance.h"
#include "Settings/Device.h"
#include "Settings/TextureSettings.h"
#include "Settings/ToneGenerationSettings.h"
#include "Materials/MaterialInstanceDynamic.h"


FName ARegion::RegionTag = FName("Region");
FRegionEnterDelegate ARegion::OnRegionEnterDelegate;

FName ARegion::GetRegionTag()
{
	return ARegion::RegionTag;
}

// Sets default values
ARegion::ARegion()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->InitStaticMesh();
	this->InitBoxComponent();
	this->InitNosePoke();

	this->RewardDispenserComponent = CreateDefaultSubobject<URewardDispenserComponent>(TEXT("Reward Dispenser Component"));
	this->RegionColor = FColor(255.0f, 0.0f, 0.0f);
	this->Tags.Add(ARegion::RegionTag);
	this->IsForEditor = false;
}

void ARegion::InitStaticMesh()
{
	// We use both a static mesh and a box component because we wanted the edges of the box to be drawn as lines in the editor and this was the easiest way.
	this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->RootComponent = this->StaticMesh;
	FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/CubeMesh.CubeMesh"));
	UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
	this->StaticMesh->SetStaticMesh(Mesh);
	this->StaticMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
}

void ARegion::InitNosePoke()
{
	this->NosePokeStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nose Poke Static Mesh"));
	this->NosePokeStaticMesh->SetupAttachment(this->BoxComponent);
	FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/NosePokeMesh.NosePokeMesh"));
	UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
	this->NosePokeStaticMesh->SetStaticMesh(Mesh);
	this->NosePokeStaticMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
}

void ARegion::InitBoxComponent()
{
	this->BoxComponent = CreateDefaultSubobject<URegionBoxComponent>(TEXT("Box Component"));
	this->BoxComponent->SetupAttachment(this->StaticMesh);
	this->BoxComponent->SetBoxExtent(FVector(BOX_COMPONENT_SIZE));
	this->BoxComponent->AddRelativeLocation(FVector(0, 0, BOX_COMPONENT_SIZE));
	this->BoxComponent->SetLineThickness(2);
	this->BoxComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	this->BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ARegion::OnOverlapBegin);
	this->BoxComponent->OnComponentEndOverlap.AddDynamic(this, &ARegion::OnOverlapEnd);
}

URegionSettings* ARegion::GetSettings()
{
	return this->Settings;
}

void ARegion::SetSettings(URegionSettings* SettingsValue)
{
	this->Settings = SettingsValue;
	this->UpdateFromSettings();
}

void ARegion::UpdateFromSettings()
{
	this->SetActorLocation(this->Settings->GetPosition());
	this->SetActorRotation(this->Settings->GetRotation());
	//this->SetActorScale3D(this->Settings->GetScale());
	this->SetActorRelativeScale3D(this->Settings->GetScale());


	UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/Materials/M_Region.M_Region");
	UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
	DynamicMaterial->SetVectorParameterValue(FName("Color"), this->RegionColor);
	DynamicMaterial->SetScalarParameterValue(FName("Opacity"), 0.4f);
	this->StaticMesh->SetMaterial(0, DynamicMaterial);

	this->NosePokeStaticMesh->SetHiddenInGame(!this->Settings->GetIsNosePoke());
	UTexture2D* NosePokeTexture = UAssetLoader::LoadTexture(TextureEnum::BLACK);
	UMaterialInstanceDynamic* NosePokeMaterial = UAssetLoader::LoadMaterialFromTexture(NosePokeTexture, this->NosePokeStaticMesh);
	this->NosePokeStaticMesh->SetMaterial(0, NosePokeMaterial);

	this->StaticMesh->SetHiddenInGame(!this->IsForEditor);
	this->BoxComponent->SetHiddenInGame(!this->IsForEditor);
}

void ARegion::OnRegionEnter(URegionSettings* RegionEntered)
{
	ARegion::OnRegionEnterDelegate.Broadcast(RegionEntered);
}

void ARegion::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(this->Settings) && IsValid(OtherActor) && OtherActor->IsA(ACharacter::StaticClass()))
	{
		this->OnRegionEnter(this->Settings);

			if (this->Settings->GetIsRewardDispensingEnabled())
			{
				UDevice* Device = this->Settings->GetRewardDevice();
					if (IsValid(Device))
					{
						this->RewardDispenserComponent->DispenseReward(Device, this->Settings->GetRewardDeviceDispensingDurationSec());
					}
			}
		UToneGenerationSettings* ToneGenerationSettings = this->Settings->GetToneGenerationSettings();
		if (IsValid(ToneGenerationSettings) && ToneGenerationSettings->GetIsToneGenerationEnabled())
		{
			URodentVRGameInstance* Instance = (URodentVRGameInstance*)UGameplayStatics::GetGameInstance(this);
			Instance->GetToneGenerator(this)->StartTone(ToneGenerationSettings->GetToneDurationSec(), ToneGenerationSettings->GetTonePitchHz(), ToneGenerationSettings->GetToneVolumePercent());
		}
	}
}

void ARegion::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	if (IsValid(this->Settings) && IsValid(OtherActor) && OtherActor->IsA(ACharacter::StaticClass()))
	{
		this->OnRegionEnter(nullptr);
			if (this->Settings->GetIsRewardDispensingEnabled())
			{
				this->RewardDispenserComponent->StopDispensingRewards();
			}

		UToneGenerationSettings* ToneGenerationSettings = this->Settings->GetToneGenerationSettings();
			if (IsValid(ToneGenerationSettings) && ToneGenerationSettings->GetIsToneGenerationEnabled())
			{
				URodentVRGameInstance* Instance = (URodentVRGameInstance*)UGameplayStatics::GetGameInstance(this);
				Instance->GetToneGenerator(this)->EndTone();
			}
	}
}

bool ARegion::GetIsForEditor()
{
	return this->IsForEditor;
}

void ARegion::SetIsForEditor(bool IsForEditorValue)
{
	this->IsForEditor = IsForEditorValue;
}
