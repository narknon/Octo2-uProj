#include "FieldCommandPreviewMenu.h"

UFieldCommandPreviewMenu::UFieldCommandPreviewMenu() {
    this->m_CurrentTabCursorIndex = 0;
    this->WidgetState = EFieldCommandPreviewMenuState::eNone;
}

void UFieldCommandPreviewMenu::SetState(EFieldCommandPreviewMenuState NextState) {
}

void UFieldCommandPreviewMenu::SetCurrentTabCursorIndex(int32 Index) {
}

void UFieldCommandPreviewMenu::OnUpdateState_Implementation(EFieldCommandPreviewMenuState CurrentState) {
}

void UFieldCommandPreviewMenu::OnEndState_Implementation(EFieldCommandPreviewMenuState CurrentState) {
}

void UFieldCommandPreviewMenu::OnDecide_Internal_Implementation() {
}

void UFieldCommandPreviewMenu::OnCursorUp_Internal_Implementation() {
}

void UFieldCommandPreviewMenu::OnCursorDown_Internal_Implementation() {
}

void UFieldCommandPreviewMenu::OnCancel_Internal_Implementation() {
}

void UFieldCommandPreviewMenu::OnBeginState_Implementation(EFieldCommandPreviewMenuState CurrentState) {
}

EFieldCommandPreviewMenuState UFieldCommandPreviewMenu::GetState() const {
    return EFieldCommandPreviewMenuState::eNone;
}

int32 UFieldCommandPreviewMenu::GetCurrentTabCursorIndex() {
    return 0;
}


