#include "LevelTableUtility.h"

ULevelTableUtility::ULevelTableUtility() {
}

FName ULevelTableUtility::MakeLevelTriggerLabel(FName levelName, ELevelTriggerID TriggerID) {
    return NAME_None;
}

int32 ULevelTableUtility::LevelLabelToID(FName levelLabel) {
    return 0;
}

FName ULevelTableUtility::LevelIDToLabel(int32 levelId) {
    return NAME_None;
}

bool ULevelTableUtility::IsSeaLevel(FName levelName) {
    return false;
}

bool ULevelTableUtility::IsInGameLevel(const FLevelInfoData& levelData) {
    return false;
}

void ULevelTableUtility::GetLevelTriggerParamsByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelTriggerParams& outLevelTrgData, FName RowName) {
}

ELevelTriggerID ULevelTableUtility::GetLevelTriggerID(FName levelTriggerLabel) {
    return ELevelTriggerID::Start;
}

bool ULevelTableUtility::GetLevelRowNames(TArray<FName>& OutRowNames) {
    return false;
}

void ULevelTableUtility::GetLevelInfoDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelInfoData& outLevelData, FName RowName) {
}

void ULevelTableUtility::GetLevelInfoDataByLevelName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelInfoData& outLevelData, FName levelName) {
}

void ULevelTableUtility::GetLevelInfoDataByLevelID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelInfoData& outLevelData, int32 levelId) {
}

bool ULevelTableUtility::ExistsInLevelDb(FName levelLabel) {
    return false;
}

void ULevelTableUtility::Debug_OutputRegionVisited() {
}

void ULevelTableUtility::Debug_OutputMapVisited() {
}

bool ULevelTableUtility::Debug_ContainsInLevelDB(FName levelName) {
    return false;
}


