#include "AcqImage.h"

UAcqImage::UAcqImage() {
    this->ResourceType = EAcqImageResourceType::Texture;
    this->SetResourceFromOnRebuilt = true;
}

void UAcqImage::ResetBrushResource() {
}


