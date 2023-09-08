#include "MainMissionData.h"

FMainMissionData::FMainMissionData() {
    this->ID = 0;
    this->TaskType = ESTORY_TASK_TYPE::NONE;
    this->TargetPCIndex = EPlayableCharacterID::eNONE;
    this->IsMissionList = false;
    this->ViewEventFlag = 0;
    this->AddAchive = 0.00f;
    this->ProgressValue = 0;
    this->UnavailableFastTravel = false;
    this->EndRollSegment = EEndRollSegmentSet::ER_NONE;
    this->EventObjectFlag1 = 0;
    this->EventObjectFlag2 = 0;
    this->EventObjectFlag3 = 0;
    this->EventObjectFlag4 = 0;
    this->EventObjectFlag5 = 0;
    this->EventObjectFlag6 = 0;
    this->EventObjectFlag7 = 0;
    this->EventObjectFlag8 = 0;
}

