#include "LevelInfoData.h"

FLevelInfoData::FLevelInfoData() {
    this->ID = 0;
    this->LevelKind = 0;
    this->AreaID = 0;
    this->TownLabel = 0;
    this->SubTownLabel = 0;
    this->MapChangeType = 0;
    this->TransportationType = 0;
    this->EncountStepMin = 0;
    this->RandomStepA = 0;
    this->RandomStepB = 0;
    this->FirstEncountStepRatio = 0.00f;
    this->Bgm2EnableFlag = 0;
    this->Bgm3EnableFlag = 0;
    this->Bgm4EnableFlag = 0;
    this->Bgm5EnableFlag = 0;
    this->TimeZoneChangeSe2EnableFlag = 0;
    this->ScreenFadeInTime = 0;
    this->ScreenFadeOutTime = 0;
    this->EncountOffset = 0;
    this->Intencity = 0.00f;
    this->AttenuationRadius = 0.00f;
    this->SourceRadius = 0.00f;
    this->TorchFlag = false;
    this->ImpossibleTimeZoneChangeFlag = false;
    this->TimeZoneSeqChangeFlag = 0;
    this->ReverbFlag = false;
    this->ImpossibleFCFlag = false;
    this->BarPCDir1 = 0;
    this->BarPCDir2 = 0;
    this->BarItemCnt1 = 0;
    this->BarItemCnt2 = 0;
    this->BarItemCnt3 = 0;
    this->BanLostWay = false;
    this->BanMainMenuPartyMemberChange = false;
}

