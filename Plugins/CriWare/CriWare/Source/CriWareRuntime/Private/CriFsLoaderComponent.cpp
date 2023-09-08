#include "CriFsLoaderComponent.h"

UCriFsLoaderComponent::UCriFsLoaderComponent() {
    this->bAutoActivate = true;
}

void UCriFsLoaderComponent::Load() {
}

ECriFsLoaderStatus UCriFsLoaderComponent::GetStatus() {
    return ECriFsLoaderStatus::Stop;
}

TArray<uint8> UCriFsLoaderComponent::GetDataArray() {
    return TArray<uint8>();
}


