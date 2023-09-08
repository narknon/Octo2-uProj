#include "DebugBattleLogComponent.h"

UDebugBattleLogComponent::UDebugBattleLogComponent() {
}

int32 UDebugBattleLogComponent::GetBattleLogListNumMax() {
    return 0;
}

TArray<FDebugBattleLog> UDebugBattleLogComponent::GetBattleLogList() {
    return TArray<FDebugBattleLog>();
}

bool UDebugBattleLogComponent::GetBattleLogDirty() {
    return false;
}

int32 UDebugBattleLogComponent::GetBattleLogCount() {
    return 0;
}

void UDebugBattleLogComponent::ClearBattleLogDirty() {
}


