#include "SoundManager.h"

ASoundManager::ASoundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bPauseBattleGaya = false;
    this->m_bPauseEventGaya = false;
    this->ShowMenuSeRequest = false;
    this->ShowSeRequest = false;
    this->ShowEnvSoundInfo = false;
    this->ShowBgmInfo = false;
    this->ShowCategoryVolume = false;
    this->ShowLoadedCueSheet = false;
    this->Show3DSeRequest = false;
    this->ShowListenerPoint = false;
    this->ShowListeningPoint = false;
    this->ShowAISACParam = false;
    this->m_pcListenerComp = NULL;
    this->waitFadeIn = false;
    this->m_bEndCollect = false;
}

void ASoundManager::UpdateBgmChangeTimeZone(const FLevelInfoData& rLevelInfo) {
}

void ASoundManager::UnregisterLoadedSoundCue(FName cueLabel) {
}

bool ASoundManager::UnloadEventCueSheet() {
    return false;
}

bool ASoundManager::UnloadCueSheetByName(FName CueSheetName) {
    return false;
}


void ASoundManager::StopAllSe() {
}

void ASoundManager::SetWaitFadeIn(bool NewWaitFadeIn) {
}

void ASoundManager::SetVolume(EKSVolumeType volType, float Volume) {
}

void ASoundManager::SetupSelector() {
}

void ASoundManager::SetupEnvSoundOnCollect(ETimeZoneType eTimeZone) {
}


bool ASoundManager::SetFadeCategoryVolumeForEvent(EACF_CATEGORY Category, float Volume, float Time) {
    return false;
}

bool ASoundManager::SetFadeCategoryVolume(EACF_CATEGORY Category, float Volume, float Time) {
    return false;
}

void ASoundManager::SetDspBusToSeAndVoice(EKSDspBusType dspBusType) {
}

void ASoundManager::SetDspBusToComponent(EKSDspBusType dspBusType, UAtomComponent* Component) {
}

void ASoundManager::SetDeviceVolume(EKSDeviceVolumeType devVolType, float deviceVolume) {
}

void ASoundManager::SetCurrentBGMSelector(bool bIsDayTime) {
}

bool ASoundManager::SetCategoryVolumeByName_Implementation(const FString& CategoryName, float Volume) {
    return false;
}

bool ASoundManager::SetCategoryVolume(EACF_CATEGORY Category, float Volume) {
    return false;
}

bool ASoundManager::SetBgmSelector_Implementation(FName SelectorName, FName SelectorLabel) {
    return false;
}

bool ASoundManager::SetBgmNextBlockIndex_Implementation(int32 BlockIndex) {
    return false;
}

void ASoundManager::SetAISACVolume(const FString& strAisacName, float fValue) {
}

void ASoundManager::ResumeEnvGaya_Implementation(bool bBattle, bool bEvent) {
}

bool ASoundManager::RestoreBgmBeforePlayMusicRecord_Implementation(float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay) {
    return false;
}

void ASoundManager::ResetEnvCollect(ENOTICE_TYPE noticeType, const FNoticeArgs& Args) {
}

bool ASoundManager::RequestStopMusicRecord_Implementation(float FadeOutTime) {
    return false;
}


bool ASoundManager::RequestStopFadeBgm_Implementation(float FadeOutTime, bool stopBoth) {
    return false;
}


void ASoundManager::RequestStopAllEventSe() {
}


bool ASoundManager::RequestPlayTitleBgmByLabel_Implementation(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool IsDayTime, bool bIsDebugPlay) {
    return false;
}


bool ASoundManager::RequestPlayMusicRecord_Implementation(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay) {
    return false;
}


bool ASoundManager::RequestPlayInterruptBgmByLabel_Implementation(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority) {
    return false;
}

bool ASoundManager::RequestPlayFadeMapChangeBgmByLabel_Implementation(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay) {
    return false;
}

bool ASoundManager::RequestPlayFadeBgmByLabel_Implementation(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay) {
    return false;
}







