#include "AchievementManager.h"

AAchievementManager::AAchievementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Service = NULL;
}

void AAchievementManager::OnWorldMapOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnUnLockAchievement() {
}

void AAchievementManager::OnTitleScene(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnSwoonNpcByFc(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnSubStoryRecordOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnSubStoryClear(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnStoryRecordReOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnStoryRecordOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnStartFieldMainSequenceAfterExBoss(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnRefreshFollowCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnPartyMemberChangeMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnOpenEndCardEpilogue(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnOpenEndCard(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnMusicRecordOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnMainStoryTaskClear(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnMainStoryClear(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnJoinedCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnJobMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnItemMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnInformationFieldCommandOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnGetItem(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnFinishFieldCommand(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnEquipMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnCreatedPlayerController(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnChangeVisitedLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnBreak(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnBoostAttack(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnBeginLinerShip(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnAttack(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnAcquisitionAdvancedAbility(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnAcquisitionAbility(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::OnAbilityMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

AAchievementManager* AAchievementManager::GetInstance() {
    return NULL;
}

EAchievementStatus AAchievementManager::GetAchievementStatus(FName achiveLabel) {
    return EAchievementStatus::NONE;
}

void AAchievementManager::DelayOnEpilogueEndCardUnlockAchievement(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::DelayOnEndCardUnlockAchievement(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void AAchievementManager::Debug_ShowDebugInfo(bool bEnable) {
}

void AAchievementManager::Debug_SetFieldCommandSuccessCount(MJFieldCommandType FCType, int32 Count) {
}

bool AAchievementManager::Debug_ResetAllAchievement() {
    return false;
}

bool AAchievementManager::Debug_ForceUnlockAchievement(FName AchieveLabel) {
    return false;
}

bool AAchievementManager::Debug_ForceLockAchievement(FName AchieveLabel) {
    return false;
}


