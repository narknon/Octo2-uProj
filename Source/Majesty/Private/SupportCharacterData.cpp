#include "SupportCharacterData.h"

FSupportCharacterData::FSupportCharacterData() {
    this->ID = 0;
    this->SupporterID = 0;
    this->DisplayRank = 0;
    this->SupportPoint = 0;
    this->IsUnlimitedSupporter = false;
    this->SupportLimit = 0;
    this->WeaponType = EWEAPON_CATEGORY::eSWORD;
    this->WeaponStance = EWEAPON_STANCE::NONE;
    this->CoverRate = 0;
}

