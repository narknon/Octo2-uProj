#include "MJLODActor.h"

AMJLODActor::AMJLODActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fMaxDrawDistance = 0.00f;
}

void AMJLODActor::SetLODSettings(UPrimitiveComponent* PrimComp) {
}


