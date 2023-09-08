#include "EventStateData.h"
#include "EMAINSEQ_TYPE.h"

UEventStateData::UEventStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eEVENT;
    this->m_RequestList.AddDefaulted(8);
}


