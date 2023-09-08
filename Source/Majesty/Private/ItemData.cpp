#include "ItemData.h"

FItemData::FItemData() {
    this->ID = 0;
    this->ItemCategory = EItemCategoryData::eCONSUMABLE;
    this->SortCategory = 0;
    this->BackpackPriority = 0;
    this->DisplayType = EITEM_DISPLAY_TYPE::eDISABLE;
    this->UseType = EITEM_USE_TYPE::eDISABLE;
    this->MaxNum = 0;
    this->TargetType = EBATTLE_TARGET_TYPE::eSELF;
    this->Attribute = EATTRIBUTE_TYPE::eNONE;
    this->ValuableFlag = false;
    this->BuyPrice = 0;
    this->SellPrice = 0;
    this->BuyMeetCount = 0;
    this->SellMeetCount = 0;
    this->EquipmentCategory = EEquipmentCategory::eSWORD;
    this->CommandEffecter = NULL;
    this->DisableAttackCommand = false;
    this->DisableRecoveryCommand = false;
    this->DisableReviveCommand = false;
    this->DebugRecommendLv = 0;
}

