#include "KSSaveSlotData.h"

FKSSaveSlotData::FKSSaveSlotData() {
    this->PlayTime = 0;
    this->SaveDate_Year = 0;
    this->SaveDate_Month = 0;
    this->SaveDate_Day = 0;
    this->SaveDate_Hour = 0;
    this->SaveDate_Minute = 0;
    this->SaveDate_Second = 0;
    this->levelId = 0;
    this->LevelAreaID = 0;
    this->ClearFlag = 0;
    this->LeaderCharaLevel = 0;
    this->IsEnabled = false;
    this->IsAutoSaveLine = false;
    this->IsForcusAnimImmideate = false;
    this->IsInReminiscence = false;
    this->ReminiscenceStoryIndex = 0;
}

