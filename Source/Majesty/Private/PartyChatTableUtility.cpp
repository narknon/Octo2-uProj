#include "PartyChatTableUtility.h"

UPartyChatTableUtility::UPartyChatTableUtility() {
}

int32 UPartyChatTableUtility::PartyChatLabelToID(FName PartyChatLable) {
    return 0;
}

FName UPartyChatTableUtility::PartyChatIDToLabel(int32 PartyChatId) {
    return NAME_None;
}

void UPartyChatTableUtility::NotifyPartyChatDB(FName dbName, EDBNoticeType notice) {
}

bool UPartyChatTableUtility::GetPartyChatTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UPartyChatTableUtility::GetPartyChatRowDataFromEventLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPartyChat& OutData, FName EventLabel, bool LogEnable) {
    return false;
}

bool UPartyChatTableUtility::GetPartyChatRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPartyChat& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool UPartyChatTableUtility::GetPartyChatRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPartyChat& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

TArray<FName> UPartyChatTableUtility::GetPartyChatLabelsRelatedMainStory(FName MainStoryLabel) {
    return TArray<FName>();
}

TArray<FName> UPartyChatTableUtility::GetPartyChatLabelsOthers() {
    return TArray<FName>();
}

TArray<FName> UPartyChatTableUtility::GetPartyChatLabelsByType(EPARTY_CHAT_TYPE Type) {
    return TArray<FName>();
}