bool ASoundManager::RequestPlay3DSeWithComponent_Implementation(UAtomComponent* Component, FName BgmLabel) {
    return false;
}

void ASoundManager::RequestFadeOutAllEventSe(float FadeOutTime) {
}

void ASoundManager::RequestChangeEnvSound(ETimeZoneType eTimeZone) {
}

void ASoundManager::RegisterLoadedSoundCue(FName CueSheetName, FName cueLabel, USoundAtomCue* SoundCue) {
}


void ASoundManager::PauseEnvGaya_Implementation(bool bBattle, bool bEvent) {
}


void ASoundManager::OnLevelHidden() {
}

bool ASoundManager::LoadEventCueSheetByEventName(FString& CueSheetName) {
    return false;
}

bool ASoundManager::LoadCueSheetByName(FName CueSheetName) {
    return false;
}

bool ASoundManager::IsRequestChangeEnvSound() {
    return false;
}

bool ASoundManager::IsEventSeFadeOut() const {
    return false;
}

bool ASoundManager::IsEndCollect() {
    return false;
}

bool ASoundManager::IsAtomPlaying(EKSAudioComponentType CompType) const {
    return false;
}

bool ASoundManager::IsAtomPaused(EKSAudioComponentType CompType) const {
    return false;
}

float ASoundManager::GetVolume(EKSVolumeType volType) const {
    return 0.0f;
}

FName ASoundManager::GetPlayingBgmLabelOnMusicPlayer_Implementation() {
    return NAME_None;
}


USoundAtomCue* ASoundManager::GetLoadedCue(FName CueName) const {
    return NULL;
}

FName ASoundManager::GetLastPlayedNormalBGMLabel() {
    return NAME_None;
}

UAtomComponent* ASoundManager::GetEventAtomComponent(FName CueSheetName) {
    return NULL;
}

float ASoundManager::GetDeviceVolume(EKSDeviceVolumeType devVolType) {
    return 0.0f;
}



bool ASoundManager::GetCueSheetAssetPath_Implementation(FName CueSheetName, FName& outAssetPath) {
    return false;
}

float ASoundManager::GetCategoryVolumeForEvent(EACF_CATEGORY Category) const {
    return 0.0f;
}

float ASoundManager::GetCategoryVolume(EACF_CATEGORY Category) const {
    return 0.0f;
}

void ASoundManager::GetBgmSelectorInfo() {
}

FString ASoundManager::GetAtomCueName(EKSAudioComponentType eType) {
    return TEXT("");
}

UAtomComponent* ASoundManager::GetAtomComponent(EKSAudioComponentType CompType) const {
    return NULL;
}

void ASoundManager::FinishChangeEnvSound() {
}

void ASoundManager::Debug_UnregisterAllSoundCue() {
}

void ASoundManager::Debug_ShowEnvSoundInfo(bool Show) {
}

void ASoundManager::Debug_SetShowDeviceVolume(bool Show) {
}

void ASoundManager::Debug_GetLoadedCueSheetNames(FString& outCueSheetNames) {
}

void ASoundManager::Debug_GetCategoryInfo(FString& outDebugInfo) {
}

void ASoundManager::Debug_GetAtomInfo(FString& outDebugInfo) {
}

void ASoundManager::Debug_Get3DSoundInfo(FString& out3DSoundInfo) {
}

bool ASoundManager::Debug_ChangeSEOnDecided(const FDebugListMenuItem& menuItem) {
    return false;
}

void ASoundManager::Debug_ChangeSEListClose() {
}

UAtomComponent* ASoundManager::CreateAndAttach3DSEComponent(AActor* TargetActor) {
    return NULL;
}


void ASoundManager::ChangeListenerPoint(ELISTENER_TYPE eType, USceneComponent* pParentComponent) {
}

void ASoundManager::ChangeFocusPointDistanceLevel(float fDistanceLevel) {
}


float ASoundManager::CalcSeEnvVolume() {
    return 0.0f;
}

void ASoundManager::BattleChange_SetupEnvSE(ENOTICE_TYPE noticeType, const FNoticeArgs& Args) {
}



