#include "AbilityDataTableUtility.h"

UAbilityDataTableUtility::UAbilityDataTableUtility() {
}

bool UAbilityDataTableUtility::IsDivineAbilitySet(FName TargetLabel, bool LogEnable) {
    return false;
}

bool UAbilityDataTableUtility::GetAbilitySetRowData(FAbilitySetDataBase& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UAbilityDataTableUtility::GetAbilityRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UAbilityDataTableUtility::GetAbilityRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FAbilityDataBase& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}


