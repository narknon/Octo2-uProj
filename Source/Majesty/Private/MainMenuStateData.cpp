#include "MainMenuStateData.h"
#include "EMAINSEQ_TYPE.h"

UMainMenuStateData::UMainMenuStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eMAINMENU;
    this->m_RequestList.AddDefaulted(7);
}


