#include "KSGameStatics.h"

UKSGameStatics::UKSGameStatics() {
}

void UKSGameStatics::WipeOutAtBattleStart(UObject* WorldContextObject) {
}

void UKSGameStatics::WipeOutAtBattleEnd(UObject* WorldContextObject) {
}

void UKSGameStatics::WipeInAtBattleStart(UObject* WorldContextObject) {
}

void UKSGameStatics::WipeInAtBattleEnd(UObject* WorldContextObject) {
}

UKSLoadingWidget* UKSGameStatics::StopLoadingUI(UObject* WorldContextObject, ELOADING_REASON reason) {
    return NULL;
}

void UKSGameStatics::StartTimer() {
}

UKSLoadingWidget* UKSGameStatics::StartLoadingUI(UObject* WorldContextObject, ELOADING_REASON reason) {
    return NULL;
}

void UKSGameStatics::SetUseCustomFlipbook(UObject* WorldContextObject, bool Enable) {
}

void UKSGameStatics::SetTransitionFromLoadGame(UObject* WorldContextObject, bool Enable) {
}

FTimerHandle UKSGameStatics::SetTimerForNextTick(UObject* WorldContextObject, const FTimerDynamicDelegate& InDynDelegate) {
    return FTimerHandle{};
}

void UKSGameStatics::SetTimeDilation(UObject* WorldContextObject, ECHANGE_TIME_DILATION eType) {
}

void UKSGameStatics::SetTagVisibleStaticMesh(UObject* WorldContextObject, FName Tag, bool Enable) {
}

void UKSGameStatics::SetTagVisible(UObject* WorldContextObject, FName Tag, bool Enable) {
}

void UKSGameStatics::SetShowMultilingualGuide(UObject* WorldContextObject, bool Enable) {
}

void UKSGameStatics::SetResolution(ERESOLUTION_TYPE Type) {
}

void UKSGameStatics::SetPlayerDash(UObject* WorldContextObject, bool inEnable) {
}

void UKSGameStatics::SetPartyChatEnable(UObject* WorldContextObject, bool inEnable) {
}

void UKSGameStatics::SetMainMenuEnable(UObject* WorldContextObject, bool inEnable) {
}

void UKSGameStatics::SetLastBattleResult(EBATTLE_RESULT InResult) {
}

void UKSGameStatics::SetLanguage(EKSLanguage InLang) {
}

void UKSGameStatics::SetInHouse(UObject* WorldContextObject, bool inHouse) {
}

void UKSGameStatics::SetHiddenCollisionComponentChild(USceneComponent* pRootComp, bool bHidden) {
}

void UKSGameStatics::SetHiddenCollisionActorChild(AActor* pRootActor, bool bHidden) {
}

void UKSGameStatics::SetHiddenActorChild(AActor* pRootActor, bool bHidden) {
}

void UKSGameStatics::SetEventSpeedUpMode(UObject* WorldContextObject, int32 State, bool IsInputChange) {
}

void UKSGameStatics::SetEncountSignMode(UObject* WorldContextObject, bool InEncountSign) {
}

void UKSGameStatics::SetEncount(UObject* WorldContextObject, bool InEncount) {
}

void UKSGameStatics::SetBattleSpeed() {
}

void UKSGameStatics::SetBattleMode(UObject* WorldContextObject, bool InBattleMode) {
}

void UKSGameStatics::ResetGameOnGameOver(UObject* WorldContextObject) {
}

void UKSGameStatics::ResetBattleSpeedUp() {
}

EKSLanguage UKSGameStatics::PS_GetSystemLanguage() {
    return EKSLanguage::eJA;
}

bool UKSGameStatics::PS4IsEnterAssingCircle() {
    return false;
}

void UKSGameStatics::PrintCurrentRealTime(const UObject* WorldContextObject, const FString& Comment) {
}

UKSAutoSavingWidget* UKSGameStatics::OpenOptionAutoSavingUI(UObject* WorldContextObject) {
    return NULL;
}

UKSAutoSavingWidget* UKSGameStatics::OpenAutoSavingUI(UObject* WorldContextObject) {
    return NULL;
}

void UKSGameStatics::KSSetPerformanceModeChangedNotificationEnabled(bool IsEnable) {
}

bool UKSGameStatics::IsUseCharacterResourceDB() {
    return false;
}

