#include "PartySplitWidgetBase.h"

UPartySplitWidgetBase::UPartySplitWidgetBase() {
    this->m_WidgetState = EPARTY_SPLIT_WIDGET_STATE::eNone;
    this->m_MainPartyBox = NULL;
    this->m_CharacterGrid = NULL;
    this->m_PartySplitResult = NULL;
    this->m_CloseReason = EPARTY_SPLIT_CLOSE_REASON::eNone;
    this->debug_IsLoggingMode = false;
}

void UPartySplitWidgetBase::SetWidgetState_Implementation(EPARTY_SPLIT_WIDGET_STATE NewState) {
}

void UPartySplitWidgetBase::SetCursorPosition_Implementation(const FIntPoint& newPos) {
}

void UPartySplitWidgetBase::SetCharacterPlacementPosition_Implementation(const TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION>& newPositions) {
}

void UPartySplitWidgetBase::OnInputPlus_Implementation() {
}

void UPartySplitWidgetBase::OnInputMinus_Implementation() {
}

void UPartySplitWidgetBase::OnInputDecide_Implementation() {
}

void UPartySplitWidgetBase::OnInputCursor_Implementation(const FIntPoint& Input) {
}

void UPartySplitWidgetBase::OnInputCancel_Implementation() {
}

void UPartySplitWidgetBase::OnChangedWidgetState_Implementation(EPARTY_SPLIT_WIDGET_STATE NextState, EPARTY_SPLIT_WIDGET_STATE PrevState) {
}

EPARTY_SPLIT_WIDGET_STATE UPartySplitWidgetBase::GetWidgetState() const {
    return EPARTY_SPLIT_WIDGET_STATE::eNone;
}

UPartySplitCharacterPlacementBoxBase* UPartySplitWidgetBase::GetPlacementBoxByPlacementPos(EPARTY_SPLIT_PLACEMENT_POSITION keyPos) const {
    return NULL;
}

UPartySplitCharacterPlacementBoxBase* UPartySplitWidgetBase::GetPlacementBoxByCursorPos(const FIntPoint& keyPos) const {
    return NULL;
}

FIntPoint UPartySplitWidgetBase::GetCursorPosition() const {
    return FIntPoint{};
}

EPARTY_SPLIT_PLACEMENT_POSITION UPartySplitWidgetBase::GetCurrentSelectedPlacementPosition() const {
    return EPARTY_SPLIT_PLACEMENT_POSITION::eMain;
}

UPartySplitCharacterPlacementBoxBase* UPartySplitWidgetBase::GetCurrentSelectedPlacementBox() const {
    return NULL;
}

EPARTY_SPLIT_CLOSE_REASON UPartySplitWidgetBase::GetCloseReason() const {
    return EPARTY_SPLIT_CLOSE_REASON::eNone;
}

TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION> UPartySplitWidgetBase::GetCharacterPositions() const {
    return TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION>();
}

void UPartySplitWidgetBase::BroadcastOnClosedPartySplitWithResultDelegate() {
}


