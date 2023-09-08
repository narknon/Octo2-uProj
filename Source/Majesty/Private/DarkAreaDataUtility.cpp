#include "DarkAreaDataUtility.h"

UDarkAreaDataUtility::UDarkAreaDataUtility() {
}

void UDarkAreaDataUtility::SetIsDarkendDarkArea(const FName& DarkAreaLabel, bool isDarkend) {
}

void UDarkAreaDataUtility::SetIsDarkendAllDarkArea(bool isDarkend) {
}

bool UDarkAreaDataUtility::IsLevelDarkend(const FName& levelLabel) {
    return false;
}

bool UDarkAreaDataUtility::IsLevelBelongDarkArea(const FName& levelLabel) {
    return false;
}

bool UDarkAreaDataUtility::IsDarkendDarkAreaLabel(const FName& DarkAreaLabel) {
    return false;
}

bool UDarkAreaDataUtility::IsDarkendAnyDarkArea() {
    return false;
}

bool UDarkAreaDataUtility::IsAllowLostWayLevel(const FName& levelLabel) {
    return false;
}

bool UDarkAreaDataUtility::GetDarkendWorldMapLabels(TArray<FName>& outWorldMapLabel) {
    return false;
}

bool UDarkAreaDataUtility::GetDarkendLevelLabels(TArray<FName>& outLevelLabel) {
    return false;
}

bool UDarkAreaDataUtility::GetDarkendDarkAreaLabels(TArray<FName>& outDarkAreaLabel) {
    return false;
}

bool UDarkAreaDataUtility::GetDarkAreaLabelByLevel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, const FName& levelLabel, FName& outDarkAreaLabel) {
    return false;
}

bool UDarkAreaDataUtility::GetDarkAreaByLevel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, const FName& levelLabel, FDarkAreaData& outDarkArea) {
    return false;
}

void UDarkAreaDataUtility::GetAllDarkAreaLabels(TArray<FName>& outDarkAreaLabel) {
}


