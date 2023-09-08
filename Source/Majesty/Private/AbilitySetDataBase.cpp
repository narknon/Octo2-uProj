#include "AbilitySetDataBase.h"

FAbilitySetDataBase::FAbilitySetDataBase() {
    this->ID = 0;
    this->AbilitySetID = 0;
    this->MenuType = ECOMMAND_MENU_TYPE::eCOMMAND;
    this->SubMenuType = ECOMMAND_SUB_MENU_TYPE::eNONE;
    this->MenuIconType = EABILITY_ICON_TYPE::eNONE;
    this->MenuInfoLv = 0;
    this->IsDivineAbility = false;
    this->InventorTurn = 0;
}

