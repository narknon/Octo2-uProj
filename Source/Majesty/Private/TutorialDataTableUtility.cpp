#include "TutorialDataTableUtility.h"

UTutorialDataTableUtility::UTutorialDataTableUtility() {
}

int32 UTutorialDataTableUtility::TutorialPageLabelToID(FName TutorialListLable) {
    return 0;
}

FName UTutorialDataTableUtility::TutorialPageIDToLabel(int32 TutorialListID) {
    return NAME_None;
}

int32 UTutorialDataTableUtility::TutorialListLabelToID(FName TutorialListLable) {
    return 0;
}

FName UTutorialDataTableUtility::TutorialListIDToLabel(int32 TutorialListID) {
    return NAME_None;
}

bool UTutorialDataTableUtility::GetTutorialPageRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialPageRowDataByLabel_RC(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialPageData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialPageRowDataByLabel(FDataTableTutorialPageData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialPageRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialPageData& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialListRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialListRowDataByLabel_RC(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialList& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialListRowDataByLabel(FDataTableTutorialList& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialListRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FDataTableTutorialList& OutData, int32 TargetID, bool LogEnable) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialFlagPartRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialFlagPartByID(FTutorialFlagPart& OutData, int32 ID) {
    return false;
}

bool UTutorialDataTableUtility::GetTutorialFlagPart(FTutorialFlagPart& OutData, FName Label) {
    return false;
}

void UTutorialDataTableUtility::GetOpenedTutorialFlagPart(TArray<FName>& OutNames, bool CheckCharaSort) {
}

bool UTutorialDataTableUtility::Debug_GetShowAllList() {
    return false;
}


