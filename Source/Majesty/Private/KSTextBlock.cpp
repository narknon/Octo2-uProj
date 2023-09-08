#include "KSTextBlock.h"

UKSTextBlock::UKSTextBlock() {
    this->MinDesiredWidth = 0.00f;
    this->Decorators.AddDefaulted(1);
    this->m_Language = EKSLanguage::eJA;
    this->m_FontType = EKSFontType::Common;
    this->DisableRefreshFont = false;
    this->m_bUpdateOutlineSize = true;
}

void UKSTextBlock::UpdateFontOutlineSize() {
}

void UKSTextBlock::SetWrapTextAt(float Value) {
}

void UKSTextBlock::SetText(FText InText) {
}

void UKSTextBlock::SetShadowOffset(FVector2D InShadowOffset) {
}

void UKSTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UKSTextBlock::SetOpacity(float InOpacity) {
}

void UKSTextBlock::SetGameTextWithFormatText(FName GameTextFormatLabel, FName GameTextLabel) {
}

void UKSTextBlock::SetGameTextWithFormatNumber(FName GameTextLabel, int32 LabelNum) {
}

void UKSTextBlock::SetGameTextWithFormatKey(FName GameTextLabel, FText Key) {
}

void UKSTextBlock::SetGameText(FName GameTextLabel) {
}

void UKSTextBlock::SetFontStyle(EKSFontType InFontType, FSlateColor InColorAndOpacity, int32 InFontSize) {
}

void UKSTextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void UKSTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UKSTextBlock::RefreshGameText() {
}

FText UKSTextBlock::GetText() const {
    return FText::GetEmpty();
}

FSlateFontInfo UKSTextBlock::GetFont() const {
    return FSlateFontInfo{};
}

void UKSTextBlock::Debug_ShowTextSizeInfo(bool Enable) {
}

void UKSTextBlock::Debug_ApplyDebugText() {
}


