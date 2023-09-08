#include "LevelSaveDataUtil.h"

ULevelSaveDataUtil::ULevelSaveDataUtil() {
}

void ULevelSaveDataUtil::SetVisitedMap(bool bVisited, int32 MapID) {
}

void ULevelSaveDataUtil::SetShowMapIcon(bool bVisited, int32 MapID) {
}

bool ULevelSaveDataUtil::SetMapData(int32 levelId, FMapData NewMapData) {
    return false;
}

void ULevelSaveDataUtil::SetIsVisitedWorldMapPrologueMaskArea(EWorldMapPrologueMaskArea MaskArea, bool IsVisited) {
}

void ULevelSaveDataUtil::SetIsVisitedWorldMapMaskArea(EWorldMapMaskArea MaskArea, bool IsVisited) {
}

void ULevelSaveDataUtil::SetIsVisitedWorldMapIslandLayerArea(EWorldMapIslandLayerArea Area, bool IsVisited) {
}

void ULevelSaveDataUtil::SetCurrentLevelDarkState(ELEVEL_DARK_STATE darkState) {
}

void ULevelSaveDataUtil::SetConnectionValue(int32 TownID, int32 ConnectionValue) {
}

void ULevelSaveDataUtil::ResetLostWayCount() {
}

bool ULevelSaveDataUtil::OpenTreasureBox(int32 levelId, int32 ObjectUniqueID) {
    return false;
}

void ULevelSaveDataUtil::IncreaseLostWayCount() {
}

bool ULevelSaveDataUtil::GetVisitedMap(int32 MapID) {
    return false;
}

bool ULevelSaveDataUtil::GetShowMapIcon(int32 MapID) {
    return false;
}

int32 ULevelSaveDataUtil::GetLostWayCount() {
    return 0;
}

bool ULevelSaveDataUtil::GetIsVisitedWorldMapPrologueMaskArea(EWorldMapPrologueMaskArea MaskArea) {
    return false;
}

bool ULevelSaveDataUtil::GetIsVisitedWorldMapMaskArea(EWorldMapMaskArea MaskArea) {
    return false;
}

bool ULevelSaveDataUtil::GetIsVisitedWorldMapIslandLayerArea(EWorldMapIslandLayerArea Area) {
    return false;
}

ELEVEL_DARK_STATE ULevelSaveDataUtil::GetCurrentLevelDarkState() {
    return ELEVEL_DARK_STATE::NORMAL;
}

int32 ULevelSaveDataUtil::GetConnectionValue(int32 TownID) {
    return 0;
}

bool ULevelSaveDataUtil::FindMapData(int32 levelId, FMapData& FoundMapData) {
    return false;
}

bool ULevelSaveDataUtil::DEBUG_CloseTreasureBox(int32 levelId, int32 ObjectUniqueID) {
    return false;
}

void ULevelSaveDataUtil::AddOrOverrideRevivalObjectSaveData(const FRevivalObjectSaveData& newData) {
}


