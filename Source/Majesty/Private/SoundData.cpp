#include "SoundData.h"

FSoundData::FSoundData() {
    this->SoundCri = NULL;
    this->BGMID = 0;
    this->Priority = 0;
    this->FadeIn = 0.00f;
    this->FadeOut = 0.00f;
    this->Volume = 0.00f;
    this->Time = 0.00f;
    this->StateChangeBgm = 0;
    this->TargetSoundComponent = NULL;
    this->IsInterupt = false;
    this->IsPlayedMusicRecord = false;
}

