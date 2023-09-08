#include "NPCSaveDataUtil.h"

UNPCSaveDataUtil::UNPCSaveDataUtil() {
}

bool UNPCSaveDataUtil::SetNPCTZChangeSwoonRevivalCount(int32 nNPCIndex, int32 nTimeZoneCnt) {
    return false;
}

bool UNPCSaveDataUtil::SetNPCSwoonFlag(FName NPCLabel, bool Flag, ENpcSwoonType SwoonType, int32& NPCIndex) {
    return false;
}

bool UNPCSaveDataUtil::SetNPCEventData(int32 NPCID, FNpcEventData NpcEventData) {
    return false;
}

bool UNPCSaveDataUtil::IsSwoonNPC(FName NPCLabel) {
    return false;
}

int32 UNPCSaveDataUtil::GetNPCTZChangeSwoonRevivalCount(int32 nNPCIndex) {
    return 0;
}

bool UNPCSaveDataUtil::GetNPCEventDataByLabel(FName NPCLabel, FNpcEventData& NpcEventData, int32& NPCID) {
    return false;
}

bool UNPCSaveDataUtil::GetNPCEventDataByID(int32 NPCID, FNpcEventData& Out) {
    return false;
}

void UNPCSaveDataUtil::DEBUG_ClearNpcPurchasedItems(FName NPCLabel) {
}

void UNPCSaveDataUtil::DEBUG_ClearNpcHearFlag(FName NPCLabel) {
}

void UNPCSaveDataUtil::DEBUG_ClearAllNpcPurchasedItems() {
}

TArray<int32> UNPCSaveDataUtil::DEBUG_ClearAllNpcHearFlag() {
    return TArray<int32>();
}


