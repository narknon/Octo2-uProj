#include "SeVibrationTableUtility.h"

USeVibrationTableUtility::USeVibrationTableUtility() {
}

bool USeVibrationTableUtility::GetSeVibrationTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool USeVibrationTableUtility::GetSeVibrationRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSeVibrationData& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool USeVibrationTableUtility::GetSeVibrationRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSeVibrationData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}