bool UKSGameStatics::IsTrialEdition(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsTransitionFromLoadGame(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsReleaseMusicPlayer() {
    return false;
}

bool UKSGameStatics::IsPlayerActiveMode(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsPlayBalloonVoice(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsPlatformSwitch() {
    return false;
}

bool UKSGameStatics::IsPlatformPS5() {
    return false;
}

bool UKSGameStatics::IsPlatformPS4() {
    return false;
}

bool UKSGameStatics::IsPlatformPC(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsNoticeScreenSkip(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsMainMenuOpen(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsFadeUser(UObject* WorldContextObject, EFADE_USER User) {
    return false;
}

bool UKSGameStatics::IsFadeEnd(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsCheckInputEventFunction(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::IsCheckInputBattleFunction(UObject* WorldContextObject) {
    return false;
}

void UKSGameStatics::HideWipeAtBattleEnd_Immediately(UObject* WorldContextObject) {
}

bool UKSGameStatics::GetUseCustomFlipbook(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetTitlePlaying(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetShowMultilingualGuide(UObject* WorldContextObject) {
    return false;
}

ERESOLUTION_TYPE UKSGameStatics::GetResolution() {
    return ERESOLUTION_TYPE::eHD;
}

EMJRegion UKSGameStatics::GetRegion_Switch() {
    return EMJRegion::eUnknown;
}

FName UKSGameStatics::GetPlayVoiceWaitTimeLabel() {
    return NAME_None;
}

bool UKSGameStatics::GetPlayerDash(UObject* WorldContextObject) {
    return false;
}

EMJRegion UKSGameStatics::GetPlatformRegion() {
    return EMJRegion::eUnknown;
}

EKSLanguage UKSGameStatics::GetPlatformDefaultLanguage() {
    return EKSLanguage::eJA;
}

bool UKSGameStatics::GetPartyChatEnable(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetOpenMainMenuDisable(UObject* WorldContextObject) {
    return false;
}

EKSLanguage UKSGameStatics::GetOldLanguage() {
    return EKSLanguage::eJA;
}

FName UKSGameStatics::GetNoVoiceWaitTimeLabel() {
    return NAME_None;
}

bool UKSGameStatics::GetMainMenuEnable(UObject* WorldContextObject) {
    return false;
}

EBATTLE_RESULT UKSGameStatics::GetLastBattleResult() {
    return EBATTLE_RESULT::NONE;
}

EKSLanguage UKSGameStatics::GetLanguage() {
    return EKSLanguage::eJA;
}

AKSGameMode* UKSGameStatics::GetKSGameMode(UObject* WorldContextObject) {
    return NULL;
}

bool UKSGameStatics::GetInHouse(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetFieldCommandDisable(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetFCMode() {
    return false;
}

UKSFade* UKSGameStatics::GetFadeWidget(UObject* WorldContextObject) {
    return NULL;
}

EFADE_TYPE UKSGameStatics::GetFadeType(UObject* WorldContextObject) {
    return EFADE_TYPE::NONE;
}

bool UKSGameStatics::GetEventSpeedUpMode() {
    return false;
}

EEVENT_MODE UKSGameStatics::GetEventMode() {
    return EEVENT_MODE::eNORMAL;
}

bool UKSGameStatics::GetEventAutoMode() {
    return false;
}

bool UKSGameStatics::GetEncountSignMode(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetEncount(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetElapsedTimeZoneDisable(UObject* WorldContextObject) {
    return false;
}

bool UKSGameStatics::GetChangeTimeZoneDisable(UObject* WorldContextObject) {
    return false;
}

float UKSGameStatics::GetCalcBaseBattleSpeed() {
    return 0.0f;
}

bool UKSGameStatics::GetBuildRegionJP() {
    return false;
}

int32 UKSGameStatics::GetBitFlagIndexByName(FName FlagName) {
    return 0;
}

bool UKSGameStatics::GetBitFlagByName(FName FlagName) {
    return false;
}

bool UKSGameStatics::GetBattleMode(UObject* WorldContextObject) {
    return false;
}

float UKSGameStatics::GetBalloonThinkingTextWaitValue(UObject* WorldContextObject, bool PlayVoice) {
    return 0.0f;
}

float UKSGameStatics::GetBalloonTextWaitValue(UObject* WorldContextObject, bool PlayVoice) {
    return 0.0f;
}

float UKSGameStatics::GetBalloonSpeedValue(UObject* WorldContextObject) {
    return 0.0f;
}

bool UKSGameStatics::GetActivatedWindow(APlayerController* PlayerController) {
    return false;
}

UKSFade* UKSGameStatics::FadeOut(UObject* WorldContextObject, float EndTime, const FLinearColor Color, EFADE_USER FadeUser) {
    return NULL;
}

void UKSGameStatics::FadeInImmediately(UObject* WorldContextObject, EFADE_USER FadeUser) {
}

UKSFade* UKSGameStatics::FadeIn(UObject* WorldContextObject, float EndTime, const FLinearColor Color, EFADE_USER FadeUser) {
    return NULL;
}

void UKSGameStatics::EndTimerToComment(const FString& reason) {
}

void UKSGameStatics::EndTimer() {
}

void UKSGameStatics::Debug_SetFixMoveMode(UObject* WorldContextObject, EDebugFixMoveMode fixMoveMode) {
}

EDebugFixMoveMode UKSGameStatics::Debug_GetFixMoveMode(UObject* WorldContextObject) {
    return EDebugFixMoveMode::NONE;
}

UKSAutoSavingWidget* UKSGameStatics::CloseAutoSavingUI(UObject* WorldContextObject) {
    return NULL;
}

void UKSGameStatics::ClearFadeForcibly(UObject* WorldContextObject) {
}

float UKSGameStatics::CheckTimer() {
    return 0.0f;
}

void UKSGameStatics::ChangBattleSpeedUp() {
}

void UKSGameStatics::AddSequenceRequestForHolding(EREQUEST_TYPE Type, FMainSequneceRequestParam Param) {
}

void UKSGameStatics::AddSequenceRequest(EREQUEST_TYPE Type, FMainSequneceRequestParam Param) {
}

void UKSGameStatics::AcqQuitGame(UObject* WorldContextObject, APlayerController* PlayerController) {
}


