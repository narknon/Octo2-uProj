#include "OutGameStateData.h"
#include "EMAINSEQ_TYPE.h"

UOutGameStateData::UOutGameStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eOUT_GAME;
    this->m_RequestList.AddDefaulted(2);
}


