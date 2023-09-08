#include "NPCBattleData.h"

FNPCBattleData::FNPCBattleData() {
    this->ID = 0;
    this->CommandEnable = 0;
    this->CanSwoon = false;
    this->SwoonRecTimeZoneChange = false;
    this->BattleNeedLevel = 0;
    this->BattlePCTalk = 0;
    this->IsDeathMatch = false;
    this->IsGameOverWhenLoose = false;
    this->IsIgnoreLeanAbility = false;
    this->AssassinateNeedLevel = 0;
    this->DoseItemNum = 0;
}

