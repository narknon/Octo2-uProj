#include "NPCBattleInfoData.h"

FNPCBattleInfoData::FNPCBattleInfoData() {
    this->ID = 0;
    this->BattleFlag = 0;
    this->SubRelation = 0;
    this->NeedLevel = 0;
    this->CanSwoon = false;
    this->SwoonOffsetPosX = 0.00f;
    this->SwoonOffsetPosY = 0.00f;
    this->SwoonOffsetPosZ = 0.00f;
    this->NotBattleBalloonType = 0;
    this->ShortageLevelBalloonType = 0;
    this->PreBattleBalloonType = 0;
    this->LoseBalloonType = 0;
    this->WinBalloonType = 0;
    this->PreMonsterBalloonType = 0;
    this->WinAMonsterBalloonType = 0;
    this->SwoontBalloonType = 0;
    this->IsSwoonPlayerTalk = false;
    this->EventFlagIndex = 0;
    this->EventFlagSwitch = false;
}

