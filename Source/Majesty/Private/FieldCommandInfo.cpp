#include "FieldCommandInfo.h"

FFieldCommandInfo::FFieldCommandInfo() {
    this->DayTimeFC = MJFieldCommandType::eGeneric;
    this->DayTimeFCImpossibleFlag = 0;
    this->NightFC = MJFieldCommandType::eGeneric;
    this->NightFCImpossibleFlag = 0;
}

