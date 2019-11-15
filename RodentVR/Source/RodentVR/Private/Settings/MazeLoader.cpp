// Fill out your copyright notice in the Description page of Project Settings.

#include "Settings/MazeLoader.h"
#include "RewardRegion.h"
#include <stdexcept>
#include "StopConditions/StopConditionsChecker.h"
#include "StopConditions/TimeLimitStopCondition.h"
#include "StopConditions/EnterRegionStopCondition.h"

FName UMazeLoader::MazeFolderPath = FName("Maze");

void UMazeLoader::LoadMaze(UWorld* World, rapidxml::xml_node<>* MazeNode)
{
	std::string MazeName = "Maze01";

	rapidxml::xml_attribute<>* MazeNameAttribute = MazeNode->first_attribute("Name");
	if (MazeNameAttribute != nullptr)
	{
		MazeName = MazeNameAttribute->value();
	}

	std::string ActorPath("/Game/Mazes/" + MazeName + "." + MazeName);
	TSubclassOf<AActor> MazeActorClass = UMazeLoader::GetActorBlueprintClass(ActorPath);
	AActor* MazeActor = World->SpawnActor<AActor>(MazeActorClass);
	if (MazeActor != nullptr)
	{
		MazeActor->SetFolderPath(UMazeLoader::MazeFolderPath);
		UMazeLoader::SetMazeMaterials(MazeActor, MazeNode);
	}
}

void UMazeLoader::SetMazeMaterials(AActor* MazeActor, rapidxml::xml_node<>* MazeNode)
{
	if (MazeActor != nullptr)
	{
		rapidxml::xml_node<>* MaterialsNode = MazeNode->first_node("Materials");
		UStaticMeshComponent* MeshComponent = (UStaticMeshComponent*)MazeActor->GetComponentByClass(UStaticMeshComponent::StaticClass());

		if (MeshComponent != nullptr && MaterialsNode != nullptr)
		{
			for (rapidxml::xml_node<>* MaterialNode = MaterialsNode->first_node(); MaterialNode; MaterialNode = MaterialNode->next_sibling())
			{
				rapidxml::xml_attribute<>* SlotNameAttribute = MaterialNode->first_attribute("SlotName");
				if (SlotNameAttribute != nullptr)
				{
					std::string SlotName(SlotNameAttribute->value());
					UMaterial* Material = UMazeLoader::GetMaterialFromNode(MaterialNode);


					if (Material != nullptr)
					{
						MeshComponent->SetMaterialByName(FName(SlotName.c_str()), Material);
					}
				}
			}
		}
	}
}

void UMazeLoader::LoadPlayerStart(UWorld* World, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* PlayerStart = MazeNode->first_node("PlayerStart");

	FVector PlayerStartPosition;
	FRotator PlayerRotation;
	if (PlayerStart != nullptr)
	{
		PlayerStartPosition = UMazeLoader::GetVectorFromNode(PlayerStart->first_node("Position"));
		PlayerRotation = UMazeLoader::GetRotatorFromNode(PlayerStart->first_node("Rotation"));

	}

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (PlayerController != nullptr)
	{
		PlayerController->GetPawn()->SetActorLocationAndRotation(PlayerStartPosition, FRotator());
		PlayerController->SetControlRotation(PlayerRotation);
	}
}

