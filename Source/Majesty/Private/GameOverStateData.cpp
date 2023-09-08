#include "GameOverStateData.h"
#include "EMAINSEQ_TYPE.h"

UGameOverStateData::UGameOverStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eGAMEOVER;
    this->m_RequestList.AddDefaulted(2);
}


