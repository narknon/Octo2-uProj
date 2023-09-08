#include "PartyChatSaveDataUtil.h"

UPartyChatSaveDataUtil::UPartyChatSaveDataUtil() {
}

void UPartyChatSaveDataUtil::SetState(int32 PartyChatId, EPARTY_CHAT_STATE State) {
}

bool UPartyChatSaveDataUtil::SetPartyChatTimeZoneOnPlayed(int32 PartyChatId, int32 TimezoneType, int32 timeZonePosition) {
    return false;
}

void UPartyChatSaveDataUtil::SetPartyChatLevelOnPlayed(int32 PartyChatId, int32 levelId) {
}

bool UPartyChatSaveDataUtil::SetPartyChatEventObjectFlag(int32 PartyChatId, int32 FlagID, bool Val) {
    return false;
}

void UPartyChatSaveDataUtil::SetNewFlag(int32 PartyChatId, bool bNew) {
}

bool UPartyChatSaveDataUtil::IsPartyChatFlag(int32 PartyChatId) {
    return false;
}

EPARTY_CHAT_STATE UPartyChatSaveDataUtil::GetState(int32 PartyChatId) {
    return EPARTY_CHAT_STATE::UNRELEASE;
}

int32 UPartyChatSaveDataUtil::GetPartyChatTimeZoneTypeOnPlayed(int32 PartyChatId) {
    return 0;
}

int32 UPartyChatSaveDataUtil::GetPartyChatTimeZonePositionOnPlayed(int32 PartyChatId) {
    return 0;
}

int32 UPartyChatSaveDataUtil::GetPartyChatLevelOnPlayed(int32 PartyChatId) {
    return 0;
}

TArray<FName> UPartyChatSaveDataUtil::GetPartyChatLabelsRelatedMainStoryWithReleasedState(FName MainStoryLabel) {
    return TArray<FName>();
}

void UPartyChatSaveDataUtil::GetPartyChatEventObjectFlag(int32 PartyChatId, int32& FlagID, bool& Val) {
}

bool UPartyChatSaveDataUtil::GetNewFlag(int32 PartyChatId) {
    return false;
}

int32 UPartyChatSaveDataUtil::GetLevelChangeCounterForFinalChapterHintPartyChat() {
    return 0;
}

bool UPartyChatSaveDataUtil::GetIsUnRelease(int32 PartyChatId) {
    return false;
}

bool UPartyChatSaveDataUtil::GetIsRelease(int32 PartyChatId) {
    return false;
}

void UPartyChatSaveDataUtil::Debug_SetLevelChangeCounterForFinalChapterHintPartyChat(int32 newCount) {
}


