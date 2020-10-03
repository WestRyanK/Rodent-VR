// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "AssetRegistryModule.h"
#include "Settings/TextureSettings.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "AssetLoader.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class UAssetLoader : public UObject
{
	GENERATED_BODY()

private:
	static FAssetRegistryModule* AssetRegistryModule;
	static TMap<TextureEnum, FString> TextureToTexturePath;
	UFUNCTION()
		static void LoadTextureToTexturePathMap();

	static void LoadAssetRegistryModule();

public:
	UFUNCTION(BlueprintCallable)
		static UMaterialInstanceDynamic* LoadMaterial(UTextureSettings* TextureSettings, UObject* OuterObject);
	UFUNCTION(BlueprintCallable)
		static UMaterialInstanceDynamic* LoadMaterialFromTexture(UTexture2D* Texture, UObject* OuterObject);
	UFUNCTION(BlueprintCallable)
		static UTexture2D* LoadTextureFromFile(const FString& FileName, bool& IsValid, int32& Width, int32& Height);
	UFUNCTION(BlueprintCallable)
		static UTexture2D* LoadTexture(const TextureEnum Texture);
	UFUNCTION(BlueprintCallable)
		static UTexture2D* LoadTextureFromSettings(UTextureSettings* TextureSettings);
	UFUNCTION(BlueprintCallable)
		static TArray<TextureEnum> GetBuiltInTextures();

	static EImageFormat GetImageFormatFromFileName(const FString& FileName);

	static TArray<FAssetData> GetAssetsInPath(FString AssetPath);

	template <class T>
	static T* LoadAssetFromPath(FString ActorAssetPath)
	{
		UAssetLoader::LoadAssetRegistryModule();
		FStringAssetReference AssetReference(ActorAssetPath);
		TAssetPtr<T> Asset(AssetReference);
		T* AssetObject = Asset.LoadSynchronous();

		return AssetObject;
	}

};
