#include "NPCDataBaseUtility.h"

UNPCDataBaseUtility::UNPCDataBaseUtility() {
}

bool UNPCDataBaseUtility::GetNPCPurchaseData(FName RowName, FNPCPurchaseDataBase& outPurchaseData) {
    return false;
}

bool UNPCDataBaseUtility::GetNPCLeadData(FName RowName, FNPCLeadDataBase& outLeadData) {
    return false;
}

bool UNPCDataBaseUtility::GetNPCHearInfoData(FName RowName, FNPCHearInfoDataBase& outHearInfoData) {
    return false;
}

bool UNPCDataBaseUtility::GetNPCHearData(FName RowName, FNPCHearDataBase& outHearData) {
    return false;
}

bool UNPCDataBaseUtility::GetNPCDataBaseRowNames(ENPC_DB_TYPE Type, TArray<FName>& OutRowNames) {
    return false;
}

bool UNPCDataBaseUtility::GetNPCBattleData(FName RowName, FNPCBattleData& outBattleData) {
    return false;
}


