#include "FieldStateData.h"
#include "EMAINSEQ_TYPE.h"

UFieldStateData::UFieldStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eFIELD;
    this->m_RequestList.AddDefaulted(12);
}


