#include "StoryFunction.h"

UStoryFunction::UStoryFunction() {
}

bool UStoryFunction::UpdateMainStoryProgressOnPlayEvent(FName mainStoryTaskLabel) {
    return false;
}

void UStoryFunction::UpdateMainStoryProgressCount(FName MainStoryLabel, int32 progressCount) {
}

void UStoryFunction::UpdateFixedFieldBgmOnChangeLevel(FName MainStoryTask) {
}

void UStoryFunction::UpdateExtraStoryProgressCount(EEXTRA_STORY_CATEGORY ExStoryCategory, int32 progressCount) {
}

void UStoryFunction::UpdateCharaMainStoryProgressCount(int32 PlayerCharaId, int32 progressCount) {
}

bool UStoryFunction::StartSubStory(FName subStoryLabel) {
    return false;
}

void UStoryFunction::SetPlayingEpilogue(bool bPlaying) {
}

bool UStoryFunction::SetMainStoryTaskViewFlag(FName mainStoryTaskLabel, bool playingFlag) {
    return false;
}

void UStoryFunction::SetMainStoryEventFlags(int32 MainStoryId, bool bFlag) {
}

void UStoryFunction::SetMainStoryAllTaskCleared(int32 MainStoryId, bool bCleared) {
}

bool UStoryFunction::ResumeMainStorySpecifiedChara(int32 PlayerCharaId) {
    return false;
}

bool UStoryFunction::ResumeMainStory(int32 MainStoryId) {
    return false;
}

void UStoryFunction::ResetMainStoryData(int32 MainStoryId) {
}

void UStoryFunction::RecoveryConnectionOnPrologueTown(EPlayableCharacterID PlayerCharaId) {
}

void UStoryFunction::MakeWorldMapDestinationList(TArray<FWorldMapDestinationData>& outDestData) {
}

FText UStoryFunction::MakeSubStoryStartConditionFailedText(FName subStoryLabel) {
    return FText::GetEmpty();
}

bool UStoryFunction::IsSubStoryRecordAreaOpend(int32 AreaID) {
    return false;
}

bool UStoryFunction::IsReleasedMerchantShip() {
    return false;
}

bool UStoryFunction::IsPlayingPrologue(int32 PlayerCharaId) {
    return false;
}

bool UStoryFunction::IsPlayingOverallFinalChapter() {
    return false;
}

bool UStoryFunction::IsPlayingMainScenarioInCurrentLevel(int32 characterScenarioType) {
    return false;
}

bool UStoryFunction::IsPlayingEpilogue() {
    return false;
}

bool UStoryFunction::IsOverallFinalChapterInProgress() {
    return false;
}

bool UStoryFunction::IsMapRelatedCharaPrologue(FName levelName, EPlayableCharacterID CharaID) {
    return false;
}

bool UStoryFunction::IsCompletedSubStory(FName subStoryLabel) {
    return false;
}

bool UStoryFunction::IsCompletedOverallFinalChapter() {
    return false;
}

bool UStoryFunction::IsCompletedAllCouplingStory() {
    return false;
}

bool UStoryFunction::IsAnyCharaPlayingPrologue() {
    return false;
}

bool UStoryFunction::IsAnyCharaCompletedFinalChapter() {
    return false;
}

bool UStoryFunction::IsAllCharaCompletedFinalChapter() {
    return false;
}

bool UStoryFunction::Is1stSelectedCharaCompletedFinalChapter() {
    return false;
}

bool UStoryFunction::InterruptMainStorySpecifiedChara(int32 PlayerCharaId) {
    return false;
}

void UStoryFunction::InterruptMainStoryForSubMembers() {
}

bool UStoryFunction::InterruptMainStory(int32 MainStoryId) {
    return false;
}

int32 UStoryFunction::GetSubStoryState(FName subStoryLabel) {
    return 0;
}

int32 UStoryFunction::GetPlayingPrologueReminiscenceIndex() {
    return 0;
}

void UStoryFunction::GetPlayingMainStoryInLevel(TArray<int32>& outMainStoryIdList, FName levelName) {
}

int32 UStoryFunction::GetPlayingMainStoryID(int32 PlayerCharaId) {
    return 0;
}

