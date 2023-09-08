#include "KSPaperFlipbook.h"

UKSPaperFlipbook::UKSPaperFlipbook() {
    this->m_pPrevSprite = NULL;
}

void UKSPaperFlipbook::ResetKeyFrames(bool releaseSprite) {
}

FVector2D UKSPaperFlipbook::GetMaxSpriteSize() const {
    return FVector2D{};
}

void UKSPaperFlipbook::CalcFlipbookData(FFlipbookCalcData& Data) {
}