void UMazeLoader::LoadObjects(UWorld* World, rapidxml::xml_node<>* MazeNode)
{
	for (rapidxml::xml_node<>* ObjectNode = MazeNode->first_node("Objects")->first_node(); ObjectNode; ObjectNode = ObjectNode->next_sibling())
	{
		std::string ObjectName(ObjectNode->first_attribute("Name")->value());
		FVector ObjectLocation = UMazeLoader::GetVectorFromNode(ObjectNode->first_node("Position"));
		FRotator ObjectRotation = UMazeLoader::GetRotatorFromNode(ObjectNode->first_node("Rotation"));
		UMaterial* Material = UMazeLoader::GetMaterialFromNode(ObjectNode);
		bool CanCollide = UMazeLoader::GetBoolFromAttribute(ObjectNode, "CanCollide", false);

		std::string ActorPath("/Game/Objects/" + ObjectName + "Object." + ObjectName + "Object");
		TSubclassOf<AActor> ObjectActorClass = UMazeLoader::GetActorBlueprintClass(ActorPath);

		AActor* ObjectActor = World->SpawnActor<AActor>(ObjectActorClass, ObjectLocation, ObjectRotation);

		if (ObjectActor != nullptr)
		{
			ObjectActor->SetFolderPath(UMazeLoader::MazeFolderPath);
			ObjectActor->SetActorEnableCollision(CanCollide);

			if (Material != nullptr)
			{
				UStaticMeshComponent* MeshComponent = (UStaticMeshComponent*)ObjectActor->GetComponentByClass(UStaticMeshComponent::StaticClass());
				MeshComponent->SetMaterial(0, Material);
			}
		}
	}
}

void UMazeLoader::LoadRegions(UWorld* World, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* RegionsNode = MazeNode->first_node("Regions");

	if (RegionsNode != nullptr)
	{
		bool AreRegionsVisible = UMazeLoader::GetBoolFromAttribute(RegionsNode, "AreRegionsVisible", false);
		for (rapidxml::xml_node<>* RegionNode = RegionsNode->first_node(); RegionNode; RegionNode = RegionNode->next_sibling())
		{
			//std::string RegionName(RegionNode->first_attribute("Name")->value());
			FVector RegionLocation = UMazeLoader::GetVectorFromNode(RegionNode->first_node("Position"));
			FRotator RegionRotation = UMazeLoader::GetRotatorFromNode(RegionNode->first_node("Rotation"));
			FVector RegionScale = UMazeLoader::GetVectorFromNode(RegionNode->first_node("Scale"));
			rapidxml::xml_node<>* RewardNode = RegionNode->first_node("Reward");

			int32 RegionId = UMazeLoader::GetIntFromAttribute(RegionNode, "RegionId", -1);
			int32 RewardDeviceId = UMazeLoader::GetIntFromAttribute(RewardNode, "RewardDeviceId", -1);
			float RewardDurationSec = UMazeLoader::GetFloatFromAttribute(RewardNode, "RewardDurationSec", 0.0f);
			bool IsRewardDispensingEnabled = UMazeLoader::GetBoolFromAttribute(RewardNode, "IsRewardDispensingEnabled", false);
			bool IsNosePoke = UMazeLoader::GetBoolFromAttribute(RegionNode, "IsNosePoke", false);

			rapidxml::xml_node<>* ToneNode = RegionNode->first_node("Tone");
			float ToneDurationSec = UMazeLoader::GetFloatFromAttribute(ToneNode, "ToneDurationSec", 0.0f);
			float TonePitchHz = UMazeLoader::GetFloatFromAttribute(ToneNode, "TonePitchHz", 440.0f);
			float ToneVolumeMultiplier = UMazeLoader::GetFloatFromAttribute(ToneNode, "ToneVolumeMultiplier", 1.0f);
			bool IsToneEnabled = UMazeLoader::GetBoolFromAttribute(ToneNode, "IsToneEnabled", false);

			ARewardRegion* RegionActor;
			if (IsNosePoke)
			{
				RegionActor = World->SpawnActor<ARewardRegion>(UMazeLoader::GetActorBlueprintClass("/Game/NosePoke.NosePoke"), RegionLocation, RegionRotation);
			}
			else
			{
				RegionActor = World->SpawnActor<ARewardRegion>(UMazeLoader::GetActorBlueprintClass("/Game/RewardRegionBP.RewardRegionBP"), RegionLocation, RegionRotation);
			}

			if (RegionActor != nullptr)
			{
				RegionActor->SetFolderPath(UMazeLoader::MazeFolderPath);

				RegionActor->SetActorScale3D(RegionScale);
				RegionActor->RegionId = RegionId;
				RegionActor->RewardDeviceId = RewardDeviceId;
				RegionActor->RewardDurationSec = RewardDurationSec;
				RegionActor->IsRewardDispensingEnabled = IsRewardDispensingEnabled;
				RegionActor->SetActorHiddenInGame(!AreRegionsVisible);

				RegionActor->ToneDurationSec = ToneDurationSec;
				RegionActor->TonePitchHz = TonePitchHz;
				RegionActor->ToneVolumeMultiplier = ToneVolumeMultiplier;
				RegionActor->IsToneEnabled = IsToneEnabled;
			}
		}
	}
}

