#include "StorySaveDataUtil.h"

UStorySaveDataUtil::UStorySaveDataUtil() {
}

void UStorySaveDataUtil::SetPlayingMainStoryID(int32 PlayerCharaId, int32 MainStoryId) {
}

bool UStorySaveDataUtil::SetMainStoryTaskTimeZoneOnPlayed(int32 mainStoryTaskId, int32 TimezoneType, int32 timeZonePosition) {
    return false;
}

bool UStorySaveDataUtil::SetMainStoryTaskEventObjectFlag(int32 mainStoryTaskId, int32 Index, int32 FlagID, bool Val) {
    return false;
}

void UStorySaveDataUtil::SetMainStoryTaskCleared(int32 mainStoryTaskId, bool bCleared) {
}

void UStorySaveDataUtil::SetMainStoryState(int32 MainStoryId, EStoryState State) {
}

void UStorySaveDataUtil::SetMainStoryRecordNew(int32 mainStoryTaskId, bool bNew) {
}

void UStorySaveDataUtil::SetMainStoryCurrentTaskID(int32 MainStoryId, int32 CurrentTaskID) {
}

void UStorySaveDataUtil::SetInterruptedMainStoryID(int32 PlayerCharaId, int32 MainStoryId) {
}

void UStorySaveDataUtil::SetConfirmedMainStory(int32 MainStoryId, bool Flag) {
}

void UStorySaveDataUtil::SetAutoInterruptMainStoryId_ByPrologue(int32 MainStoryId) {
}

void UStorySaveDataUtil::SetAutoInterruptMainStoryId(int32 MainStoryId) {
}

bool UStorySaveDataUtil::IsUnPlayedMainStory(int32 MainStoryId) {
    return false;
}

bool UStorySaveDataUtil::IsMainStoryTaskCleared(int32 mainStoryTaskId) {
    return false;
}

bool UStorySaveDataUtil::IsConfirmedMainStory(int32 MainStoryId) {
    return false;
}

bool UStorySaveDataUtil::IsCompletedMainStory(int32 MainStoryId) {
    return false;
}

int32 UStorySaveDataUtil::GetPlayingMainStoryID(int32 PlayerCharaId) {
    return 0;
}

int32 UStorySaveDataUtil::GetMainStoryTaskTimeZoneTypeOnPlayed(int32 mainStoryTaskId) {
    return 0;
}

int32 UStorySaveDataUtil::GetMainStoryTaskTimeZonePositionOnPlayed(int32 mainStoryTaskId) {
    return 0;
}

bool UStorySaveDataUtil::GetMainStoryTaskSaveData(int32 mainStoryTaskId, FMainStoryTaskSaveData& outMainStoryTaskSaveData) {
    return false;
}

void UStorySaveDataUtil::GetMainStoryTaskEventObjectFlag(int32 mainStoryTaskId, int32 Index, int32& FlagID, bool& Val) {
}

EStoryState UStorySaveDataUtil::GetMainStoryState(int32 MainStoryId) {
    return EStoryState::UNRELEASED;
}

bool UStorySaveDataUtil::GetMainStorySaveData(int32 MainStoryId, FMainStorySaveData& outMainStorySaveData) {
    return false;
}

bool UStorySaveDataUtil::GetMainStoryRecordNew(int32 mainStoryTaskId) {
    return false;
}

int32 UStorySaveDataUtil::GetMainStoryCurrentTaskID(int32 MainStoryId) {
    return 0;
}

int32 UStorySaveDataUtil::GetInterruptedMainStoryID(int32 PlayerCharaId) {
    return 0;
}

int32 UStorySaveDataUtil::GetAutoInterruptMainStoryId_ByPrologue() {
    return 0;
}

int32 UStorySaveDataUtil::GetAutoInterruptMainStoryId() {
    return 0;
}

bool UStorySaveDataUtil::GetAllPlayingMainStoryIDs(TArray<int32>& outMainStoryIds) {
    return false;
}

void UStorySaveDataUtil::ClearPlayingMainStoryID(int32 PlayerCharaId) {
}

void UStorySaveDataUtil::ClearInterruptedMainStoryID(int32 PlayerCharaId) {
}


