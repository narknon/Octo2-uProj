#include "EncountDataTableUtility.h"

UEncountDataTableUtility::UEncountDataTableUtility() {
}

bool UEncountDataTableUtility::GetEncountVolumeRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountVolume& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool UEncountDataTableUtility::GetEncountVolumeRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountVolume& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UEncountDataTableUtility::GetEncountTriggerRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountTriggerData& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool UEncountDataTableUtility::GetEncountTriggerRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountTriggerData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UEncountDataTableUtility::GetEncountTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, EEncountTableType Type) {
    return false;
}

int32 UEncountDataTableUtility::EncountTriggerLabelToId(FName EncountTriggerLabel) {
    return 0;
}

FName UEncountDataTableUtility::EncountTriggerIdToLabel(int32 EncountTriggerId) {
    return NAME_None;
}


