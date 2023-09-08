#include "WorldMapTable.h"

FWorldMapTable::FWorldMapTable() {
    this->ID = 0;
    this->MapIconType = EWorldMapIconType::eNONE;
    this->WorldMapMaskArea = EWorldMapMaskArea::eNONE;
    this->WorldMapIslandLayerArea = EWorldMapIslandLayerArea::eNONE;
    this->WorldMapPrologueMaskArea = EWorldMapPrologueMaskArea::eNONE;
    this->IsAllowLostWay = false;
    this->VisibleFlag = 0;
    this->CanFastTravel = false;
    this->TemporaryBanFastTravelFlag = 0;
    this->TriggerID = 0;
    this->PlayerDir = 0;
    this->PlayerCharaId = EPlayableCharacterID::eNONE;
    this->PlayerSwitchOrder = 0;
}

