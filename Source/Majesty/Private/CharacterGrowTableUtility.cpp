#include "CharacterGrowTableUtility.h"

UCharacterGrowTableUtility::UCharacterGrowTableUtility() {
}

int32 UCharacterGrowTableUtility::GetTotalExpFromLevel(int32 Level) {
    return 0;
}

bool UCharacterGrowTableUtility::GetCharacterGrowTableRowDataByLevel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FCharacterGrowData& OutData, int32 Level, bool LogEnable) {
    return false;
}

bool UCharacterGrowTableUtility::GetCharacterGrowTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FCharacterGrowData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

int32 UCharacterGrowTableUtility::CalcLevelFromTotalExp(int32 Exp) {
    return 0;
}


