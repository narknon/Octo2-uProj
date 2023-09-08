#include "CharactersFlipbookUtility.h"

UCharactersFlipbookUtility::UCharactersFlipbookUtility() {
}

bool UCharactersFlipbookUtility::IsIdleAction(EKSCharacterAction Action) {
    return false;
}

bool UCharactersFlipbookUtility::GetThiefMissionFlipbookToSaveLoad(FName& outLabel, UObject* WorldContextObject, int32 CharaID, int32 JobID, int32 form, EPLAYER_JOB_FB_TYPE Type) {
    return false;
}

bool UCharactersFlipbookUtility::GetMissionFlipbookLabelToSaveLoad(FName& outLabel, UObject* WorldContextObject, int32 CharaID, int32 form, int32 JobID) {
    return false;
}

bool UCharactersFlipbookUtility::GetMissionFlipbookLabelToPlayerSelect(FName& outLabel, int32 CharaID, EPLAYER_SELECT_FB_TYPE selectType, EPLAYER_SELECT_FB_PATTERN pattern) {
    return false;
}

bool UCharactersFlipbookUtility::GetMissionFlipbookLabelToJob(FName& outLabel, UObject* WorldContextObject, int32 CharaID, int32 JobID, EPLAYER_JOB_FB_TYPE Type, bool checkTou) {
    return false;
}

bool UCharactersFlipbookUtility::GetMissionCustomFlipbookRowData(FKSUIFlipbookData& OutData, FName TargetLabel, bool EnableLog) {
    return false;
}

bool UCharactersFlipbookUtility::GetMissionCustomFlipbookNames(TArray<FName>& OutNames) {
    return false;
}

bool UCharactersFlipbookUtility::GetMissionCustomFlipbookListRowDataFromCharaID(FCustomMissionFlipbookList& OutData, int32 CharaID) {
    return false;
}

bool UCharactersFlipbookUtility::GetMissionCustomFlipbookListRowData(FCustomMissionFlipbookList& OutData, FName TargetLabel) {
    return false;
}

bool UCharactersFlipbookUtility::GetCustomFlipbookRowData(FKSFlipbookData& OutData, FName TargetLabel, bool EnableLog) {
    return false;
}

bool UCharactersFlipbookUtility::GetCharactersFlipbookRowData(FKSCharaFlipbook& OutData, FName TargetLabel, bool EnableLog) {
    return false;
}

bool UCharactersFlipbookUtility::GetActionSocket(const FName targetCharaLabel, EKSCharacterAction eAction, EKSCharacterDir eDir, TMap<FName, FMJSpriteSocketData>& outSocketData, bool& outIsReverse) {
    return false;
}

bool UCharactersFlipbookUtility::GetActionFlipbookName(UPaperFlipbookComponent* fbComp, FName CharaActionLabel, EKSCharacterAction eAction, EKSCharacterDir eDir, FName& outFlipbookName, bool& outIsReverse) {
    return false;
}


