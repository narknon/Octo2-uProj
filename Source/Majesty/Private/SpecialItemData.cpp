#include "SpecialItemData.h"

FSpecialItemData::FSpecialItemData() {
    this->ID = 0;
    this->SpecialType = ESPECIAL_ITEM_TYPE::NONE;
    this->UsableSpItem = false;
    this->ShowInItemListFlag = 0;
    this->HideInItemListFlag = 0;
    this->RelativeCharacterId = EPlayableCharacterID::eNONE;
}

