#include "FlagRandomControlGroup.h"

FFlagRandomControlGroup::FFlagRandomControlGroup() {
    this->ID = 0;
    this->ControlBeginFlag = 0;
    this->ControlEndFlag = 0;
    this->ControlTrigger = EFlagRandomControlTrigger::eLevelChange;
    this->ApplyValue = false;
}

