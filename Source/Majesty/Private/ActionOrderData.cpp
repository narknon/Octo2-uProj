#include "ActionOrderData.h"

FActionOrderData::FActionOrderData() {
    this->m_eOrderType = EACTION_ORDER_TYPE::eNORMAL;
    this->m_fDelayRatio = 0.00f;
    this->m_cCurrentOrderIcon = NULL;
    this->m_cNextOrderIcon_DEPLICATED = NULL;
    this->m_cOrderCharacter = NULL;
    this->m_cSubOrderCharacter = NULL;
    this->m_bUseIcon = false;
    this->m_nCurrentIndex = 0;
    this->m_nNextIndex = 0;
    this->m_nOrderCount = 0;
    this->m_bIsOrderChange = false;
    this->m_bIsOrderBuff = false;
    this->m_bSaved_IsOrderChange = false;
}

