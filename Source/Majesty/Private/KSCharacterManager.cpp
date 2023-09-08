#include "KSCharacterManager.h"

AKSCharacterManager::AKSCharacterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCharacter = NULL;
    this->PlayFCActionCharacter = NULL;
    this->PartyCharacterEnable = false;
    this->LastPartyMemberIndex = 0;
    this->LastPartyMember = NULL;
    this->FollowDistance = 0.00f;
    this->LocationTimeMax = 0.00f;
    this->LocationTimer = 0.00f;
    this->IsLeadCharacterEnable = false;
    this->IsLureCharacterEnable = false;
    this->IsHireCharacterEnable = false;
    this->IsPlacateCharacterEnable = false;
    this->BarCharacterEnable = false;
    this->OpenMyShipSail = false;
    this->m_PlayerLocationTrace = NULL;
    this->LocationTimeMaxWork = 0.00f;
}

void AKSCharacterManager::UpdatePartyFollowOffset() {
}

void AKSCharacterManager::UnregisterFromCharacterList(AKSCharacterBase* Character) {
}

void AKSCharacterManager::SetupPlayers() {
}

void AKSCharacterManager::SetupPartyCharacter() {
}

void AKSCharacterManager::SetupEpilogueParty() {
}

void AKSCharacterManager::SetSkipPartyCharacterEnableFromCallbackLoaded() {
}

void AKSCharacterManager::SetShowDebugInfo(bool Enable) {
}


void AKSCharacterManager::SetPartyGravity(bool Enable) {
}

void AKSCharacterManager::SetPartyFollowOffset() {
}

void AKSCharacterManager::SetPartyCharacterInstance(int32 PartyIndex, AKSCharacterBase* chara) {
}

void AKSCharacterManager::SetPartyCharacterEnable(bool inEnable) {
}

void AKSCharacterManager::SetPartnerCharacterInstance(int32 partnerIndex, AKSCharacterBase* chara) {
}

void AKSCharacterManager::SetMyShipSail(bool bOpen) {
}

void AKSCharacterManager::SetFollowCharacterInstance(int32 followIndex, AKSCharacterBase* chara, MJFieldCommandType FCType) {
}

void AKSCharacterManager::SetCharacterMoveMode_AlsoPlayer(EKSCharacterMoveMode eMoveMode, bool excludeDash) {
}

void AKSCharacterManager::SetCharacterMoveMode(EKSCharacterMoveMode eMoveMode) {
}

void AKSCharacterManager::SetCharacterEnable(int32 Category, bool Enable) {
}

void AKSCharacterManager::SetBarCharacterEnableAll(bool inEnable) {
}


void AKSCharacterManager::SavePlayerPlacementFromTheater() {
}

void AKSCharacterManager::SavePlayerPlacementFromPChat() {
}

void AKSCharacterManager::RestorePlayerPlacement() {
}

void AKSCharacterManager::ResetPlayerLocationHistory(FVector InLocation, EKSCharacterDir InDir) {
}

void AKSCharacterManager::ResetPartyCharacterForOutGame() {
}

void AKSCharacterManager::ResetPartyCharacter() {
}

void AKSCharacterManager::ResetNewFollowMove() {
}

void AKSCharacterManager::ResetFollowMasterCharacterID() {
}

void AKSCharacterManager::ResetFollowerLocation() {
}

void AKSCharacterManager::ResetCanoeEffect() {
}

void AKSCharacterManager::RemoveTemporaryEnemyResourceLabel(FName enemyResLabel) {
}

void AKSCharacterManager::RemoveEpiloguePartyCharacter() {
}

void AKSCharacterManager::RemoveCharacter(AKSCharacterBase* Character) {
}


void AKSCharacterManager::RemoveAllTemporaryEnemyResourceLabel() {
}


void AKSCharacterManager::RegisterToCharacterList(AKSCharacterBase* Character) {
}


void AKSCharacterManager::RefreshPartyLocation() {
}

void AKSCharacterManager::RefreshPartyFollowOffset() {
}





void AKSCharacterManager::RefreshFollowFormation() {
}



void AKSCharacterManager::PushPlayerLocationToHistory(float DeltaSeconds) {
}

void AKSCharacterManager::LoadCharacterResource(TArray<FName> CharaResourceLabels) {
}

bool AKSCharacterManager::IsEnabledCharacter_HunterPartner() {
    return false;
}

bool AKSCharacterManager::InitPartyLocation() {
    return false;
}


void AKSCharacterManager::InitAfterLoadSaveData_Implementation(UMJSaveData* saveData) {
}

TArray<AKSCharacterBase*> AKSCharacterManager::GetUsePartyCharacterList() {
    return TArray<AKSCharacterBase*>();
}

TArray<FName> AKSCharacterManager::GetTemporaryEnemyResourceLabelList() {
    return TArray<FName>();
}

int32 AKSCharacterManager::GetRunMode() {
    return 0;
}


