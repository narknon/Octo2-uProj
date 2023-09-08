#include "FieldCommandStateData.h"
#include "EMAINSEQ_TYPE.h"

UFieldCommandStateData::UFieldCommandStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eFIELDCOMMAND_UNIQUE_MENU;
    this->m_RequestList.AddDefaulted(7);
}


