#include "LibImage.h"

ULibImage::ULibImage() {
}

bool ULibImage::SaveImageToByteArray(UTextureRenderTarget2D* RenderTarget, const FLinearColor ClearColour, TArray<uint8>& outByteArray) {
    return false;
}

UTexture2D* ULibImage::LoadImageFromByteArray(const TArray<uint8>& ByteArray, int32 Width, int32 Height, bool& IsValid) {
    return NULL;
}


