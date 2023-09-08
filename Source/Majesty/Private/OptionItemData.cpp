#include "OptionItemData.h"

FOptionItemData::FOptionItemData() {
    this->OptionKind = EOPTION_ITEM_KIND::eLANGUAGE;
    this->OnlyPC = false;
    this->WidgetKind = EOPTION_WIDGET_KIND::eToggleButton;
    this->DefaultValue = 0;
}

