#include "StaffCreditWidgetBase.h"

UStaffCreditWidgetBase::UStaffCreditWidgetBase() {
    this->m_IsScrollWidget = false;
}

bool UStaffCreditWidgetBase::UpdateStaging_Implementation(float stagingTime) {
    return false;
}


void UStaffCreditWidgetBase::SetStagingTime(float StartTime, float stagingTime) {
}

void UStaffCreditWidgetBase::SetStagingPositionY(float startY, float endY) {
}

void UStaffCreditWidgetBase::SetScrollWidget(bool isScroll) {
}

void UStaffCreditWidgetBase::SetCreditWidgetType(ECreditWidgetType Type) {
}

void UStaffCreditWidgetBase::SetCanvasPosition(FVector2D& Pos) {
}

void UStaffCreditWidgetBase::SetActive(bool NewIsActive) {
}

bool UStaffCreditWidgetBase::IsScrollWidget() const {
    return false;
}

bool UStaffCreditWidgetBase::IsComplete_Implementation() {
    return false;
}

bool UStaffCreditWidgetBase::IsActive() const {
    return false;
}

float UStaffCreditWidgetBase::GetWidgetWidth() const {
    return 0.0f;
}

FVector2D UStaffCreditWidgetBase::GetWidgetSize() const {
    return FVector2D{};
}

float UStaffCreditWidgetBase::GetWidgetHeight() const {
    return 0.0f;
}

float UStaffCreditWidgetBase::GetStartTime() const {
    return 0.0f;
}

ECreditWidgetType UStaffCreditWidgetBase::GetCreditWidgetType() const {
    return ECreditWidgetType::NONE;
}

FVector2D UStaffCreditWidgetBase::GetCanvasPosition() const {
    return FVector2D{};
}

void UStaffCreditWidgetBase::CalcWidgetSize() {
}


