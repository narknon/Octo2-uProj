#include "TimeZoneLightParam.h"
#include "ETimeZoneObjectType.h"

ATimeZoneLightParam::ATimeZoneLightParam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fIntensity = 0.00f;
    this->m_eType = ETimeZoneObjectType::eLIGHT;
}


