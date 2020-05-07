// Fill out your copyright notice in the Description page of Project Settings.


#include "TextureLoader.h"

EImageFormat UTextureLoader::GetFormatFromFileName(const FString& FileName)
{
	TArray<FString> SplitFileName;
	FileName.ParseIntoArray(SplitFileName, TEXT("."));
	FString Extension = SplitFileName.Last(0).ToLower();
	if (Extension == TEXT("png"))
	{
		return EImageFormat::PNG;
	}
	else if (Extension == TEXT("jpg") || Extension == TEXT("jpeg"))
	{
		return EImageFormat::JPEG;
	}
	else
	{
		return EImageFormat::Invalid;
	}
}

UTexture2D* UTextureLoader::LoadTextureFromFile(const FString& FileName, bool& IsValid, int32& Width, int32& Height)
{
	IsValid = false;
	UTexture2D* LoadedT2D = NULL;

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(UTextureLoader::GetFormatFromFileName(FileName));

	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FileName)) return NULL;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		const TArray<uint8>* UncompressedBGRA = NULL;
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
			FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
			LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			//Update!
			LoadedT2D->UpdateResource();
		}
	}

	// Success!
	IsValid = true;
	return LoadedT2D;
}
