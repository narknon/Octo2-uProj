#include "PathSplineComponent.h"

UPathSplineComponent::UPathSplineComponent() {
    this->m_ePathType = EPATH_TYPE::eNone;
}

EPATH_TYPE UPathSplineComponent::GetPathType() {
    return EPATH_TYPE::eNone;
}


