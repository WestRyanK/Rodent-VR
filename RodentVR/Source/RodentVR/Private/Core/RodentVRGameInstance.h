#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Settings/RodentVRSettings.h"
#include "Hardware/ToneGenerator/ToneGenerator.h"
#include "Settings/MazeSettings.h"
#include "RodentVRGameInstance.generated.h"

UENUM(BlueprintType)
enum class PageEnum : uint8
{
	MAINMENU UMETA(DisplayName = "MainMenu"),
	OPTIONS UMETA(DisplayName = "Options"),
	OPTIONS_PLAYLIST UMETA(DisplayName = "Options - Playlist"),
	EDITOR UMETA(DisplayName = "Editor"),
	SIMULATOR UMETA(DisplayName = "Simulator"),
	BEHAVIORAL_ANALYSIS UMETA(DisplayName = "Behavioral Analysis"),
	EXIT UMETA(DisplayName = "Exit")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSettingsLoadedDelegate);

/**
 *
 */
UCLASS(Blueprintable)
class URodentVRGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetRodentVRSettings, BlueprintSetter = SetRodentVRSettings)
		URodentVRSettings* RodentVRSettings;
	UPROPERTY(BlueprintGetter = GetCurrentMaze, BlueprintSetter = SetCurrentMaze)
		UMazeSettings* CurrentMaze;
	UPROPERTY(BlueprintGetter = GetCurrentPage)
		PageEnum CurrentPage;
	UPROPERTY()
		UToneGenerator* ToneGenerator;
	UPROPERTY(BlueprintGetter = GetSettingsModified, BlueprintSetter = SetSettingsModified)
		bool SettingsModified;
	UPROPERTY(BlueprintGetter = GetIgnoreSettingsChanged, BlueprintSetter = SetIgnoreSettingsChanged)
		bool IgnoreSettingsChanged;

	UFUNCTION()
		void OnRodentVRSettingsChanged();

public:
	UFUNCTION(BlueprintGetter)
		URodentVRSettings* GetRodentVRSettings();
	UFUNCTION(BlueprintSetter)
		void SetRodentVRSettings(URodentVRSettings* RodentVRSettingsValue);
	UFUNCTION(BlueprintGetter)
		UMazeSettings* GetCurrentMaze();
	UFUNCTION(BlueprintSetter)
		void SetCurrentMaze(UMazeSettings* CurrentMazeValue);

	UFUNCTION(BlueprintGetter)
		bool GetSettingsModified();
	UFUNCTION(BlueprintSetter)
		void SetSettingsModified(bool SettingsModifiedValue);
	UFUNCTION(BlueprintGetter)
		bool GetIgnoreSettingsChanged();
	UFUNCTION(BlueprintSetter)
		void SetIgnoreSettingsChanged(bool IgnoreSettingsChangedValue);

	UFUNCTION(BlueprintCallable)
		void LoadGame();
	UFUNCTION(BlueprintCallable)
		void SaveGame();

	UFUNCTION(BlueprintGetter)
		PageEnum GetCurrentPage();
	UFUNCTION(BlueprintCallable)
		void GoToPage(PageEnum Page);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UToneGenerator* GetToneGenerator(UObject* WorldContextObject);

	UPROPERTY(BlueprintAssignable)
		FSettingsLoadedDelegate OnSettingsLoadedDelegate;

	UFUNCTION(BlueprintCallable)
		void OnSettingsLoaded();

	virtual void Init() override;
};
