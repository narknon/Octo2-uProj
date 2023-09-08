#include "KSUserWidgetBase.h"

UKSUserWidgetBase::UKSUserWidgetBase() {
    this->m_TemporaryHideUser = 0;
    this->OpenAnim = NULL;
    this->CloseAnim = NULL;
}

void UKSUserWidgetBase::UpdateOpening_Implementation() {
}

void UKSUserWidgetBase::UpdateMain_Implementation() {
}

void UKSUserWidgetBase::UpdateClosing_Implementation() {
}

void UKSUserWidgetBase::UIOpen_Implementation() {
}

void UKSUserWidgetBase::UIClose_Implementation() {
}

void UKSUserWidgetBase::TurnOffTemporaryHiddenFlag(EWIDGET_TEMPORARY_HIDE_USER hideUser) {
}

void UKSUserWidgetBase::TickUpdateState(float fDeltaTime) {
}

bool UKSUserWidgetBase::SetReference_Implementation() {
    return false;
}

void UKSUserWidgetBase::SetManualAnimationUpdate(bool bManual) {
}

void UKSUserWidgetBase::ResetInputAllowed() {
}

void UKSUserWidgetBase::ResetFromTitle_Implementation() {
}

void UKSUserWidgetBase::ResetForceUIClose() {
}


void UKSUserWidgetBase::OnResetHiddenFlag_Implementation() {
}

void UKSUserWidgetBase::OnOpenFinish_Implementation() {
}

void UKSUserWidgetBase::OnCloseFinish_Implementation() {
}


void UKSUserWidgetBase::ManualAnimationUpdate(const FGeometry& MyGeometry, float InDeltaTime) {
}

bool UKSUserWidgetBase::IsWait() const {
    return false;
}

bool UKSUserWidgetBase::IsUpdate() {
    return false;
}

bool UKSUserWidgetBase::IsTemporaryHidden() {
    return false;
}

bool UKSUserWidgetBase::IsRunning_Implementation() {
    return false;
}

bool UKSUserWidgetBase::IsForceClosing() const {
    return false;
}

bool UKSUserWidgetBase::IsChangeStateOpenFinish_Implementation() {
    return false;
}

bool UKSUserWidgetBase::IsChangeStateCloseFinish_Implementation() {
    return false;
}

bool UKSUserWidgetBase::Init_Implementation() {
    return false;
}

void UKSUserWidgetBase::HideTemporaryInternal_Implementation(bool isHidden, EWIDGET_TEMPORARY_HIDE_USER hideUser) {
}

void UKSUserWidgetBase::HideTemporary(bool isHidden, EWIDGET_TEMPORARY_HIDE_USER hideUser) {
}

bool UKSUserWidgetBase::GetPlayingAnimation(UWidgetAnimation*& Animation) {
    return false;
}

bool UKSUserWidgetBase::GetManualAnimationUpdate() {
    return false;
}

float UKSUserWidgetBase::GetDeltaTime() {
    return 0.0f;
}

void UKSUserWidgetBase::ForceUIClose() {
}

UUserWidget* UKSUserWidgetBase::FindWidget(const FName& WidgetName) {
    return NULL;
}

FString UKSUserWidgetBase::Debug_GetStateInfoAsString_Implementation() {
    return TEXT("");
}


bool UKSUserWidgetBase::CheckInputAllowed() {
    return false;
}


