#include "PartySplitCharacterPlacementBoxBase.h"

UPartySplitCharacterPlacementBoxBase::UPartySplitCharacterPlacementBoxBase() : UUserWidget(FObjectInitializer::Get()) {
    this->m_PlacedCharacter = EPlayableCharacterID::eNONE;
    this->IsInFocus = false;
}

void UPartySplitCharacterPlacementBoxBase::SetPlacedCharacter_Implementation(EPlayableCharacterID CharacterID) {
}

void UPartySplitCharacterPlacementBoxBase::OutFocus_Implementation(bool isFast) {
}

void UPartySplitCharacterPlacementBoxBase::InFocus_Implementation(bool isFast) {
}

EPlayableCharacterID UPartySplitCharacterPlacementBoxBase::GetPlacedCharacter() {
    return EPlayableCharacterID::eNONE;
}


