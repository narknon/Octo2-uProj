#include "BattleAdditiveOrderData.h"

FBattleAdditiveOrderData::FBattleAdditiveOrderData() {
    this->m_eOrderType = EADDITIVE_ORDER_TYPE::eREFLECTION;
    this->m_cOrderEnforcer = NULL;
    this->m_eAttributeType = EATTRIBUTE_TYPE::eNONE;
    this->m_nAddValue01 = 0;
}

