#include "TimeZoneSoundParam.h"
#include "ETimeZoneObjectType.h"

ATimeZoneSoundParam::ATimeZoneSoundParam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bEnable = false;
    this->m_eType = ETimeZoneObjectType::eSOUND;
}


