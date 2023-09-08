#include "FieldCommandResult.h"

FFieldCommandResult::FFieldCommandResult() {
    this->Type = MJFieldCommandType::eGeneric;
    this->Status = FieldCommandStatus::eNone;
}

