#include "CriFsBinderComponent.h"

UCriFsBinderComponent::UCriFsBinderComponent() {
    this->bAutoActivate = true;
}

void UCriFsBinderComponent::Stop() {
}

ECriFsBinderStatus UCriFsBinderComponent::GetStatus() {
    return ECriFsBinderStatus::Stop;
}

void UCriFsBinderComponent::Bind() {
}


