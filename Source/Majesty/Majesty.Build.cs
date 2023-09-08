using UnrealBuildTool;


public class Majesty : ModuleRules {
    public Majesty(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioExtensions",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "Chaos",
            "CinematicCamera",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PacketHandler",
            "Paper2D",
            "PhysicsCore",
            "PropertyAccess",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "StaticMeshDescription",
            "UMG", "JSONQuery", "CriWareMovieScenes",
        });
    }
}
