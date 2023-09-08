#include "WidgetTemporaryHiddenComponent.h"

UWidgetTemporaryHiddenComponent::UWidgetTemporaryHiddenComponent() {
    this->m_UiManager = NULL;
}

void UWidgetTemporaryHiddenComponent::TurnOffTemporaryHiddenFlag(EWIDGET_TEMPORARY_HIDE_USER hideUser) {
}

void UWidgetTemporaryHiddenComponent::Setup(AKSUIManager* uiManager) {
}

void UWidgetTemporaryHiddenComponent::ResetAllHiddenFlag() {
}

void UWidgetTemporaryHiddenComponent::OnStartBattle(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void UWidgetTemporaryHiddenComponent::OnEndBattle(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}

void UWidgetTemporaryHiddenComponent::HideWidgetTemporary(bool isHide, EWIDGET_TEMPORARY_HIDE_USER hideUser) {
}


