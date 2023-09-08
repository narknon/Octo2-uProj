#include "HolyTorchItemTriggerBase.h"

AHolyTorchItemTriggerBase::AHolyTorchItemTriggerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HolyTorchType = EHOLY_TORCH_TYPE::DESERT;
    this->TriggerStartFlag = 0;
    this->TriggerEndFlag = 0;
}

void AHolyTorchItemTriggerBase::SwitchShiningMirror(bool bEnable) {
}

bool AHolyTorchItemTriggerBase::IsTriggerEnabled() {
    return false;
}

bool AHolyTorchItemTriggerBase::GetShiningMirrorFlag() {
    return false;
}

FName AHolyTorchItemTriggerBase::GetPlayEvent() {
    return NAME_None;
}

bool AHolyTorchItemTriggerBase::GetCharacterConditon(int32 nIndex) {
    return false;
}

bool AHolyTorchItemTriggerBase::CheckReburnCondition() {
    return false;
}

void AHolyTorchItemTriggerBase::CheckLuminusStatue_Implementation() {
}


