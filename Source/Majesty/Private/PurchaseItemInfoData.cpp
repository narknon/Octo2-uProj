#include "PurchaseItemInfoData.h"

FPurchaseItemInfoData::FPurchaseItemInfoData() {
    this->ID = 0;
    this->FCPrice = 0;
    this->ObtainFlag = 0;
    this->ProperSteal = 0;
    this->ProperBeg = 0;
    this->LineupTime = ELineupTime::eAlways;
    this->IsUnlimited = false;
    this->BeSoldOut = false;
}

