#include "WorldMapTableUtility.h"

UWorldMapTableUtility::UWorldMapTableUtility() {
}

void UWorldMapTableUtility::NotifyWorldMapDb(FName dbName, EDBNoticeType notice) {
}

bool UWorldMapTableUtility::GetWorldMapTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UWorldMapTableUtility::GetWorldMapRowDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FWorldMapTable& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

FName UWorldMapTableUtility::GetWorldMapLabelByLevelLabel(FName levelLabel) {
    return NAME_None;
}


