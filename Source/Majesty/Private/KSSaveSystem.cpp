#include "KSSaveSystem.h"

UKSSaveSystem::UKSSaveSystem() {
    this->SaveSlotData.AddDefaulted(10);
}

void UKSSaveSystem::SetSlotdata(EKSSaveSlotName SlotNo, FKSSaveSlotData slotData) {
}

void UKSSaveSystem::SetParam(EKSSaveDataParamType ParamType, int32 Param) {
}

void UKSSaveSystem::SetKeyConfigParam(EKSKeyConfigElement ParamType, int32 Param) {
}

void UKSSaveSystem::SetKeyboardLayoutParam(EKeyboardLayoutType Param) {
}

void UKSSaveSystem::SetFlag(EKSSaveDataFlagType flagType, bool Flag) {
}

void UKSSaveSystem::MergeActivitySaveData(const UKSSaveSystem* Other) {
}

void UKSSaveSystem::GetSlotdata(EKSSaveSlotName SlotNo, FKSSaveSlotData& outSlotData) const {
}

void UKSSaveSystem::GetParamArray(TArray<int32>& outParam) {
}

int32 UKSSaveSystem::GetParam(EKSSaveDataParamType ParamType) const {
    return 0;
}

void UKSSaveSystem::GetKeyConfigParamArray(TArray<int32>& outParam) {
}

int32 UKSSaveSystem::GetKeyConfigParam(EKSKeyConfigElement ParamType) const {
    return 0;
}

EKeyboardLayoutType UKSSaveSystem::GetKeyboardLayoutParam() {
    return EKeyboardLayoutType::TYPE_NORMAL;
}

void UKSSaveSystem::GetFlagArray(TArray<int32>& outFlag) {
}

bool UKSSaveSystem::GetFlag(EKSSaveDataFlagType flagType) const {
    return false;
}

void UKSSaveSystem::Debug_OutputAllData() {
}


