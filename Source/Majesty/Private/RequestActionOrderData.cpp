#include "RequestActionOrderData.h"

FRequestActionOrderData::FRequestActionOrderData() {
    this->m_eOrderType = EACTION_ORDER_TYPE::eNORMAL;
    this->m_fDelayRatio = 0.00f;
    this->m_bUseIcon = false;
}

