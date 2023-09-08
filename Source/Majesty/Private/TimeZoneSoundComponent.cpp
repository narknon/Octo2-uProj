#include "TimeZoneSoundComponent.h"
#include "ETimeZoneObjectType.h"

UTimeZoneSoundComponent::UTimeZoneSoundComponent() {
    this->m_apSoundCueList.AddDefaulted(2);
    this->m_apAtomSound = NULL;
    this->m_pcParam = NULL;
    this->m_pcParentEmitterComp = NULL;
    this->m_pcCurrentSoundAtomCue = NULL;
    this->m_eType = ETimeZoneObjectType::eSOUND;
}


