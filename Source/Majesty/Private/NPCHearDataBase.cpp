#include "NPCHearDataBase.h"

FNPCHearDataBase::FNPCHearDataBase() {
    this->ID = 0;
    this->CommandEnable = 0;
    this->Age = 0;
    this->HearNeedLevel = 0;
    this->SpecialFlag = false;
    this->SearchBaseProbability = 0.00f;
    this->SearchLockLevel = 0;
    this->BriberyBuyPrice = 0;
    this->SetHiddenAfterReveal = false;
}

