#include "MJListWidgetItemData.h"

FMJListWidgetItemData::FMJListWidgetItemData() {
    this->ItemIcon = NULL;
    this->ItemIcon_0 = NULL;
    this->Status = ELIST_ITEM_STATUS::eENABLE;
    this->CategoryId = 0;
    this->StrikeThrough = false;
    this->ItemNum_0 = 0;
    this->ItemNum_1 = 0;
    this->NextSpace = ELIST_ITEM_NEXT_SPACE::eNONE;
    this->Option_0 = 0;
    this->NotShowAllCategory = false;
    this->DontSelectable = false;
    this->NoHelp = false;
    this->ItemData_1_Dark = false;
    this->FixedEquipIcon = NULL;
    this->HolyTorchFlag = false;
    this->IsItemDetailText = false;
    this->IsUseSubItem = false;
    this->IsSoldOutItem = false;
}

