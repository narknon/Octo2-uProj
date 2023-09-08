#include "EncountVolume.h"

FEncountVolume::FEncountVolume() {
    this->ID = 0;
    this->StartFlag = 0;
    this->EndFlag = 0;
    this->UseMapIndex = 0;
    this->EncountStepMin = 0;
    this->RandomStepA = 0;
    this->RandomStepB = 0;
    this->WaterSide = false;
    this->Area = EAreaID::SNOW;
}

