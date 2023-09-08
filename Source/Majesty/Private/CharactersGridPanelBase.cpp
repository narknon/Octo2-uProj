#include "CharactersGridPanelBase.h"

UCharactersGridPanelBase::UCharactersGridPanelBase() : UUserWidget(FObjectInitializer::Get()) {
    this->m_WidgetState = ECHARACTER_GRID_PANEL_WIDGET_STATE::eNone;
}

void UCharactersGridPanelBase::SetWidgetState(ECHARACTER_GRID_PANEL_WIDGET_STATE NewState) {
}


void UCharactersGridPanelBase::SetMember_Implementation(const TArray<FCharacterGridPanelParam>& newMember) {
}

void UCharactersGridPanelBase::SetCursorPosition_Implementation(const FIntPoint& newPos) {
}

void UCharactersGridPanelBase::Open_Implementation() {
}

void UCharactersGridPanelBase::MoveCursor_Implementation(const FIntPoint& Delta) {
}

TArray<UPartyCharPanelSelectBackBase*> UCharactersGridPanelBase::GetPartyCharacterPanelSelectBackRefs() const {
    return TArray<UPartyCharPanelSelectBackBase*>();
}

TArray<UPartyCharacterPanelBase*> UCharactersGridPanelBase::GetPartyCharacterPanelRefs() const {
    return TArray<UPartyCharacterPanelBase*>();
}

bool UCharactersGridPanelBase::GetPartyCharacterPanelByPos(const FIntPoint& Pos, UPartyCharacterPanelBase*& outPanel, UPartyCharPanelSelectBackBase*& outSelectBack) const {
    return false;
}

FIntPoint UCharactersGridPanelBase::GetCursorPosition() const {
    return FIntPoint{};
}

void UCharactersGridPanelBase::Decide_Implementation() {
}

void UCharactersGridPanelBase::Close_Implementation() {
}

void UCharactersGridPanelBase::BroadcastOnSelectedCharacter(EPlayableCharacterID PlayerID) {
}

void UCharactersGridPanelBase::BroadcastOnOpenedDelegate() {
}

void UCharactersGridPanelBase::BroadcastOnClosedDelegate() {
}


