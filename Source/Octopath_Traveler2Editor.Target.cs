using UnrealBuildTool;

public class Octopath_Traveler2EditorTarget : TargetRules {
	public Octopath_Traveler2EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		bOverrideBuildEnvironment = true;
		GlobalDefinitions.Add("STATS=0");
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Majesty",
		});
	}
}
