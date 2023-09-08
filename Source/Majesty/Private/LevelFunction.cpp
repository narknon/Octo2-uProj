#include "LevelFunction.h"

ULevelFunction::ULevelFunction() {
}

FPlayerLocation ULevelFunction::MakeCurrentPlayerLocation() {
    return FPlayerLocation{};
}

bool ULevelFunction::IsSameLevelArea(UObject* WorldContextObject, FVector Pos, LEVEL_AREA_TYPE AreaType) {
    return false;
}

bool ULevelFunction::IsPlayableLevelChange() {
    return false;
}

FName ULevelFunction::GetTimeZoneChangeSeLabelInCurrentLevel() {
    return NAME_None;
}

FCameraLockParams ULevelFunction::GetLevelTriggerCameraLockParams(UObject* WorldContextObject, ELevelTriggerID LevelTriggerID) {
    return FCameraLockParams{};
}

LEVEL_AREA_TYPE ULevelFunction::GetLevelArea(UObject* WorldContextObject, FVector CheckPos) {
    return LEVEL_AREA_TYPE::NONE;
}

void ULevelFunction::GetLandObject(UObject* WorldContextObject, FVector StartLocation, float Length, AActor*& HitActor, FHitResult& OutHit) {
}

ALevelTriggerActor* ULevelFunction::FindLevelTriggerByTriggerId(UObject* WorldContextObject, ELevelTriggerID LevelTriggerID) {
    return NULL;
}

void ULevelFunction::Debug_SetExcludeSpecifiyMapVisited(bool bVisited, FName levelLabel) {
}

void ULevelFunction::Debug_SetAllMapVisited(bool bVisited) {
}

void ULevelFunction::Debug_GetAllMapLabels(TArray<FName>& OutMapLabels) {
}

LEVEL_AREA_TYPE ULevelFunction::CheckContainedLevelArea(const FVector& CheckPos) {
    return LEVEL_AREA_TYPE::NONE;
}


