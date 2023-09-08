#include "BarMenuStoryItem.h"

FBarMenuStoryItem::FBarMenuStoryItem() {
    this->CharacterID = 0;
    this->Chapter = 0;
    this->IsEnable = false;
    this->ProgressType = EBARMENU_STORY_PROGRESSTYPE::eNONE;
    this->ItemType = EBARMENU_STORY_SELECT_ITEM_TYPE::NOT_PROGRESSIVE;
    this->RecommandationLV = 0;
    this->NewFlag = false;
    this->MainStoryId = 0;
}

