#include "PlacementUtility.h"

UPlacementUtility::UPlacementUtility() {
}

bool UPlacementUtility::IsMerchantSubStoryFromPlacementLabel(FName PlacementLabel) {
    return false;
}

void UPlacementUtility::GetPlacementNameByLevelName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& outLabel, FName levelName) {
}

bool UPlacementUtility::GetPlacementInfo(FLabelListData& OutLabelInfo, FName RowName) {
    return false;
}

void UPlacementUtility::GetPlacementEventParamSetByIndex(const FPlacementData& PlacementData, int32 Index, FPlacementEventParamSet& outEventParamSet) {
}

void UPlacementUtility::GetPlacementDataRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
}

void UPlacementUtility::GetPlacementDataByLevelName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FPlacementData>& outInfoData, FName levelName) {
}

bool UPlacementUtility::GetPlacementData(FPlacementData& OutData, FName TargetLabel) {
    return false;
}

bool UPlacementUtility::GetNPCDataByPlacementInfo(FNPCData& OutData, FName PlacementLabel) {
    return false;
}

bool UPlacementUtility::GetNPCDataByNPCLabel(FNPCData& OutData, FName NPCLabel) {
    return false;
}

bool UPlacementUtility::GetActivePlacementEventParamSet(const FPlacementData& PlacementData, TArray<FPlacementEventParamSet>& outEventParamSet) {
    return false;
}

FName UPlacementUtility::GetActiveEventLabelFromEventTypeAndParam(FName NPCLabel, ENPCEVENT_TYPE EventType, FName EventParam) {
    return NAME_None;
}

void UPlacementUtility::EventTypeStringToByte(const FString& strData, uint8& retByte) {
}

void UPlacementUtility::Debug_OutputPlacementInfo(FName levelName) {
}

void UPlacementUtility::CharaDirStringToByte(const FString& strData, uint8& retByte) {
}


