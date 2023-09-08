#include "BarMenuStorySelectBase.h"

UBarMenuStorySelectBase::UBarMenuStorySelectBase() {
    this->BarMenuMode = false;
}

void UBarMenuStorySelectBase::SetWidgetState(ESTORY_SELECT_STATE Val) {
}






ESTORY_SELECT_STATE UBarMenuStorySelectBase::GetWidgetState() const {
    return ESTORY_SELECT_STATE::eNone;
}


