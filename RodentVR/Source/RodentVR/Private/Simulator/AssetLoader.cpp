// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetLoader.h"
#include "AssetRegistryModule.h"

FAssetRegistryModule& UAssetLoader::AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
TMap<TextureEnum, FString> UAssetLoader::TextureToTexturePath = TMap<TextureEnum, FString>();

EImageFormat UAssetLoader::GetImageFormatFromFileName(const FString& FileName)
{
	TArray<FString> SplitFileName;
	FileName.ParseIntoArray(SplitFileName, TEXT("."));
	if (SplitFileName.Num() > 0)
	{
		FString Extension = SplitFileName.Last(0).ToLower();
		if (Extension == TEXT("png"))
		{
			return EImageFormat::PNG;
		}
		else if (Extension == TEXT("jpg") || Extension == TEXT("jpeg"))
		{
			return EImageFormat::JPEG;
		}
	}
	return EImageFormat::Invalid;
}

UTexture2D* UAssetLoader::LoadTexture(TextureEnum Texture)
{
	UAssetLoader::LoadTextureToTexturePathMap();
	FString* TexturePathName = UAssetLoader::TextureToTexturePath.Find(Texture);
	if (TexturePathName != nullptr)
	{
		UTexture2D* Texture2D = UAssetLoader::LoadAssetFromPath<UTexture2D>(TEXT("Texture2D'/Game/Materials/Textures/" + *TexturePathName + "." + *TexturePathName));
		return Texture2D;
	}
	else
	{
		return nullptr;
	}
}

UTexture2D* UAssetLoader::LoadTextureFromSettings(UTextureSettings* TextureSettings)
{
	if (IsValid(TextureSettings))
	{
		TextureEnum Texture = TextureSettings->GetTexture();
		if (Texture == TextureEnum::CUSTOM)
		{
			bool IsValid;
			int Width, Height;
			return UAssetLoader::LoadTextureFromFile(TextureSettings->GetCustomTexturePath(), IsValid, Width, Height);
		}
		else
		{
			return UAssetLoader::LoadTexture(Texture);
		}
	}
	else
	{
		return UAssetLoader::LoadTexture(TextureEnum::GRAY);
	}
}

UTexture2D* UAssetLoader::LoadTextureFromFile(const FString& FileName, bool& IsValid, int32& Width, int32& Height)
{
	IsValid = false;
	UTexture2D* LoadedT2D = NULL;

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(UAssetLoader::GetImageFormatFromFileName(FileName));

	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FileName)) return NULL;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		TArray<uint8> UncompressedBGRA;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
		{
			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

			//Valid?
			if (!LoadedT2D) return NULL;
			//~~~~~~~~~~~~~~

			//Out!
			Width = ImageWrapper->GetWidth();
			Height = ImageWrapper->GetHeight();

			//Copy!
			void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
			LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			//Update!
			LoadedT2D->UpdateResource();
		}
	}

	// Success!
	IsValid = true;
	return LoadedT2D;
}

UMaterialInstanceDynamic* UAssetLoader::LoadMaterialFromTexture(UTexture2D* Texture, UObject* OuterObject)
{
	if (!IsValid(Texture))
	{
		Texture = UAssetLoader::LoadAssetFromPath<UTexture2D>(TEXT("Texture2D'/Game/Materials/Textures/TextureGray.TextureGray"));
	}

	UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/Materials/M_Textured.M_Textured");
	UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, OuterObject);
	DynamicMaterial->SetTextureParameterValue(FName("Material Texture"), Texture);
	DynamicMaterial->SetScalarParameterValue(FName("Is Highlighted"), 0.0);
	return DynamicMaterial;
}

UMaterialInstanceDynamic* UAssetLoader::LoadMaterial(UTextureSettings* TextureSettings, UObject* OuterObject)
{
	UTexture2D* Texture = UAssetLoader::LoadTextureFromSettings(TextureSettings);
	return UAssetLoader::LoadMaterialFromTexture(Texture, OuterObject);
}

TArray<TextureEnum> UAssetLoader::GetBuiltInTextures()
{
	UAssetLoader::LoadTextureToTexturePathMap();
	TArray<TextureEnum> TextureNames;
	UAssetLoader::TextureToTexturePath.GetKeys(TextureNames);

	return TextureNames;
}

TArray<FAssetData> UAssetLoader::GetAssetsInPath(FString AssetPath)
{
	TArray<FAssetData> AssetsInPath;
	TArray<FString> AssetPathsInPath;
	UAssetLoader::AssetRegistryModule.Get().GetAssetsByPath(FName(*AssetPath), AssetsInPath);
	return AssetsInPath;
}

void UAssetLoader::LoadTextureToTexturePathMap()
{
	if (UAssetLoader::TextureToTexturePath.Num() == 0)
	{
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::CHECKERS_LARGE, TEXT("TextureCheckerLarge"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::CHECKERS_MEDIUM, TEXT("TextureCheckerMedium"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::CHECKERS_SMALL, TEXT("TextureCheckerSmall"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::STRIPES_LARGE, TEXT("TextureStripesLarge"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::STRIPES_SMALL, TEXT("TextureStripesSmall"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::DOTS_1, TEXT("TextureDots1"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::DOTS_2, TEXT("TextureDots2"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::BLACK, TEXT("TextureBlack"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::WHITE, TEXT("TextureWhite"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::GRAY, TEXT("TextureGray"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::GREEN, TEXT("TextureGreen"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::BLUE, TEXT("TextureBlue"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::CYAN, TEXT("TextureCyan"));
		UAssetLoader::TextureToTexturePath.Add(TextureEnum::CUSTOM, TEXT("TextureCustom"));
	}
}

