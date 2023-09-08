#include "PlayerPropertyComponent.h"

UPlayerPropertyComponent::UPlayerPropertyComponent() {
    this->m_CurrentTransportType = ETRANSPORTATION_TYPE::NORMAL;
    this->m_CurrentTransportEffectType = ETRANSPORT_EFFECT::WALK;
    this->m_CurrentLevelArea = LEVEL_AREA_TYPE::NONE;
    this->m_PlayerCharacterID = EPlayableCharacterID::eNONE;
    this->m_EnableFCJudge = false;
    this->m_RefTalkCharacter = NULL;
    this->m_RefEventTriger = NULL;
    this->m_RefSwitchIndoorTrigger = NULL;
    this->m_IsPTC_CheckSwitchIndoorTrigger = false;
    this->m_IsMissionRecord_CheckSwitchIndoorTrigger = false;
    this->m_IsPTC_SwitchIndoorTriggerEndOverlapIgnore = false;
}

void UPlayerPropertyComponent::SetRefTalkCharacter(AKSCharacterBase* Val) {
}

void UPlayerPropertyComponent::SetRefSwitchIndoorTrigger(ASwitchIndoorTrigger* Val) {
}

void UPlayerPropertyComponent::SetRefEventTriger(AEventTriggerBox* Val) {
}

EPlayableCharacterID UPlayerPropertyComponent::SetPlayerID(EPlayableCharacterID ID) {
    return EPlayableCharacterID::eNONE;
}

void UPlayerPropertyComponent::SetMissionRecord_CheckSwitchIndoorTrigger(bool bIsTriiger) {
}

void UPlayerPropertyComponent::SetEnableFCJudge(bool Val) {
}

ETRANSPORTATION_TYPE UPlayerPropertyComponent::SetCurrentTransportType(ETRANSPORTATION_TYPE Value) {
    return ETRANSPORTATION_TYPE::NORMAL;
}

ETRANSPORT_EFFECT UPlayerPropertyComponent::SetCurrentTransportEffectType(ETRANSPORT_EFFECT Value) {
    return ETRANSPORT_EFFECT::WALK;
}

LEVEL_AREA_TYPE UPlayerPropertyComponent::SetCurrentLevelArea(LEVEL_AREA_TYPE Value) {
    return LEVEL_AREA_TYPE::NONE;
}

bool UPlayerPropertyComponent::IsMissionRecord_CheckSwitchIndoorTrigger() {
    return false;
}

AKSCharacterBase* UPlayerPropertyComponent::GetRefTalkCharacter() const {
    return NULL;
}

ASwitchIndoorTrigger* UPlayerPropertyComponent::GetRefSwitchIndoorTrigger() const {
    return NULL;
}

AEventTriggerBox* UPlayerPropertyComponent::GetRefEventTriger() const {
    return NULL;
}

EPlayableCharacterID UPlayerPropertyComponent::GetPlayerID() {
    return EPlayableCharacterID::eNONE;
}

bool UPlayerPropertyComponent::GetEnableFCJudge() const {
    return false;
}

ETRANSPORTATION_TYPE UPlayerPropertyComponent::GetCurrentTransportType() {
    return ETRANSPORTATION_TYPE::NORMAL;
}

ETRANSPORT_EFFECT UPlayerPropertyComponent::GetCurrentTransportEffectType() {
    return ETRANSPORT_EFFECT::WALK;
}

LEVEL_AREA_TYPE UPlayerPropertyComponent::GetCurrentLevelArea() {
    return LEVEL_AREA_TYPE::NONE;
}

void UPlayerPropertyComponent::ClearReferenceObject() {
}


