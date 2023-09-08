#include "TextDataUtility.h"

UTextDataUtility::UTextDataUtility() {
}

bool UTextDataUtility::GetTalkVoiceTextTableRowData(FTalkVoice& OutData, FName TargetLabel) {
    return false;
}

bool UTextDataUtility::GetTalkVoiceLabel(FName& outLabel, FName TargetLabel, UObject* WorldContextObject) {
    return false;
}

bool UTextDataUtility::GetTalkTextTableRowData(FTalkText& OutData, FName TargetLabel) {
    return false;
}

bool UTextDataUtility::GetItemTextTableRowData(FGameTextItemInfo& OutData, FName TargetLabel) {
    return false;
}

bool UTextDataUtility::GetGameTextTableRowData(FGameTextInfoData& OutData, FName TargetLabel) {
    return false;
}

void UTextDataUtility::GetGameTextString(FName Label, FString& OutText) {
}

UDataTable* UTextDataUtility::GetGameTextDB(EKSLanguage lang) {
    return NULL;
}

void UTextDataUtility::GetGameText(FText& OutText, FName TargetLabel) {
}

void UTextDataUtility::GetDialogText(FText& DetailText, TArray<FText>& ButtonTexts, FName TargetLabel, EDIALOG_TEXT_TYPE DialogType) {
}

bool UTextDataUtility::GetCharaTextTableRowData(FGameTextCharaInfo& OutData, FName TargetLabel) {
    return false;
}

bool UTextDataUtility::Debug_SeachTargetText(FName& outLabel, FText targetText, EKSLanguage lang) {
    return false;
}

void UTextDataUtility::Debug_ResetText() {
}


