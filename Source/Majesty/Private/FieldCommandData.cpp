#include "FieldCommandData.h"

FFieldCommandData::FFieldCommandData() {
    this->ID = 0;
    this->FieldCommandType = MJFieldCommandType::eGeneric;
    this->FieldCommandCategory = EFieldCommandCategory::eRight;
    this->ActionWaitTime = 0.00f;
}