StopConditionsChecker* UMazeLoader::LoadStopConditions(UWorld* World, rapidxml::xml_node<>* MazeNode)
{
	StopConditionsChecker* StopConditions = new StopConditionsChecker();
	rapidxml::xml_node<>* StopConditionsNode = MazeNode->first_node("StopConditions");
	if (StopConditionsNode != nullptr)
	{
		for (rapidxml::xml_node<>* ConditionNode = StopConditionsNode->first_node(); ConditionNode; ConditionNode = ConditionNode->next_sibling())
		{
			if (ConditionNode->first_attribute("TimeLimitSec") != nullptr)
			{
				float TimeLimitSec = UMazeLoader::GetFloatFromAttribute(ConditionNode, "TimeLimitSec", 0.0f);
				StopConditions->AddStopCondition(new TimeLimitStopCondition(TimeLimitSec, World->GetTimeSeconds()));
			}
			else if (ConditionNode->first_attribute("EnterRegionDelaySec") != nullptr)
			{
				float EnterRegionDelaySec = UMazeLoader::GetFloatFromAttribute(ConditionNode, "EnterRegionDelaySec", 0.0f);
				TMap<int, int> EnterRegionStopCounts;
				for (rapidxml::xml_node<>* RegionIdNode = ConditionNode->first_node(); RegionIdNode; RegionIdNode = RegionIdNode->next_sibling())
				{
					int RegionId = UMazeLoader::GetIntFromAttribute(RegionIdNode, "RegionId", -1);
					int EnterRegionCount = UMazeLoader::GetIntFromAttribute(RegionIdNode, "EnterRegionCount", 1);
					if (RegionId != -1)
					{
						EnterRegionStopCounts.Add(RegionId, EnterRegionCount);
					}
				}
				UEnterRegionStopCondition* StopCondition = NewObject<UEnterRegionStopCondition>();
				StopCondition->Init(EnterRegionDelaySec, EnterRegionStopCounts);
				StopConditions->AddStopCondition(StopCondition);
			}
		}
	}
	return StopConditions;
}

void UMazeLoader::ClearWorld(UWorld* World)
{
	TArray<AActor*> WorldActors;
	UGameplayStatics::GetAllActorsOfClass(World, AActor::StaticClass(), WorldActors);
	for (AActor* Actor : WorldActors)
	{
		if (Actor->GetFolderPath() == UMazeLoader::MazeFolderPath)
		{
			Actor->Destroy();
		}
	}
}

StopConditionsChecker* UMazeLoader::LoadMaze(UObject* WorldContextObject, FString MazePath)
{
	UWorld* World = WorldContextObject->GetWorld();
	StopConditionsChecker* StopConditionsChecker = nullptr;

	rapidxml::xml_document<>* File = nullptr;
	
	try
	{
		File = UMazeLoader::OpenFile(TCHAR_TO_UTF8(*MazePath));
	}
	catch (rapidxml::parse_error ex)
	{
	}
	catch (std::runtime_error ex)
	{
	}

	if (File != nullptr && World != nullptr)
	{
		rapidxml::xml_node<>* MazeNode = File->first_node("Maze");
		if (MazeNode != nullptr)
		{
			UMazeLoader::ClearWorld(World);
			UMazeLoader::LoadMaze(World, MazeNode);
			UMazeLoader::LoadPlayerStart(World, MazeNode);

			UMazeLoader::LoadObjects(World, MazeNode);
			UMazeLoader::LoadRegions(World, MazeNode);
			StopConditionsChecker = UMazeLoader::LoadStopConditions(World, MazeNode);
		}
	}

	return StopConditionsChecker;
}


