#include "StoryDataUtility.h"

UStoryDataUtility::UStoryDataUtility() {
}

int32 UStoryDataUtility::SubStoryLabelToId(FName subStoryLabel) {
    return 0;
}

FName UStoryDataUtility::SubStoryIdToLabel(int32 subStoryId) {
    return NAME_None;
}

bool UStoryDataUtility::StartMainStoryFromNewGame(int32 PlayerCharaId) {
    return false;
}

void UStoryDataUtility::RefreshMainStoryRelease(int32 MainStoryId) {
}

void UStoryDataUtility::RefreshAllMainStoryState() {
}

void UStoryDataUtility::RefreshAllMainStoryRelease() {
}

void UStoryDataUtility::NotifySubStoryDB(FName dbName, EDBNoticeType notice) {
}

void UStoryDataUtility::NotifyMainStoryDB(FName dbName, EDBNoticeType notice) {
}

int32 UStoryDataUtility::MainStoryTaskLabelToId(FName mainStoryTaskLabel) {
    return 0;
}

FName UStoryDataUtility::MainStoryTaskIdToLabel(int32 mainStoryTaskId) {
    return NAME_None;
}

int32 UStoryDataUtility::MainStoryLabelToId(FName MainStoryLabel) {
    return 0;
}

FName UStoryDataUtility::MainStoryIdToLabel(int32 MainStoryId) {
    return NAME_None;
}

bool UStoryDataUtility::IsSubStoryDataExists(FName subStoryLabel) {
    return false;
}

bool UStoryDataUtility::IsStorySealed(EStoryState storyState) {
    return false;
}

bool UStoryDataUtility::IsStoryCompleted(EStoryState storyState) {
    return false;
}

bool UStoryDataUtility::IsMerchantSubStory(FName subStoryLabel) {
    return false;
}

bool UStoryDataUtility::IsMainStoryTaskDataExists(FName mainStoryTaskLabel) {
    return false;
}

bool UStoryDataUtility::IsMainStoryPrologue(int32 MainStoryId) {
    return false;
}

bool UStoryDataUtility::IsMainStoryPlayableStateById(int32 MainStoryId) {
    return false;
}

bool UStoryDataUtility::IsCompletedMainStoryCharacterFinalChapter(int32 PlayerCharaId) {
    return false;
}

bool UStoryDataUtility::IsAnyCharacterPlayingMainStory() {
    return false;
}

TArray<FName> UStoryDataUtility::GetTutorailSubStoryLabels() {
    return TArray<FName>();
}

FName UStoryDataUtility::GetSubStoryTitleTextLabel(FName subStoryLabel) {
    return NAME_None;
}

bool UStoryDataUtility::GetSubStoryRowNames(TArray<FName>& OutRowNames) {
    return false;
}

int32 UStoryDataUtility::GetSubStoryNumInAllArea() {
    return 0;
}

int32 UStoryDataUtility::GetSubStoryNumByAreaId_WithoutMerchantSubStory(int32 AreaID) {
    return 0;
}

int32 UStoryDataUtility::GetSubStoryNumByAreaId(int32 AreaID) {
    return 0;
}

int32 UStoryDataUtility::GetSubStoryMissionIndex(FName subStoryLabel) {
    return 0;
}

TArray<FName> UStoryDataUtility::GetSubStoryLabelsInAllArea() {
    return TArray<FName>();
}

TArray<FName> UStoryDataUtility::GetSubStoryLabelsByAreaId(int32 AreaID) {
    return TArray<FName>();
}

int32 UStoryDataUtility::GetSubStoryLabelsArrayIndex(FName subStoryLabel) {
    return 0;
}

FName UStoryDataUtility::GetSubStoryLabelByAreaIdAndArrayIndex(int32 AreaID, int32 ArrayIndex) {
    return NAME_None;
}

void UStoryDataUtility::GetSubStoryDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSubMissionData& outStoryData, FName subStoryLabel) {
}

TArray<FName> UStoryDataUtility::GetSubStoryCommonLabels() {
    return TArray<FName>();
}

int32 UStoryDataUtility::GetSubStoryAreaId(FName subStoryLabel) {
    return 0;
}

FName UStoryDataUtility::GetMainStoryTaskTitleTextLabel(FName mainStoryTaskLabel) {
    return NAME_None;
}

