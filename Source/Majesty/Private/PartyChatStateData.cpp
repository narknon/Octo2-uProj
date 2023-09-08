#include "PartyChatStateData.h"
#include "EMAINSEQ_TYPE.h"

UPartyChatStateData::UPartyChatStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::ePARTY_CHAT;
    this->m_RequestList.AddDefaulted(1);
}


