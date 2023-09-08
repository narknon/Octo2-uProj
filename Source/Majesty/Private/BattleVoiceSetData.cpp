#include "BattleVoiceSetData.h"

FBattleVoiceSetData::FBattleVoiceSetData() {
    this->ID = 0;
    this->BattleVoiceType = EBATTLE_VOICE_TYPE::eBATTLE_VOICE_NONE;
    this->TargetSelf = false;
    this->DiseaseCategory = EDISEASE_CATEGORY::eDECONDITION;
    this->BossFlag = false;
    this->FieldCommandFlag = false;
    this->PinchFlag = false;
    this->JustBreakFlag = false;
    this->CounterFlag = false;
    this->SongFlag = false;
    this->DanceFlag = false;
    this->MeatFlag = false;
    this->Border = 0;
    this->PlayOnce = false;
    this->VoiceRate = 0;
    this->Priority = 0;
}

