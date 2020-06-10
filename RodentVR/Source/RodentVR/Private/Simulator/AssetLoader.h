// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "AssetRegistryModule.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "AssetLoader.generated.h"

/**
 *
 */
UCLASS()
class UAssetLoader : public UObject
{
	GENERATED_BODY()

private:
	static FAssetRegistryModule& AssetRegistryModule;

public:
	static EImageFormat GetImageFormatFromFileName(const FString& FileName);
	static UTexture2D* LoadTextureFromFile(const FString& FileName, bool& IsValid, int32& Width, int32& Height);
	static UMaterialInstanceDynamic* LoadMaterialInstanceFromTextureFile(const FString& FileName, UObject* OuterObject);
	static TArray<FAssetData> GetAssetsInPath(FString AssetPath);
	template <class T>
	static T* LoadAssetFromPath(FString ActorAssetPath)
	{
		FStringAssetReference AssetReference(ActorAssetPath);
		TAssetPtr<T> Asset(AssetReference);
		T* AssetObject = Asset.LoadSynchronous();

		return AssetObject;
	}

};
