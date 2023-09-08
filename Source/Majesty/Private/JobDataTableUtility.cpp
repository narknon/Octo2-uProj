#include "JobDataTableUtility.h"

UJobDataTableUtility::UJobDataTableUtility() {
}

void UJobDataTableUtility::NotifyJobDataDB(FName dbName, EDBNoticeType notice) {
}

TArray<FName> UJobDataTableUtility::GetObtainJobItem() {
    return TArray<FName>();
}

bool UJobDataTableUtility::GetJobDataTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UJobDataTableUtility::GetJobDataByJobID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobData& OutData, int32 JobID) {
    return false;
}

bool UJobDataTableUtility::GeJobDataTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}


