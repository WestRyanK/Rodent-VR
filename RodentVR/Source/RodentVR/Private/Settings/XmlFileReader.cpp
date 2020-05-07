// Fill out your copyright notice in the Description page of Project Settings.


#include "XmlFileReader.h"
#include "PlatformFilemanager.h"
#include "Kismet/KismetMathLibrary.h"
#include "FileHelper.h"
#include "Engine.h"
#include "RapidXML/rapidxml.hpp"
#include "RapidXML/rapidxml_utils.hpp"
#include <string>
#include <stdlib.h>

TSubclassOf<AActor> UXmlFileReader::GetActorBlueprintClass(std::string ActorBlueprintPath)
{
	FString ActorAssetPath(ActorBlueprintPath.c_str());
	FStringAssetReference ActorAssetReference(ActorAssetPath);
	TAssetPtr<UBlueprint> ActorAsset(ActorAssetReference);
	UBlueprint* Actor = ActorAsset.LoadSynchronous();

	TSubclassOf<AActor> BlueprintClass = nullptr;

	if (ActorAsset.IsValid() && Actor != nullptr)
	{
		BlueprintClass = Actor->GeneratedClass;
	}

	return BlueprintClass;
}

UMaterial* UXmlFileReader::GetMaterialFromNode(rapidxml::xml_node<>* MaterialNode)
{
	rapidxml::xml_attribute<>* MaterialAttribute = MaterialNode->first_attribute("MaterialName");
	UMaterial* Material = nullptr;
	if (MaterialAttribute != nullptr)
	{
		std::string MaterialName(MaterialAttribute->value());

		FString MaterialAssetPath(("/Game/Materials/" + MaterialName + "." + MaterialName).c_str());
		FStringAssetReference MaterialAssetReference(MaterialAssetPath);
		TAssetPtr<UMaterial> MaterialAsset(MaterialAssetReference);
		Material = MaterialAsset.LoadSynchronous();

		if (!MaterialAsset.IsValid())
			Material = nullptr;
	}
	return Material;
}

FVector UXmlFileReader::GetVectorFromNode(rapidxml::xml_node<>* Node)
{
	float X = UXmlFileReader::GetFloatFromAttribute(Node, "X", 1.0f);
	float Y = UXmlFileReader::GetFloatFromAttribute(Node, "Y", 1.0f);
	float Z = UXmlFileReader::GetFloatFromAttribute(Node, "Z", 1.0f);

	FVector OutVector(X, Y, Z);

	return OutVector;
}

FText UXmlFileReader::GetTextFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, std::string DefaultValue)
{
	std::string Value = DefaultValue;
	if (Node != nullptr)
	{
		rapidxml::xml_attribute<>* Attribute = Node->first_attribute(AttributeName.c_str());
		if (Attribute != nullptr)
		{
			Value = Attribute->value();
		}
	}

	return FText::FromString(FString(Value.c_str()));
}

float UXmlFileReader::GetFloatFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, float DefaultValue)
{
	float Value = DefaultValue;
	if (Node != nullptr)
	{
		rapidxml::xml_attribute<>* Attribute = Node->first_attribute(AttributeName.c_str());
		if (Attribute != nullptr)
		{
			Value = std::strtof(Attribute->value(), nullptr);
		}
	}

	return Value;
}

bool UXmlFileReader::GetBoolFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, bool DefaultValue)
{
	bool Value = DefaultValue;
	if (Node != nullptr)
	{
		rapidxml::xml_attribute<>* Attribute = Node->first_attribute(AttributeName.c_str());
		if (Attribute != nullptr)
		{
			if (std::string(Attribute->value()) == "True" || std::string(Attribute->value()) == "true" || std::string(Attribute->value()) == "1")
			{
				Value = true;
			}
			else
			{
				Value = false;
			}
		}
	}

	return Value;
}

int UXmlFileReader::GetIntFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, int DefaultValue)
{
	int Value = DefaultValue;
	if (Node != nullptr)
	{
		rapidxml::xml_attribute<>* Attribute = Node->first_attribute(AttributeName.c_str());
		if (Attribute != nullptr)
		{
			Value = (int)std::strtol(Attribute->value(), nullptr, 10);
		}
	}

	return Value;
}

FRotator UXmlFileReader::GetRotatorFromNode(rapidxml::xml_node<>* Node)
{
	float AngleY = GetFloatFromAttribute(Node, "AngleY", 0.0f);
	float AngleZ = GetFloatFromAttribute(Node, "AngleZ", 0.0f);
	float AngleX = GetFloatFromAttribute(Node, "AngleX", 0.0f);

	if (AngleX == 0.0f && AngleY == 0.0f && AngleZ == 0.0f)
	{
		AngleZ = GetFloatFromAttribute(Node, "Angle", 0.0f);
	}

	FRotator Rotation(AngleY, AngleZ, AngleX);
	return Rotation;
}

rapidxml::xml_document<>* UXmlFileReader::OpenFile(std::string FilePath)
{
	const char* FilePathCString = FilePath.c_str();
	rapidxml::file<>* xmlFile = new rapidxml::file<>(FilePathCString);
    rapidxml::xml_document<>* doc = new rapidxml::xml_document<>();
	doc->parse<0>(xmlFile->data());
	return doc;
}

