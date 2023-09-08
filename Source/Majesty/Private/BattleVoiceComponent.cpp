#include "BattleVoiceComponent.h"

UBattleVoiceComponent::UBattleVoiceComponent() {
    this->m_cOwnerPlayer = NULL;
    this->m_bReadyBattleVoice = false;
    this->m_bSettledPlayOnce_OnTakeDamage = false;
    this->m_bEnableDetailLog = false;
}

void UBattleVoiceComponent::SetSettledPlayOnce_OnTakeDamage(bool bEnable) {
}



bool UBattleVoiceComponent::IsReadyBattleVoice() {
    return false;
}



bool UBattleVoiceComponent::GetSettledPlayOnce_OnTakeDamage() {
    return false;
}

void UBattleVoiceComponent::GetEventFlag(FName FlagName, bool& Value) {
}


