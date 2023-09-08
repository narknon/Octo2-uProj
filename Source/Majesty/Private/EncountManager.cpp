#include "EncountManager.h"

AEncountManager::AEncountManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bIsViewerMode = false;
    this->EncountDir = EKSCharacterDir::FRONT;
    this->m_RequestRestoreEncountVolume = false;
    this->m_eFixFirstOrderPlayerID = EPlayableCharacterID::eNONE;
    this->Debug_BattleViewerMode = EBATTLE_VIEWER_MODE::eNORMAL;
    this->Debug_UseBattleViewerParty = false;
    this->Debug_UseBattleRandomParty = false;
    this->Debug_UseExtraJob = false;
    this->Debug_RandomPartyLevel = 0;
    this->Debug_RandomPartyLevelRange = 0;
    this->Debug_RandomPartyNum = 0;
    this->Debug_UseBattleViewerMap = false;
    this->Debug_IsWaterSide = false;
    this->Debug_UseFixedSituation = false;
    this->Debug_FixedSituation = EBATTLE_START_TYPE::eNORMAL;
    this->Debug_FixedBattleMode = EBATTLE_ENCOUNT_TYPE::eNORMAL;
}


















void AEncountManager::RequestRestoreEncountVolumeFromSaveData() {
}


void AEncountManager::OnLevelChanged(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

bool AEncountManager::IsChkEncountFlagStartEndData(FEncountFlagStartEndData& chkEncountData) {
    return false;
}


bool AEncountManager::GetReplaceEncountFlagData(FEncountFlagData& chkData, FName& EncountTriggerLabel) {
    return false;
}


EPlayableCharacterID AEncountManager::GetFixFirstOrderPlayer() {
    return EPlayableCharacterID::eNONE;
}








bool AEncountManager::GetBattleViewerMode() {
    return false;
}




















bool AEncountManager::Debug_GetBattleRandomParty() {
    return false;
}








