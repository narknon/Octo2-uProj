#include "SavePlayerCharacterData.h"

FSavePlayerCharacterData::FSavePlayerCharacterData() {
    this->CharacterID = 0;
    this->Level = 0;
    this->Exp = 0;
    this->RawHP = 0;
    this->RawMP = 0;
    this->RawPOT = 0;
    this->FirstJobID = 0;
    this->SecondJobID = 0;
    this->JobPoint = 0;
    this->PlayingMainStoryID = 0;
    this->InterruptedMainStoryID = 0;
    this->MainMissionProgressCnt = 0;
}

