#include "FBImage.h"

UFBImage::UFBImage() {
    this->flipbook = NULL;
    this->AutoSizeUpdate = true;
    this->ForceLayout = false;
    this->EnableOffset = false;
    this->Timer = 0.00f;
    this->AnimationLoop = true;
}

void UFBImage::Tick(const float InDeltaTime) {
}

void UFBImage::SwitchFlipbookModifyTarget() {
}

bool UFBImage::SetFlipbook(UPaperFlipbook* NewFlipbook) {
    return false;
}

void UFBImage::SetFBSize(UPaperSprite* TargetSprite) {
}

void UFBImage::SetDrawSize(const FVector2D Size) {
}

void UFBImage::SetAnimationLoop(bool bLoop) {
}

bool UFBImage::IsFlipbookAnimeFinish() {
    return false;
}

FVector2D UFBImage::GetSpriteOffset() {
    return FVector2D{};
}

FVector2D UFBImage::GetMaxFBSize() {
    return FVector2D{};
}

UKSPaperFlipbook* UFBImage::GetFlipbookModifyTarget() {
    return NULL;
}

void UFBImage::CalcSprite() {
}


