#include "MainMenuWorldMapStateData.h"
#include "EMAINSEQ_TYPE.h"

UMainMenuWorldMapStateData::UMainMenuWorldMapStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eMAINMENU_FAST_WORLD_MAP;
    this->m_RequestList.AddDefaulted(2);
}


