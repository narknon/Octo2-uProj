#include "DebugBattleCharaComponent.h"

UDebugBattleCharaComponent::UDebugBattleCharaComponent() {
}

void UDebugBattleCharaComponent::SetMasterParameter(ECHARACTER_PARAM_TYPE eType, int32 nValue) {
}

void UDebugBattleCharaComponent::SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue) {
}

void UDebugBattleCharaComponent::SetCurrentMP(int32 nValue) {
}

void UDebugBattleCharaComponent::SetCurrentHP(int32 nValue) {
}

int32 UDebugBattleCharaComponent::GetTotalParameter(ECHARACTER_PARAM_TYPE eType) {
    return 0;
}

int32 UDebugBattleCharaComponent::GetMasterParameter(ECHARACTER_PARAM_TYPE eType) {
    return 0;
}

int32 UDebugBattleCharaComponent::GetCurrentShield() {
    return 0;
}

bool UDebugBattleCharaComponent::GetCurrentPOT(int32& outActionPoint, int32& outActionPointMax) {
    return false;
}

int32 UDebugBattleCharaComponent::GetCurrentMP() {
    return 0;
}

int32 UDebugBattleCharaComponent::GetCurrentHP() {
    return 0;
}

int32 UDebugBattleCharaComponent::GetCurrentBP() {
    return 0;
}

void UDebugBattleCharaComponent::GetCharacterName(FText& strCharacterName) {
}

TArray<FItemData> UDebugBattleCharaComponent::GetCharacterEquipmentList() {
    return TArray<FItemData>();
}

AKSCharacterBase* UDebugBattleCharaComponent::GetAnimationCharacter() {
    return NULL;
}

bool UDebugBattleCharaComponent::CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType) {
    return false;
}


