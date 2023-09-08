#include "TutorialStateData.h"
#include "EMAINSEQ_TYPE.h"

UTutorialStateData::UTutorialStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eTUTORIAL;
    this->m_RequestList.AddDefaulted(1);
}


