#include "TownTableUtility.h"

UTownTableUtility::UTownTableUtility() {
}

int32 UTownTableUtility::TownLabelToID(FName Label) {
    return 0;
}

FName UTownTableUtility::TownIDToLabel(int32 ID) {
    return NAME_None;
}

bool UTownTableUtility::GetTownTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UTownTableUtility::GetTownTableRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FTownInfoData& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool UTownTableUtility::GetTownTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FTownInfoData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}