AKSCharacterBase* AKSCharacterManager::GetPlayerObject() {
    return NULL;
}

void AKSCharacterManager::GetPlayerMoveHistoryParams(int32 Index, FVector& Location, uint8& Dir, EKSCharacterMoveMode& Mode, bool& success) {
}

void AKSCharacterManager::GetPlayerLocationHistory(int32 Index, FVector& out_Location, EKSCharacterDir& out_Dir, EKSCharacterMoveMode& outMoveMode) {
}


AKSCharacterBase* AKSCharacterManager::GetPlacateFollowNPC() const {
    return NULL;
}

TArray<AKSCharacterBase*> AKSCharacterManager::GetPartyCharacterList() {
    return TArray<AKSCharacterBase*>();
}

AKSCharacterBase* AKSCharacterManager::GetPartyCharacterInstance(int32 PartyIndex) {
    return NULL;
}

AKSCharacterBase* AKSCharacterManager::GetPartyCharacterIndex(int32 inIndex) {
    return NULL;
}

bool AKSCharacterManager::GetPartyCharacterEnable() const {
    return false;
}


AKSCharacterBase* AKSCharacterManager::GetPartnerCharacterInstance(int32 partnerIndex) {
    return NULL;
}

AKSCharacterBase* AKSCharacterManager::GetPartnerCharacter(int32 Index) const {
    return NULL;
}

bool AKSCharacterManager::GetMyShipSail() const {
    return false;
}

AKSCharacterBase* AKSCharacterManager::GetLureFollowNPC() const {
    return NULL;
}

int32 AKSCharacterManager::GetLocationIndex(int32 inOffset) const {
    return 0;
}

AKSCharacterBase* AKSCharacterManager::GetLeadFollowNPC() const {
    return NULL;
}

AKSCharacterBase* AKSCharacterManager::GetLastPartyMember() const {
    return NULL;
}

AKSCharacterBase* AKSCharacterManager::GetHireFollowNPC() const {
    return NULL;
}

int32 AKSCharacterManager::GetFollowNpcNum() const {
    return 0;
}

void AKSCharacterManager::GetFollowNpcIdList(TArray<int32>& outFollowIds, TArray<int32>& outSubIds) {
}

AKSCharacterBase* AKSCharacterManager::GetFollowMember(MJFieldCommandType Type) const {
    return NULL;
}

int32 AKSCharacterManager::GetFollowMasterNum() {
    return 0;
}

EPlayableCharacterID AKSCharacterManager::GetFollowMasterCharacterID(int32 Index) {
    return EPlayableCharacterID::eNONE;
}

AKSCharacterBase* AKSCharacterManager::GetFollowCharacterInstance(int32 followIndex) {
    return NULL;
}

EKSCharacterMoveMode AKSCharacterManager::GetCharacterMoveMode() {
    return EKSCharacterMoveMode::WALK;
}

AKSCharacterBase* AKSCharacterManager::GetBarCharacterIndex(int32 inIndex) {
    return NULL;
}




void AKSCharacterManager::DelegateForShipMovingSE(ENOTICE_TYPE noticeType, const FNoticeArgs& Args) {
}

void AKSCharacterManager::Debug_ShowFollowInfo(bool bShow) {
}

void AKSCharacterManager::Debug_SetTempDisableFallPrevention() {
}

void AKSCharacterManager::Debug_SetPushPlayerPosCountPerSec(int32 Count) {
}

void AKSCharacterManager::Debug_SetPartyLoad(bool Enable) {
}

void AKSCharacterManager::Debug_SetFallLimit(int32 fallLimit) {
}

void AKSCharacterManager::Debug_SetEnableNewFollow(bool bEnable) {
}

void AKSCharacterManager::Debug_SetEnableFallPrevention(bool bEnable) {
}

void AKSCharacterManager::Debug_OutputPlayerLocationHistory() {
}

bool AKSCharacterManager::Debug_IsEnableFallPrevention() {
    return false;
}

int32 AKSCharacterManager::Debug_GetPushPlayerPosCountPerSec() {
    return 0;
}

bool AKSCharacterManager::Debug_GetPartyLoad() {
    return false;
}

int32 AKSCharacterManager::Debug_GetFallLimit() {
    return 0;
}

bool AKSCharacterManager::Debug_GetEnableNewFollow() {
    return false;
}

void AKSCharacterManager::Debug_DrawFollowFormation() {
}

bool AKSCharacterManager::CheckPartyCharaLadderAnimation() {
    return false;
}


void AKSCharacterManager::AddTemporaryEnemyResourceLabel(FName enemyResLabel) {
}




void AKSCharacterManager::AddFollowMasterCharacterID(EPlayableCharacterID CharacterID) {
}



AKSCharacterBase* AKSCharacterManager::AddEpiloguePartyCharacter(EPlayableCharacterID PlayerCharaId) {
    return NULL;
}



