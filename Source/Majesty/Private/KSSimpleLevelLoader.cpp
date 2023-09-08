#include "KSSimpleLevelLoader.h"

AKSSimpleLevelLoader::AKSSimpleLevelLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AKSSimpleLevelLoader::StreamingLevelLoaded_Implementation() {
}

ULevelStreamingDynamic* AKSSimpleLevelLoader::SimpleLoadKSLevel(UObject* WorldContextObject, const FString& levelName, const FVector& Location, const FRotator& Rotation, bool& bOutSuccess) {
    return NULL;
}

void AKSSimpleLevelLoader::SetStreaming(ULevelStreamingDynamic* Stream) {
}

bool AKSSimpleLevelLoader::IsLoaded() {
    return false;
}

AKSSimpleLevelLoader* AKSSimpleLevelLoader::GetInstance() {
    return NULL;
}


