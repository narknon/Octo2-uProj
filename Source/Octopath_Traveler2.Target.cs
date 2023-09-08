using UnrealBuildTool;

public class Octopath_Traveler2Target : TargetRules {
	public Octopath_Traveler2Target(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		bOverrideBuildEnvironment = true;
		GlobalDefinitions.Add("STATS=0");
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Majesty",
		});
	}
}
