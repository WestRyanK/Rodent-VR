// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;

public class RodentVR : ModuleRules
{
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}

	private string ThirdPartyPath
	{
		get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
	}

	public RodentVR(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		LoadNIDAQmx(Target);

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}

	private bool LoadNIDAQmx(ReadOnlyTargetRules Target)
	{
		const string nidaq = "NIDAQmx";
		bool isLibrarySupported = false;
		if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
		{
			isLibrarySupported = true;
			string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";
			string LibrariesPath = Path.Combine(ThirdPartyPath, nidaq, "Libraries");
			/*
			test your path with:
			using System; // Console.WriteLine("");
			Console.WriteLine("... LibrariesPath -> " + LibrariesPath);
			*/
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, nidaq + ".lib"));
			//PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, nidaq + "." + PlatformString + ".lib"));
		}
		if (isLibrarySupported)
		{
			// Include path
			PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, nidaq, "Includes"));
		}
		PublicDefinitions.Add(string.Format("WITH_" + nidaq + "_BINDING={0}", isLibrarySupported ? 1 : 0));
		return isLibrarySupported;
	}
}
