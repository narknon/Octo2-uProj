#include "PartyChatManager.h"

APartyChatManager::APartyChatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_IsInBar = false;
}

bool APartyChatManager::Static_PlayPartyChatFromMissionRecord(const FName& PartyChatLabel) {
    return false;
}

bool APartyChatManager::Static_PlayAvailablePartyChat() {
    return false;
}

bool APartyChatManager::Static_IsAvailablePartyChat() {
    return false;
}

bool APartyChatManager::PlayPartyChatFromMissionRecord(const FName& PartyChatLabel) {
    return false;
}

bool APartyChatManager::PlayAvailablePartyChat() {
    return false;
}

void APartyChatManager::OnUpdateMainStoryTask(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnUpdateMainStory(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnStartEvent(EREQUEST_RESULT Result) {
}

void APartyChatManager::OnRefreshPartyCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnLevelChanged(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnJoinPlayerCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnFinishPartyChat(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnEnterOrExitBar(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnCompleteMainStory(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void APartyChatManager::OnChangeHolyTorchState() {
}

void APartyChatManager::OnCalledEventEndProcess() {
}

bool APartyChatManager::IsAvailablePartyChat() const {
    return false;
}

bool APartyChatManager::GetPlayingPartyChatData(FPartyChat& OutData) const {
    return false;
}

void APartyChatManager::Debug_ForcePlayPartyChat(const FName& PartyChatLabel) {
}


