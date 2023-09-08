#include "BattleStateData.h"
#include "EMAINSEQ_TYPE.h"

UBattleStateData::UBattleStateData() {
    this->m_SeqType = EMAINSEQ_TYPE::eBATTLE;
    this->m_RequestList.AddDefaulted(2);
}


