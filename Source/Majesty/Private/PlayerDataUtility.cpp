#include "PlayerDataUtility.h"

UPlayerDataUtility::UPlayerDataUtility() {
}

int32 UPlayerDataUtility::PlayerLabelToID(FName Label) {
    return 0;
}

FName UPlayerDataUtility::PlayerIDToLabel(int32 ID) {
    return NAME_None;
}

void UPlayerDataUtility::GetPlayerText(int32 CharaID, FText& NameText) {
}

bool UPlayerDataUtility::GetPlayerTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
    return false;
}

bool UPlayerDataUtility::GetPlayerTableRowDataByID(FPlayableCharacterData& OutData, int32 TargetID) {
    return false;
}

bool UPlayerDataUtility::GetPlayerTableRowDataByEnum(FPlayableCharacterData& OutData, EPlayableCharacterID TargetID) {
    return false;
}

bool UPlayerDataUtility::GetPlayerTableRowData(FPlayableCharacterData& OutData, FName TargetLabel) {
    return false;
}

bool UPlayerDataUtility::GetPlayerTableAllRows(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FPlayableCharacterData>& OutRows) {
    return false;
}

bool UPlayerDataUtility::GetPlayerPortraitNameImage(int32 CharaID, UTexture2D*& Image) {
    return false;
}

bool UPlayerDataUtility::GetPlayerPortraitImage(int32 CharaID, UTexture2D*& Image, bool IsNight) {
    return false;
}

bool UPlayerDataUtility::GetPlayerPortraitBgImage(int32 CharaID, UTexture2D*& Image, bool IsNight) {
    return false;
}

void UPlayerDataUtility::GetPlayerFieldCommandName(int32 CharaID, FName& DayFcName, FName& NightFcName) {
}

void UPlayerDataUtility::GetPlayerFieldCommandDetailInPlayerSelect(int32 CharaID, FName& DayFc, FName& NightFC) {
}

void UPlayerDataUtility::GetPlayerDetailText(int32 CharaID, FText& DetailText) {
}

void UPlayerDataUtility::GetFirstEquipmentLabels(int32 CharaID, TArray<FName>& outEquipmentLabels) {
}

void UPlayerDataUtility::GetClassText(int32 CharaID, FText& ClassText) {
}

void UPlayerDataUtility::GetCharaVoice(int32 CharaID, bool IsJapanese, TArray<FName>& VoiceSheet) {
}


