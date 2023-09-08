#include "FadeManager.h"

AFadeManager::AFadeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FadeWidget = NULL;
    this->m_BattleWipeWidget = NULL;
    this->m_FadeUser = 0;
}

void AFadeManager::WipeOut(EWIPE_KIND WipeKind) {
}

void AFadeManager::WipeInAtBattleEndFromEvent() {
}

void AFadeManager::WipeIn(EWIPE_KIND WipeKind) {
}

void AFadeManager::SetIsCancelWipeOutAtBattleEnd(bool Val) {
}

bool AFadeManager::IsFadeUser(EFADE_USER User) {
    return false;
}

bool AFadeManager::IsFadeEnd() {
    return false;
}

bool AFadeManager::IsBattleWipeActive() {
    return false;
}

bool AFadeManager::IsBattleEndWipeOut() {
    return false;
}

void AFadeManager::HideBattleEndWipe_Immediately() {
}

bool AFadeManager::GetIsCancelWipeOutAtBattleEnd() const {
    return false;
}

UKSFade* AFadeManager::GetFadeWidget(EFADE_KIND FadeKind) {
    return NULL;
}

int32 AFadeManager::GetFadeUser() const {
    return 0;
}

EFADE_TYPE AFadeManager::GetFadeType(EFADE_KIND FadeKind) {
    return EFADE_TYPE::NONE;
}

UBattleWipeBase* AFadeManager::GetBattleWipeWidget() {
    return NULL;
}

UKSFade* AFadeManager::FadeOut(EFADE_KIND FadeKind, float EndTime, const FLinearColor Color, EFADE_USER FadeUser) {
    return NULL;
}

UKSFade* AFadeManager::FadeInImmediately(EFADE_KIND FadeKind, EFADE_USER FadeUser) {
    return NULL;
}

UKSFade* AFadeManager::FadeIn(EFADE_KIND FadeKind, float EndTime, const FLinearColor Color, EFADE_USER FadeUser) {
    return NULL;
}

UKSFade* AFadeManager::ClearFadeForcibly(EFADE_KIND FadeKind) {
    return NULL;
}