bool UStoryFunction::GetPlayablePrologueList(TArray<int32>& outPlayableCharaID) {
    return false;
}

void UStoryFunction::GetPlayableMainStoryListInWorldMap(TArray<FBarMenuStoryItem>& outMainStoryList, FName WorldMapLabel) {
}

int32 UStoryFunction::GetMainStoryTaskTargetCharacterId(FName mainStoryTaskLabel) {
    return 0;
}

EBARMENU_STORY_SELECT_ITEM_TYPE UStoryFunction::GetMainStoryStateInStorySelectMenu(int32 MainStoryId) {
    return EBARMENU_STORY_SELECT_ITEM_TYPE::NOT_PROGRESSIVE;
}

float UStoryFunction::GetMainStoryRecordGaugeLength(int32 PlayerCharaId) {
    return 0.0f;
}

int32 UStoryFunction::GetMainStoryProgressCountFromStoryId(int32 MainStoryId) {
    return 0;
}

int32 UStoryFunction::GetMainStoryProgressCount(int32 PlayerCharaId) {
    return 0;
}

FName UStoryFunction::GetFixedFieldBgm(FName levelName) {
    return NAME_None;
}

float UStoryFunction::GetExtraStoryRecordGaugeLength(EEXTRA_STORY_CATEGORY exCategory) {
    return 0.0f;
}

int32 UStoryFunction::GetExtraStoryProgressCount(EEXTRA_STORY_CATEGORY ExStoryCategory) {
    return 0;
}

void UStoryFunction::GetCharaIdListPlayingMainStoryInLevel(TArray<int32>& outCharaIdList, FName levelName, bool includeInterruption) {
}

void UStoryFunction::GetAllCompletedMainStoryIds(TArray<int32>& IDs) {
}

int32 UStoryFunction::GetActiveMainStoryID(int32 PlayerCharaId) {
    return 0;
}

void UStoryFunction::Debug_SetupJustBeforeFinalChapter(bool bPartnerA) {
}

void UStoryFunction::Debug_ModifyMainStoryState(int32 MainStoryId, EStoryState storyState, bool bPlayLastEvent) {
}

void UStoryFunction::Debug_CompleteMainStoryInProgress(int32 PlayerCharaId) {
}

void UStoryFunction::CreateSubStoryRecordDataListItem(TArray<FMAINMENU_MISSION_RECORD_DATA>& outRecordData, int32 AreaID) {
}

void UStoryFunction::CreateSubStoryAllRecordDataListItem(TArray<FMAINMENU_MISSION_RECORD_DATA>& outRecordData) {
}

void UStoryFunction::CreateMainStoryRecordDataListItemByStoryId(TArray<FMAINMENU_MISSION_RECORD_DATA>& outTaskInfo, TArray<FMJListWidgetItemData>& outListItemData, int32 MainStoryId, int32 CategoryId) {
}

void UStoryFunction::ControlMainStoryEventObjectOnInterruptFromBar(int32 MainStoryId, bool bInterrupt) {
}

void UStoryFunction::ControlMainStoryEventObjectOnInterrupt(FName MainStoryLabel, bool bInterrupt, bool bRefreshObject) {
}

bool UStoryFunction::CompleteSubStory(FName subStoryLabel, int32 ClearIndex) {
    return false;
}

bool UStoryFunction::CompleteFakeSubStory(FName subStoryLabel) {
    return false;
}

bool UStoryFunction::CheckSubStoryStartCondition(FName subStoryLabel) {
    return false;
}

bool UStoryFunction::CanPlayMainStory(int32 MainStoryId) {
    return false;
}

bool UStoryFunction::CanOpenTutorialByMap(FName WorldMapLabel) {
    return false;
}

bool UStoryFunction::CanOpenStorySelectByBar(FName WorldMapLabel) {
    return false;
}

bool UStoryFunction::CanOpenMainStorySelectMenuByMap(FName WorldMapLabel) {
    return false;
}

int32 UStoryFunction::CalcRecoveryRelationshipCost(int32 TownID) {
    return 0;
}

float UStoryFunction::CalcMainStoryTotalProgress() {
    return 0.0f;
}


