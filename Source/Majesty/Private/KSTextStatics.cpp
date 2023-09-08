#include "KSTextStatics.h"

UKSTextStatics::UKSTextStatics() {
}

bool UKSTextStatics::LoadTextVoice(EKSLanguage eLang) {
    return false;
}

bool UKSTextStatics::LoadText(EKSLanguage eLang) {
    return false;
}

bool UKSTextStatics::IsKSTextLoaded() {
    return false;
}

void UKSTextStatics::GetTextItemInfo(FName Label, FGameTextItemInfo& OutText) {
}

void UKSTextStatics::GetTextCharaInfo(FName Label, FGameTextCharaInfo& OutText) {
}

void UKSTextStatics::GetTalkVoice(FName Label, FTalkVoice& OutText) {
}

bool UKSTextStatics::GetTalkText(FName Label, FTalkText& OutText) {
    return false;
}

void UKSTextStatics::GetGameTextString(FName Label, FString& OutText) {
}

void UKSTextStatics::GetGameTextMacroOperation(FName Label, FText& OutText) {
}

void UKSTextStatics::GetGameText(FName Label, FText& OutText) {
}

FName UKSTextStatics::GetFallbackTalkTextLabel() {
    return NAME_None;
}

FText UKSTextStatics::GetButtonTextFromKeyConfig(UObject* WorldContextObject, EKSKeyConfigElement Type) {
    return FText::GetEmpty();
}

FText UKSTextStatics::GetButtonText(UObject* WorldContextObject, ECONTROL_GUIDE_BUTTON_TYPE Type) {
    return FText::GetEmpty();
}


