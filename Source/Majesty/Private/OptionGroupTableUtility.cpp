#include "OptionGroupTableUtility.h"

UOptionGroupTableUtility::UOptionGroupTableUtility() {
}

int32 UOptionGroupTableUtility::OptionGroupLabelToID(FName OptionGroupLable) {
    return 0;
}

FName UOptionGroupTableUtility::OptionGroupIDToLabel(int32 OptionGroupID) {
    return NAME_None;
}

bool UOptionGroupTableUtility::GetOptionGroupTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UOptionGroupTableUtility::GetOptionGroupRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FOptionGroupData& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool UOptionGroupTableUtility::GetOptionGroupRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FOptionGroupData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}


