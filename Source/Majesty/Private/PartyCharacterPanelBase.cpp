#include "PartyCharacterPanelBase.h"

UPartyCharacterPanelBase::UPartyCharacterPanelBase() {
    this->IsUseUiResource = false;
}




void UPartyCharacterPanelBase::SetIsUseUiResource(bool Val) {
}



void UPartyCharacterPanelBase::SetCharacterData_Implementation(const FSavePlayerCharacterData& CharacterData) {
}

void UPartyCharacterPanelBase::OutFocus_Implementation() {
}

bool UPartyCharacterPanelBase::GetIsUseUiResource() const {
    return false;
}

FSavePlayerCharacterData UPartyCharacterPanelBase::GetCharacterData() const {
    return FSavePlayerCharacterData{};
}

void UPartyCharacterPanelBase::Focus_Implementation() {
}

void UPartyCharacterPanelBase::Decide_Implementation() {
}


