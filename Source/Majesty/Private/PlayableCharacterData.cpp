#include "PlayableCharacterData.h"

FPlayableCharacterData::FPlayableCharacterData() {
    this->ID = 0;
    this->CharacterRole = ECharacterRole::NONE;
    this->SecondPotentialityActionFlag = 0;
    this->UniqueStyle = EBATTLE_STYLE_TYPE::eNEUTRAL;
    this->ReleaseStyleFlag = 0;
    this->StyleAvailableCount = 0;
    this->InitLevel = 0;
    this->WeaponStance = EWEAPON_STANCE::NONE;
    this->MainWeapon = EWEAPON_CATEGORY::eSWORD;
    this->FirstJob = EJOB_TYPE::eMERCHANT;
    this->MainMissionPlayingFlag = 0;
}

