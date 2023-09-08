#include "StateDataBase.h"

UStateDataBase::UStateDataBase() {
    this->m_SeqType = EMAINSEQ_TYPE::eNONE;
    this->m_BeforeSeqType = EMAINSEQ_TYPE::eNONE;
    this->m_NextSeqType = EMAINSEQ_TYPE::eNONE;
    this->m_ExecRequestType = EREQUEST_TYPE::eNONE;
}

bool UStateDataBase::UpdateState_Implementation() {
    return false;
}

void UStateDataBase::SetStateParam(FMainSequenceStateParam Param) {
}

EPRIORITY UStateDataBase::GetPriority_Implementation() {
    return EPRIORITY::eNONE;
}

bool UStateDataBase::ChangeState_Implementation(EMAINSEQ_TYPE Type) {
    return false;
}


