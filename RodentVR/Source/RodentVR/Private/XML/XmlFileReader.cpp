// Fill out your copyright notice in the Description page of Project Settings.


#include "XML/XmlFileReader.h"
#include "PlatformFilemanager.h"
#include "Kismet/KismetMathLibrary.h"
#include "FileHelper.h"
#include "XML/RapidXML/rapidxml.hpp"
#include "XML/RapidXML/rapidxml_utils.hpp"
#include "Misc/Paths.h"
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

UDevice* UXmlFileReader::GetDeviceFromNode(rapidxml::xml_node<>* Node)
{
	if (Node != nullptr)
	{
		FString DeviceId = UXmlFileReader::GetStringFromAttribute(Node, "DeviceId", "");
		FString DeviceName = UXmlFileReader::GetStringFromAttribute(Node, "DeviceName", "");
		FString DevicePort = UXmlFileReader::GetStringFromAttribute(Node, "DevicePort", "");
		FString DeviceLine = UXmlFileReader::GetStringFromAttribute(Node, "DeviceLine", "");
		UDevice* Device = NewObject<UDevice>();
		Device->SetDeviceId(DeviceId);
		Device->SetDeviceName(DeviceName);
		Device->SetDevicePort(DevicePort);
		Device->SetDeviceLine(DeviceLine);
		return Device;
	}

	return nullptr;
}

UTextureSettings* UXmlFileReader::GetTextureSettingsFromNode(rapidxml::xml_node<>* Node)
{
	if (Node != nullptr)
	{
		FString Texture = UXmlFileReader::GetStringFromAttribute(Node, "Texture", "");
		FString CustomTexturePath = UXmlFileReader::GetStringFromAttribute(Node, "CustomTexturePath", "");
		UTextureSettings* TextureSettings = NewObject<UTextureSettings>();
		TextureSettings->SetTexture(UTextureSettings::GetTextureEnumFromString(Texture));
		TextureSettings->SetCustomTexturePath(CustomTexturePath);

		return TextureSettings;
	}

	return NewObject<UTextureSettings>();
}

FVector UXmlFileReader::GetVectorFromNode(rapidxml::xml_node<>* Node)
{
	float X = UXmlFileReader::GetFloatFromAttribute(Node, "X", 1.0f);
	float Y = UXmlFileReader::GetFloatFromAttribute(Node, "Y", 1.0f);
	float Z = UXmlFileReader::GetFloatFromAttribute(Node, "Z", 1.0f);

	FVector OutVector(X, Y, Z);

	return OutVector;
}

FString UXmlFileReader::GetStringFromAttribute(rapidxml::xml_node<>* Node, std::string AttributeName, std::string DefaultValue)
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

	return FString(Value.c_str());
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

	FRotator Rotation(AngleY, AngleZ, AngleX); // Pitch, Yaw, Roll
	return Rotation;
}

rapidxml::xml_document<>* UXmlFileReader::OpenFile(std::string FilePath)
{
	if (FPaths::FileExists(UTF8_TO_TCHAR(FilePath.c_str())))
	{
		const char* FilePathCString = FilePath.c_str();
		rapidxml::file<>* xmlFile = new rapidxml::file<>(FilePathCString);
		rapidxml::xml_document<>* doc = new rapidxml::xml_document<>();
		doc->parse<0>(xmlFile->data());
		return doc;
	}
	else
	{
		return nullptr;
	}
}


void UXmlFileReader::GetActorSettingsFromNode(rapidxml::xml_node<>* Node, UActorSettings* ActorSettings)
{
	FVector ActorSettingsLocation = UXmlFileReader::GetVectorFromNode(Node->first_node("Position"));
	FRotator ActorSettingsRotation = UXmlFileReader::GetRotatorFromNode(Node->first_node("Rotation"));
	FVector ActorSettingsScale = UXmlFileReader::GetVectorFromNode(Node->first_node("Scale"));

	ActorSettings->SetPosition(ActorSettingsLocation);
	ActorSettings->SetRotation(ActorSettingsRotation);
	ActorSettings->SetScale(ActorSettingsScale);
}

UToneGenerationSettings* UXmlFileReader::GetToneGenerationSettingsFromNode(rapidxml::xml_node<>* Node)
{
	if (Node != nullptr)
	{
		bool IsToneGenerationEnabled = UXmlFileReader::GetBoolFromAttribute(Node, "IsToneGenerationEnabled", false);
		float ToneDurationSec = UXmlFileReader::GetFloatFromAttribute(Node, "ToneDurationSec", 1.0f);
		float TonePitchHz = UXmlFileReader::GetFloatFromAttribute(Node, "TonePitchHz", 440.0f);
		float ToneVolumePercent = UXmlFileReader::GetFloatFromAttribute(Node, "ToneVolumePercent", 1.0f);

		UToneGenerationSettings* ToneGenerationSettings = NewObject<UToneGenerationSettings>();
		ToneGenerationSettings->SetIsToneGenerationEnabled(IsToneGenerationEnabled);
		ToneGenerationSettings->SetToneDurationSec(ToneDurationSec);
		ToneGenerationSettings->SetTonePitchHz(TonePitchHz);
		ToneGenerationSettings->SetToneVolumePercent(ToneVolumePercent);
		return ToneGenerationSettings;
	}

	return nullptr;
}
