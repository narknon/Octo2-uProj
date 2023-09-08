#include "WorldMapCursorBase.h"

UWorldMapCursorBase::UWorldMapCursorBase() {
    this->m_IsSnapping = false;
    this->CursorImage = NULL;
    this->m_SnapDurationTime = 0.00f;
    this->m_SnapElapseTime = 0.00f;
}

bool UWorldMapCursorBase::UpdateSnap(float DeltaTime, FVector2D& outCouldNotMoveValue) {
    return false;
}

void UWorldMapCursorBase::StartSnap(FVector2D SnapTargetPos, float SnapDuration) {
}

FVector2D UWorldMapCursorBase::SnapInterpolation_Implementation(const FVector2D& Start, const FVector2D& End, float Alpha) {
    return FVector2D{};
}

FVector2D UWorldMapCursorBase::SetPosition(const FVector2D& newPos, bool keepDirection) {
    return FVector2D{};
}

void UWorldMapCursorBase::SetFastRotaionLinet(const FVector2D& FastRotaionLine) {
}

void UWorldMapCursorBase::SetCursorPositionLimit(const FVector2D& CursorPositionLimit) {
}

void UWorldMapCursorBase::OverrideSnapPosition(const FVector2D& newCursorPos, const FVector2D& newTargetPos) {
}


FVector2D UWorldMapCursorBase::GetPosition() const {
    return FVector2D{};
}

void UWorldMapCursorBase::CancelSnap() {
}

FVector2D UWorldMapCursorBase::AddCursorPosition(const FVector2D& deltaPos) {
    return FVector2D{};
}


