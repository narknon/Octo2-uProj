#include "DebugBattleManagerComponent.h"

UDebugBattleManagerComponent::UDebugBattleManagerComponent() {
}

void UDebugBattleManagerComponent::SetFixedWonderAbility(FName strAbilityName) {
}

void UDebugBattleManagerComponent::SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue) {
}

void UDebugBattleManagerComponent::SetDebugParameter(EBATTLE_DEBUG_SWITCH eType, int32 nValue) {
}

bool UDebugBattleManagerComponent::SetConvertPlayerIDList(bool bEnable, TMap<int32, FName>& acConvertPlayerIDList) {
    return false;
}

bool UDebugBattleManagerComponent::IsEnableConvertPlayerID() {
    return false;
}

FName UDebugBattleManagerComponent::GetFixedWonderAbility() {
    return NAME_None;
}

int32 UDebugBattleManagerComponent::GetDebugParameter(EBATTLE_DEBUG_SWITCH eType) {
    return 0;
}

FName UDebugBattleManagerComponent::ConvertPlayerIDForBattleEventDebug(int32 nPlayerID) {
    return NAME_None;
}

bool UDebugBattleManagerComponent::CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType) {
    return false;
}


