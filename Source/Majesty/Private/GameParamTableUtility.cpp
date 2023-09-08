#include "GameParamTableUtility.h"

UGameParamTableUtility::UGameParamTableUtility() {
}

bool UGameParamTableUtility::GetGameParamTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UGameParamTableUtility::GetGameParamTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGameParamInfo& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UGameParamTableUtility::GetBattleParamRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UGameParamTableUtility::GetBattleParamData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGameParamInfo& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}


