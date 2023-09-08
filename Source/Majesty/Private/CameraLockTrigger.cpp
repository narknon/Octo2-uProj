#include "CameraLockTrigger.h"

ACameraLockTrigger::ACameraLockTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bLock = false;
    this->m_bUnlock = false;
    this->m_bLockX = false;
    this->m_bLockY = false;
    this->m_bLockZ = false;
}

void ACameraLockTrigger::SetLimitPosition(const FVector& limitLock, const FVector& limitLockFar, const FVector& limitUnlock) {
}


FVector ACameraLockTrigger::ClamptLockPositionInRange(const FVector& lockPosition) {
    return FVector{};
}


