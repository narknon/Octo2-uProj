#include "StaffCreditStyleTable.h"

FStaffCreditStyleTable::FStaffCreditStyleTable() {
    this->ID = 0;
    this->Alignment = ECreditAlignment::CENTER;
    this->FontColor = ECreditFontColor::COLOR_A;
    this->FontType = ECreditFontType::NORMAL;
    this->FontSize = ECreditFontSize::SMALL;
}