bool UStoryDataUtility::GetMainStoryTaskRowNames(TArray<FName>& OutRowNames) {
    return false;
}

int32 UStoryDataUtility::GetMainStoryTaskProgressValue(FName mainStoryTaskLabel) {
    return 0;
}

void UStoryDataUtility::GetMainStoryTaskLabelsByCharaIdWithBranch(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& outLabelList, int32 PlayerCharaId) {
}

TArray<FName> UStoryDataUtility::GetMainStoryTaskLabelsByCharaId(int32 PlayerCharaId) {
    return TArray<FName>();
}

void UStoryDataUtility::GetMainStoryTaskLabelList(TArray<FName>& outTaskLabelList, int32 MainStoryId, ESTORY_TASK_TYPE TaskType) {
}

void UStoryDataUtility::GetMainStoryTaskDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FMainMissionData& outStoryData, FName mainStoryTaskLabel) {
}

FName UStoryDataUtility::GetMainStoryNextTask(FName mainStoryTaskLabel) {
    return NAME_None;
}

FName UStoryDataUtility::GetMainStoryLabelFromTask(FName mainStoryTaskLabel) {
    return NAME_None;
}

void UStoryDataUtility::GetMainStoryIdListInWorldMap(TArray<int32>& outMainStoryIdList, FName WorldMapLabel) {
}

float UStoryDataUtility::GetMainStoryGaugeMaxValue(EPlayableCharacterID CharacterID) {
    return 0.0f;
}

int32 UStoryDataUtility::GetMainStoryDifficultyPoint(int32 MainStoryId) {
    return 0;
}

bool UStoryDataUtility::GetMainStoryDataById(int32 MainStoryId, FMainStoryData& OutData) {
    return false;
}

void UStoryDataUtility::GetMainStoryCurrentTaskData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FMainMissionData& outStoryData, int32 PlayerCharaId) {
}

int32 UStoryDataUtility::GetMainStoryCharacterPrologueId(int32 PlayerCharaId) {
    return 0;
}

int32 UStoryDataUtility::GetMainStoryCharacterFinalChapterId(int32 PlayerCharaId) {
    return 0;
}

void UStoryDataUtility::GetMainStoryCharacterAllPrologueId(TArray<int32>& outPrologueId, int32 PlayerCharaId) {
}

TArray<FName> UStoryDataUtility::GetMainStoryAllLabels() {
    return TArray<FName>();
}

void UStoryDataUtility::GetFastTravelPermissionByCharaId(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, bool& outUnavailableFastTravel, FName& outAuthorizationFastTravel, int32 PlayerCharaId) {
}

bool UStoryDataUtility::GetExtraStoryIdByExCategory(TArray<int32>& outMainStoryId, EEXTRA_STORY_CATEGORY exCategory) {
    return false;
}

float UStoryDataUtility::GetExtraStoryGaugeMaxValue(EEXTRA_STORY_CATEGORY extraStory) {
    return 0.0f;
}

bool UStoryDataUtility::GetExtraStoryAllId(TArray<int32>& outMainStoryId) {
    return false;
}

bool UStoryDataUtility::GetCharacterMainStoryIdForStoryRecord(TArray<int32>& outMainStoryId, int32 PlayerCharaId) {
    return false;
}

bool UStoryDataUtility::GetCharacterMainStoryAllId(TArray<int32>& outMainStoryId, int32 PlayerCharaId) {
    return false;
}

FName UStoryDataUtility::GetChapterText(int32 MainStoryId) {
    return NAME_None;
}

bool UStoryDataUtility::GetAllSubStoryIds(TArray<int32>& outIds) {
    return false;
}

void UStoryDataUtility::Debug_SetReleaseAllStoryRecord(bool bRelease) {
}

bool UStoryDataUtility::Debug_IsReleasedAllStoryRecord() {
    return false;
}

bool UStoryDataUtility::Debug_IsIgnoreMainStoryReleased() {
    return false;
}

void UStoryDataUtility::Debug_IgnoreMainStoryReleased(bool bIgnore) {
}

bool UStoryDataUtility::CheckMainStoryReleaseConditionById(int32 MainStoryId) {
    return false;
}

bool UStoryDataUtility::CheckMainStoryReleaseConditionByData(const FMainStoryData& MainStoryData) {
    return false;
}


