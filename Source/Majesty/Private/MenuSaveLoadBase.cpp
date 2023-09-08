#include "MenuSaveLoadBase.h"

UMenuSaveLoadBase::UMenuSaveLoadBase() {
    this->m_LoadTarget = ESaveDataLoadTarget::Normal;
}

void UMenuSaveLoadBase::SetLoadTarget(ESaveDataLoadTarget Target) {
}




ESaveDataLoadTarget UMenuSaveLoadBase::GetLoadTarget() {
    return ESaveDataLoadTarget::Normal;
}


