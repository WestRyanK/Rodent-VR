// Fill out your copyright notice in the Description page of Project Settings.


#include "HeatmapTextureGenerator.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Math/IntPoint.h"


// https://forums.unrealengine.com/development-discussion/c-gameplay-programming/1018-the-right-way-to-dynamically-update-a-texture
// https://ue4community.wiki/legacy/dynamic-textures-a5iczbuy
UTexture2D* UHeatmapTextureGenerator::CreateHeatmapTexture(FVector HeatmapStart, FVector HeatmapEnd, int BucketSize, TArray<UBehaviorSnapshot*> Snapshots, UColorGradient* ColorGradient)
{
	FIntPoint HeatmapSize = UHeatmapTextureGenerator::GetHeatmapSize(HeatmapStart, HeatmapEnd);
	FIntPoint HeatmapBucketsCount = UHeatmapTextureGenerator::GetHeatmapBucketsCount(HeatmapSize, BucketSize);

	TArray<float> Buckets = UHeatmapTextureGenerator::CreateBucketsFromSnapshots(HeatmapStart, HeatmapBucketsCount, BucketSize, Snapshots);
	UTexture2D* HeatmapTexture = UTexture2D::CreateTransient(HeatmapSize.X, HeatmapSize.Y);
	FTexture2DMipMap& Mip = HeatmapTexture->PlatformData->Mips[0];
	uint8* Data = (uint8*)(Mip.BulkData.Lock(LOCK_READ_WRITE));
	//FColor* Data = static_cast<FColor*>(Mip.BulkData.Lock(LOCK_READ_WRITE));

	UHeatmapTextureGenerator::DrawHeatmapInTextureData(Buckets, HeatmapBucketsCount, BucketSize, HeatmapSize, Data, ColorGradient);

	Mip.BulkData.Unlock();
	HeatmapTexture->UpdateResource();
	return HeatmapTexture;
}

TArray<float> UHeatmapTextureGenerator::CreateBucketsFromSnapshots(FVector HeatmapStart, FIntPoint HeatmapBucketsCount, int BucketSize, TArray<UBehaviorSnapshot*> Snapshots)
{
	TArray<float> Buckets = TArray<float>();
	Buckets.Init(0, HeatmapBucketsCount.X * HeatmapBucketsCount.Y);

	for (UBehaviorSnapshot* Snapshot : Snapshots)
	{
		FVector Position = Snapshot->GetPosition();
		FIntPoint BucketIndex = UHeatmapTextureGenerator::GetBucketIndex(HeatmapStart, BucketSize, Position);
		Buckets[BucketIndex.Y * HeatmapBucketsCount.X + BucketIndex.X] += 1;
	}

	return Buckets;
}

FIntPoint UHeatmapTextureGenerator::GetBucketIndex(FVector HeatmapStart, int BucketSize, FVector Position)
{
	FIntVector BucketIndexVector = FIntVector((Position - HeatmapStart) / BucketSize);
	FIntPoint BucketIndex = FIntPoint(BucketIndexVector.X, BucketIndexVector.Y);
	return BucketIndex;
}

FIntPoint UHeatmapTextureGenerator::GetHeatmapBucketsCount(FIntPoint HeatmapSize, int BucketSize)
{
	FIntPoint HeatmapBucketsCount = FIntPoint(ceil(HeatmapSize.X / (float)BucketSize), ceil(HeatmapSize.Y / (float)BucketSize));
	return HeatmapBucketsCount;
}

FIntPoint UHeatmapTextureGenerator::GetHeatmapSize(FVector HeatmapStart, FVector HeatmapEnd)
{
	FVector HeatmapBoundsSize = HeatmapEnd - HeatmapStart;
	FIntPoint HeatmapSize = FIntPoint(HeatmapBoundsSize.X, HeatmapBoundsSize.Y);
	return HeatmapSize;
}


void UHeatmapTextureGenerator::DrawHeatmapInTextureData(TArray<float> Buckets, FIntPoint BucketsCount, int BucketSize, FIntPoint HeatmapSize, uint8* Data, UColorGradient* ColorGradient)
//void UHeatmapTextureGenerator::DrawHeatmapInTextureData(TArray<float> Buckets, FIntPoint BucketsCount, int BucketSize, FIntPoint HeatmapSize, FColor* Data, UColorGradient* ColorGradient)
{
	int PIXEL_SIZE = 4;
	int BucketsWidth = BucketsCount.X;
	int BucketsHeight = BucketsCount.Y;
	for (int BucketY = 0; BucketY < BucketsHeight; BucketY++)
	{
		// int BucketYOffset = BucketY * BucketsWidth * BucketSize * BucketSize; // This is incorrect because the final bucket in each row may extend further than the Heatmap's width.
		// Similar to the idea of stride in an image.
		int BucketYOffset = BucketY * HeatmapSize.X * BucketSize * PIXEL_SIZE;
		for (int BucketX = 0; BucketX < BucketsWidth; BucketX++)
		{
			int BucketXOffset = BucketX * BucketSize * PIXEL_SIZE;

			float BucketValue = Buckets[BucketY * BucketsWidth + BucketX];
			FLinearColor BucketLinearColor = ColorGradient->GetColorAtValue(BucketValue);
			FColor BucketColor = FColor((int)(BucketLinearColor.R * 255), (int)(BucketLinearColor.G * 255), (int)(BucketLinearColor.B * 255), 255);

			// The buckets on the bottom of the image may go off the end.
			int MaxY = BucketSize;
			if (BucketY == BucketsHeight - 1)
			{
				MaxY = HeatmapSize.Y % BucketSize;
			}
			for (int Y = 0; Y < MaxY; Y++)
			{
				int YOffset = Y * HeatmapSize.X * PIXEL_SIZE;

				// The buckets on the right of the image may go off the end.
				int MaxX = BucketSize;
				if (BucketX == BucketsWidth - 1)
				{
					MaxX = HeatmapSize.X % BucketSize;
				}
				for (int X = 0; X < MaxX; X++)
				{
					int Index = BucketYOffset + BucketXOffset + YOffset + X * PIXEL_SIZE;
					Data[Index + 0] = BucketColor.B;
					Data[Index + 1] = BucketColor.G;
					Data[Index + 2] = BucketColor.R;
					Data[Index + 3] = BucketColor.A;
				}
			}
		}
	}
	//int PIXEL_WIDTH = 4;
	//int Height = HeatmapSize.Y;
	//int Width = HeatmapSize.X;
	//FVector HeatmapStart = FVector(0, 0, 0);
	//for (int y = 0; y < Height; y++)
	//{
	//	for (int x = 0; x < Width; x++)
	//	{
	//		int B = 0;
	//		int G = 0;
	//		int R = 0;
	//		int A = 255;
	//		FIntPoint BucketIndex = UHeatmapTextureGenerator::GetBucketIndex(HeatmapStart, BucketSize, FVector(x, y, 0));
	//		float BucketValue = Buckets[BucketIndex.Y * BucketsCount.X + BucketIndex.X];
	//		R = BucketValue * 25;

	//		Data[y * Width * PIXEL_WIDTH + x * PIXEL_WIDTH + 0] = B;
	//		Data[y * Width * PIXEL_WIDTH + x * PIXEL_WIDTH + 1] = G;
	//		Data[y * Width * PIXEL_WIDTH + x * PIXEL_WIDTH + 2] = R;
	//		Data[y * Width * PIXEL_WIDTH + x * PIXEL_WIDTH + 3] = A;
	//	}
	//}
}
