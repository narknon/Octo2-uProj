#include "MJRichTextBlock.h"

UMJRichTextBlock::UMJRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->m_Language = EKSLanguage::eJA;
    this->bOverrideFontSize = false;
    this->OverrideDefaultFontSize = 0;
    this->bOverrideDefaultFontColor = false;
    this->bOverrideDefaultOutlineSize = false;
    this->OverrideDefaultOutLineSize = 0;
    this->bOverrideDefaultOutlineColor = false;
    this->bOverrideDefaultShadowColor = false;
    this->bBanOverrideStyle = false;
    this->m_bUpdateOutlineSize = false;
    this->m_bOutlineCalcRoundingDown = false;
}

void UMJRichTextBlock::UpdateFontOutlineSize() {
}

void UMJRichTextBlock::SetMJText(const FText& InText) {
}

bool UMJRichTextBlock::RefreshFontSet(bool forceRefresh) {
    return false;
}

void UMJRichTextBlock::OverrideDefaultStyleParameter() {
}


