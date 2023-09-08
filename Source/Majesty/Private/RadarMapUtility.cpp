#include "RadarMapUtility.h"

URadarMapUtility::URadarMapUtility() {
}

bool URadarMapUtility::Setup() {
    return false;
}

void URadarMapUtility::RefreshRadarMap() {
}

void URadarMapUtility::NotifyRadarMapDb(FName dbName, EDBNoticeType notice) {
}

void URadarMapUtility::GetSubStoryDestinationLevelTriggerInLevel(TArray<ELevelTriggerID>& outMainStoryLvTrigIdList, TArray<ELevelTriggerID>& outSubStoryLvTrigIdList, FName levelName) {
}

void URadarMapUtility::GetDestinationSubPlacementInLevel(TArray<FRadarMapDisplayData>& outIconPlacement, FName levelName) {
}

void URadarMapUtility::GetDestinationPlacementInLevel(TArray<FRadarMapDisplayData>& outIconPlacement, FName levelName) {
}

void URadarMapUtility::GetDestinationLevelTriggerInLevel(TArray<ELevelTriggerID>& outLevelTriggerIdList, FName levelName) {
}

bool URadarMapUtility::GetDestinationDataByMainStory(FRadarMapDestinationData& OutRow, FName MainStory, FName levelName, LEVEL_AREA_TYPE LevelAreaType) {
    return false;
}

bool URadarMapUtility::GetDestinationData(FRadarMapDestinationData& OutRow, FName Label) {
    return false;
}


