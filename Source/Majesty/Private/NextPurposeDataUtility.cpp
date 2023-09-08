#include "NextPurposeDataUtility.h"

UNextPurposeDataUtility::UNextPurposeDataUtility() {
}

void UNextPurposeDataUtility::NotifyNextPurposeDataDB(FName dbName, EDBNoticeType notice) {
}

bool UNextPurposeDataUtility::GetNextPurposeTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, ENextPurposeDataType Type) {
    return false;
}

bool UNextPurposeDataUtility::GetNextPurposeRowDataByID(FNextPurposeData& OutData, int32 TargetID) {
    return false;
}

bool UNextPurposeDataUtility::GetNextPurposeRowData(FNextPurposeData& OutData, FName TargetLabel) {
    return false;
}

bool UNextPurposeDataUtility::GetNextPurposeLabelsByMainStory(TArray<FName>& outLabels, FName MainStoryLabel) {
    return false;
}

void UNextPurposeDataUtility::GetNextPurposeDataByMainStoryTaskLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FNextPurposeData& OutData, FName mainStoryTaskLabel) {
}


