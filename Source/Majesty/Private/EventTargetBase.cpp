#include "EventTargetBase.h"

AEventTargetBase::AEventTargetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerManualFocusDistance = 0.00f;
}


void AEventTargetBase::SetPlayerManualFocusDistance(float ManualDistance) {
}



