#include "DebugParam.h"

FDebugParam::FDebugParam() {
    this->EditType = EDEBUG_EDIT_TYPE::eOnOff;
    this->InformationColorType = EDEBUG_INFORMATION_COLOR_TYPE::eNutoral;
    this->DefaultToggle = false;
    this->DefaultIndex = 0;
    this->nDefaultValue = 0;
    this->nDefaultMin = 0;
    this->nDefaultMax = 0;
    this->nDigit = 0;
    this->fDefaultValue = 0.00f;
    this->fDefaultMin = 0.00f;
    this->fDefaultMax = 0.00f;
    this->fDigit = 0.00f;
    this->nItemCounter = 0;
    this->nHierarchy = 0;
    this->nParentHierarchy = 0;
    this->nChildHierarchy = 0;
}

