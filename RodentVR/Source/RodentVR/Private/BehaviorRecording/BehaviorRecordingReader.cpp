// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorRecordingReader.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Misc/CString.h"


void UBehaviorRecordingReader::LoadBehaviorRecordingFromFile(
	UObject* OuterObject,
	FString BehaviorRecordingFileName,
	FString& SettingsFileName,
	FString& MazeFileName,
	int32 LoadEveryNthSnapshot,
	TArray<UBehaviorSnapshot*>& BehaviorSnapshots)
{
	LoadEveryNthSnapshot = FMath::Max(1, LoadEveryNthSnapshot);

	if (FPaths::FileExists(BehaviorRecordingFileName))
	{
		TArray<FString> FileLines;
		bool WasSuccessful = FFileHelper::LoadANSITextFileToStrings(*BehaviorRecordingFileName, NULL, FileLines);
		if (WasSuccessful)
		{
			SettingsFileName = FileLines[0];
			MazeFileName = FileLines[1];
			BehaviorSnapshots.Empty();
			for (int i = 3; i < FileLines.Num() - 1; i += LoadEveryNthSnapshot)
			{
				TArray<FString> SplitLine;
				FileLines[i].ParseIntoArray(SplitLine, TEXT("\t"), false);
				int j = 0;
				float Timestamp = FCString::Atof(*SplitLine[j++]);
				FString CurrentRegion = SplitLine[j++];
				float PositionX = FCString::Atof(*SplitLine[j++]);
				float PositionY = FCString::Atof(*SplitLine[j++]);
				float PositionZ = FCString::Atof(*SplitLine[j++]);
				float ForwardX = FCString::Atof(*SplitLine[j++]);
				float ForwardY = FCString::Atof(*SplitLine[j++]);
				float ForwardZ = FCString::Atof(*SplitLine[j++]);
				FVector Position = FVector(PositionX, PositionY, PositionZ);
				FVector Forward = FVector(ForwardX, ForwardY, ForwardZ);

				UBehaviorSnapshot* Snapshot = UBehaviorSnapshot::CreateBehaviorSnapshot(OuterObject, Timestamp, Position, Forward, CurrentRegion);

				BehaviorSnapshots.Add(Snapshot);
			}
		}
	}
}
