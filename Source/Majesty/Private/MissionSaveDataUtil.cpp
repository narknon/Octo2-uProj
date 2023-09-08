#include "MissionSaveDataUtil.h"

UMissionSaveDataUtil::UMissionSaveDataUtil() {
}

bool UMissionSaveDataUtil::SetSubStoryState(int32 AreaID, int32 missionSaveDataIndex, int32 State) {
    return false;
}

bool UMissionSaveDataUtil::SetSubStoryOrder(int32 MissionIndex) {
    return false;
}

void UMissionSaveDataUtil::SetSubStoryNewFlag(int32 AreaID, int32 missionSaveDataIndex, bool bNewFlag) {
}

bool UMissionSaveDataUtil::SetSubStoryMarker(int32 AreaID, int32 missionSaveDataIndex, int32 MapID, FVector MarkerPos) {
    return false;
}

bool UMissionSaveDataUtil::SetSubStoryClearIndex(int32 AreaID, int32 missionSaveDataIndex, int32 ClearIndex) {
    return false;
}

bool UMissionSaveDataUtil::SetSubMissionData(int32 AreaID, FSaveMissionData newSubMissionData) {
    return false;
}

void UMissionSaveDataUtil::SetMainMissionProgressCount(int32 CharacterID, int32 progressCount) {
}

void UMissionSaveDataUtil::SetExtraStoryProgressCount(int32 ExStoryCategory, int32 progressCount) {
}

bool UMissionSaveDataUtil::ResetSubStoryOrder() {
    return false;
}

int32 UMissionSaveDataUtil::GetSubStoryState(int32 AreaID, int32 missionSaveDataIndex) {
    return 0;
}

bool UMissionSaveDataUtil::GetSubStoryOrder(TArray<int32>& outSubMissionOrder) {
    return false;
}

bool UMissionSaveDataUtil::GetSubStoryNewFlag(int32 AreaID, int32 missionSaveDataIndex) {
    return false;
}

void UMissionSaveDataUtil::GetSubStoryMarkerInMap(int32 MapID, TArray<int32>& outAreaID, TArray<int32>& outMissionSaveDataIndex, TArray<FVector>& outMarkerPos) {
}

int32 UMissionSaveDataUtil::GetSubStoryClearIndex(int32 AreaID, int32 missionSaveDataIndex) {
    return 0;
}

bool UMissionSaveDataUtil::GetSubMissionData(int32 AreaID, FSaveMissionData& outSubMissionData) {
    return false;
}

int32 UMissionSaveDataUtil::GetMainMissionProgressCount_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UMissionSaveDataUtil::GetExtraStoryProgressCount(int32 ExStoryCategory) {
    return 0;
}


