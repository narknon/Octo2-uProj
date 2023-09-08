#include "NPCData.h"

FNPCData::FNPCData() {
    this->ID = 0;
    this->NPC_UnqIndex = 0;
    this->FaintAction = 0;
    this->IgnoreRelation = false;
    this->FCmd_RecoverArea = 0;
    this->FCmd_UseBattleMapIndex = 0;
    this->IsNotWorsenRelation = false;
    this->FcSpecialPopupType = EFieldCommandSpecialPopupType::eNone;
}

