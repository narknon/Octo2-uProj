#include "TimeZoneParamBase.h"

ATimeZoneParamBase::ATimeZoneParamBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nIndex = 0;
    this->m_eType = ETimeZoneObjectType::eNONE;
}


