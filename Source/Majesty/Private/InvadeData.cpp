#include "InvadeData.h"

FInvadeData::FInvadeData() {
    this->ID = 0;
    this->InvadeID = 0;
    this->InverseFlipBook = false;
    this->DisplayLevel = 0;
    this->CountMin = 0;
    this->CountMax = 0;
    this->UnlimitedFlag = false;
    this->Size = ECHARACTER_SIZE::eSMALL;
    this->PartnerFlag = false;
    this->NPCFlag = false;
    this->LegendFlag = false;
    this->JuvenileFlg = false;
    this->LSizeFlag = false;
    this->InventorItemFlag = false;
    this->WeaponStance = EWEAPON_STANCE::NONE;
    this->WeaponType = EWEAPON_CATEGORY::eSWORD;
    this->EnableProcess = false;
    this->ProcessNumID = 0;
    this->WaitEnemyActionFrame = 0;
    this->AwakingBoost0 = false;
    this->AwakingBoost1 = false;
    this->AwakingBoost2 = false;
    this->AwakingBoost3 = false;
    this->DisableAttackCommand = false;
    this->DisableRecoveryCommand = false;
    this->DisableReviveCommand = false;
}

