#include "EventFlagObjectBase.h"

AEventFlagObjectBase::AEventFlagObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrologueForceHidden = false;
    this->SwitchVisibilityOnPostTick = false;
}

void AEventFlagObjectBase::SetVisible_Implementation(bool bEnable) {
}

bool AEventFlagObjectBase::SetupEventFlagVisible_Implementation() {
    return false;
}

void AEventFlagObjectBase::SetupEnable_Implementation(int32 nFlagIndex, bool bStatusFlag) {
}

TArray<FEventFlagData> AEventFlagObjectBase::GetEventFlagArray() {
    return TArray<FEventFlagData>();
}


