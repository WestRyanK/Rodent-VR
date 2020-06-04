// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Maze.generated.h"

UCLASS()
class AMaze : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMaze();

private:
	UPROPERTY(BlueprintGetter = GetMazeName, BlueprintSetter = SetMazeName)
		FString MazeName;
	UPROPERTY()
		class UStaticMeshComponent* StaticMesh;
	UPROPERTY(BlueprintGetter = GetTextures, BlueprintSetter = SetTextures)
		TMap<FString, FString> Textures;

public:
	UFUNCTION(BlueprintGetter)
		FString GetMazeName();
	UFUNCTION(BlueprintSetter)
		void SetMazeName(FString MazeNameValue);
	UFUNCTION(BlueprintGetter)
		TMap<FString, FString> GetTextures();
	UFUNCTION(BlueprintSetter)
		void SetTextures(TMap<FString, FString> TexturesValue);

	void UpdateMaze();

	UFUNCTION(BlueprintPure)
		static FName GetMazeTag();

	static FName MazeTag;

};
