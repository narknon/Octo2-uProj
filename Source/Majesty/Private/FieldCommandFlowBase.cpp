#include "FieldCommandFlowBase.h"

AFieldCommandFlowBase::AFieldCommandFlowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FieldCommandType = MJFieldCommandType::eGeneric;
}

void AFieldCommandFlowBase::PrintToVLog(const FString& str) {
}





MJFieldCommandType AFieldCommandFlowBase::GetFieldCommandType() {
    return MJFieldCommandType::eGeneric;
}



bool AFieldCommandFlowBase::Debug_ExecAutoPlayProcess_Implementation() {
    return false;
}


