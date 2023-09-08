#include "FieldCommandMenuStateData.h"
#include "EMAINSEQ_TYPE.h"

UFieldCommandMenuStateData::UFieldCommandMenuStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eFIELDCOMMAND_MENU;
    this->m_RequestList.AddDefaulted(2);
}


