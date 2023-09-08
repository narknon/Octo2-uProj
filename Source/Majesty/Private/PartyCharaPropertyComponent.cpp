#include "PartyCharaPropertyComponent.h"

UPartyCharaPropertyComponent::UPartyCharaPropertyComponent() {
    this->m_PlayerCharacterID = EPlayableCharacterID::eNONE;
}

EPlayableCharacterID UPartyCharaPropertyComponent::SetPlayerID(EPlayableCharacterID ID) {
    return EPlayableCharacterID::eNONE;
}

EPlayableCharacterID UPartyCharaPropertyComponent::GetPlayerID() {
    return EPlayableCharacterID::eNONE;
}


