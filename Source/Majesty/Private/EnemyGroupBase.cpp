#include "EnemyGroupBase.h"

FEnemyGroupBase::FEnemyGroupBase() {
    this->ID = 0;
    this->BattleStartEnemyVoiceEnable = false;
    this->BattleStartDashEnable = false;
    this->UseBattleBGM = false;
    this->UseVictoryBGM = false;
    this->ResumeBGM = false;
    this->ViewResult = false;
    this->UseVictoryAction = false;
    this->ResultDashEnable = false;
    this->BoostFinishResultEnable = false;
    this->BossBattle = false;
    this->EscapeEnable = false;
    this->ItemEnable = false;
    this->GuardEnable = false;
    this->BoostEnable = false;
}

