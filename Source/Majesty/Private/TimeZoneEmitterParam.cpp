#include "TimeZoneEmitterParam.h"
#include "ETimeZoneObjectType.h"

ATimeZoneEmitterParam::ATimeZoneEmitterParam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bActive = false;
    this->m_eType = ETimeZoneObjectType::eEMITTER;
}


