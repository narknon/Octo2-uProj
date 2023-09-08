#include "TimeZoneManager.h"
#include "TimeOperator.h"

ATimeZoneManager::ATimeZoneManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pTimeOperator = CreateDefaultSubobject<UTimeOperator>(TEXT("TimeOperator"));
    this->m_pSequencer = NULL;
    this->m_pcOriginalSequence = NULL;
    this->m_pcReplaceSequence = NULL;
    this->m_pcPrevSequence = NULL;
    this->m_TheaterCache_CurrentSequence = NULL;
    this->m_TheaterCache_PrevSequence = NULL;
    this->m_bEnable = true;
}

void ATimeZoneManager::SetTimeZoneType(ETimeZoneType eNewType) {
}

void ATimeZoneManager::SetTimeZoneDarkAreaForEditor(const UObject* WorldContextObject) {
}

void ATimeZoneManager::SetTempDarkSurfaceEnable(bool bEnable) {
}

void ATimeZoneManager::SetIndoorPostProcessEnableForEditor(const UObject* WorldContextObject, bool bIndoor) {
}

void ATimeZoneManager::SetIndoorPostProcessEnable(bool bIndoor) {
}

void ATimeZoneManager::SetFrameTimeZoneSequencer(int32 nFrame) {
}

void ATimeZoneManager::SetForcedChangeTimeDisable(bool bDisable) {
}

void ATimeZoneManager::SetEnable(bool bEnable) {
}

void ATimeZoneManager::SetChangeTimeEnable(const bool bEnable) {
}

void ATimeZoneManager::SetAddChangeValueTime(const float fNewValue) {
}

void ATimeZoneManager::RevertTimezoneSequencerAfterTheater() {
}

void ATimeZoneManager::RevertTimeZoneSequencer() {
}

void ATimeZoneManager::ResetTimeZoneSequencerForEditor(const UObject* WorldContextObject) {
}

void ATimeZoneManager::Reset() {
}

void ATimeZoneManager::RequestChangeTimezoneSequencer(FName sequencerLabel) {
}

void ATimeZoneManager::Refresh(bool bNextTimeZone) {
}

void ATimeZoneManager::OnStartChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

void ATimeZoneManager::OnStartChangeFieldLevel(FName levelId, ELEVEL_TYPE levelType, ELevelTransitionNotice notice) {
}

void ATimeZoneManager::OnPreFinishChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

void ATimeZoneManager::OnFinishChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

void ATimeZoneManager::OnChangeDarkState(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

ETimeZoneType ATimeZoneManager::IsNextTimeZoneCheck() {
    return ETimeZoneType::NONE;
}

bool ATimeZoneManager::IsDayTime() {
    return false;
}

ETimeZoneType ATimeZoneManager::GetTimeZoneType() {
    return ETimeZoneType::NONE;
}

int32 ATimeZoneManager::GetSequencerCurrentFrame() {
    return 0;
}

ALevelSequenceActor* ATimeZoneManager::GetSequencer() {
    return NULL;
}

ETimeZoneType ATimeZoneManager::GetNextTimeZoneType() {
    return ETimeZoneType::NONE;
}

bool ATimeZoneManager::GetChangeTimeEnable() const {
    return false;
}

void ATimeZoneManager::ChangeTimeZoneSequencer(ULevelSequence* pSequencer) {
}

void ATimeZoneManager::ChangeTimeZoneForEditor(const UObject* WorldContextObject, ETimeZoneType ETimeZoneType) {
}

void ATimeZoneManager::ChangeNextTimeZone() {
}

void ATimeZoneManager::CacheTimezoneSequencerBeforeTheater() {
}

void ATimeZoneManager::ApplyReplaceTimezoneSequencer() {
}


