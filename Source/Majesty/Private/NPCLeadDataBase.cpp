#include "NPCLeadDataBase.h"

FNPCLeadDataBase::FNPCLeadDataBase() {
    this->ID = 0;
    this->CommandEnable = 0;
    this->BanFastTravelInFollowing = false;
    this->IgnoreFollowProcess = false;
    this->StoryNpc = false;
    this->LeadNeedLevel = 0;
    this->LureBaseProbability = 0.00f;
    this->HirePrice = 0;
}

