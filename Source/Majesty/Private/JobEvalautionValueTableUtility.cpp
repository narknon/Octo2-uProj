#include "JobEvalautionValueTableUtility.h"

UJobEvalautionValueTableUtility::UJobEvalautionValueTableUtility() {
}

bool UJobEvalautionValueTableUtility::GetJobEvalautionValueTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobEvalautionValueData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UJobEvalautionValueTableUtility::GetJobEvalautionValueTableRomDataFromJobType(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobEvalautionValueData& OutData, EJOB_TYPE JobType, bool LogEnable) {
    return false;
}

bool UJobEvalautionValueTableUtility::GeJobEvalautionValueTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}


