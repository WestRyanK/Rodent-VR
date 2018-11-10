// Ryan West 2018

using System.IO;
namespace UnrealBuildTool.Rules
{
	public class BallInputDevicePlugin : ModuleRules
	{

		public BallInputDevicePlugin(ReadOnlyTargetRules Target) : base(Target)
		{
			PublicIncludePaths.AddRange(new string[] {
				"BallInputDevicePlugin/Public" });
			PrivateIncludePaths.AddRange(new string[] {
				"BallInputDevicePlugin/Private" });
			PublicDependencyModuleNames.AddRange(new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"Slate",
				"SlateCore",
				"InputDevice" });
			PrivateDependencyModuleNames.AddRange(new string[] { });
			DynamicallyLoadedModuleNames.AddRange(new string[] { });
		}
	}
}