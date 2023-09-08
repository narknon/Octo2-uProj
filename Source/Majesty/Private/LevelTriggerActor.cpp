#include "LevelTriggerActor.h"

ALevelTriggerActor::ALevelTriggerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SpawnPointObj = NULL;
    this->MyLevelTriggerID = ELevelTriggerID::Start;
    this->CurrentTransitionDataFlagID = 0;
    this->NextLevelTriggerID = ELevelTriggerID::Start;
    this->MapInCharaDir = EKSCharacterDir::FRONT;
    this->EnableAutoSave = true;
    this->NeedButtonInput = false;
    this->ButtonInputCollisionMatchToTrigger = true;
    this->m_MapInMoveMode = ECharacterMoveModeForDB::DEFAULT;
    this->m_IsTriggerActive = true;
}

void ALevelTriggerActor::SetupDataOnLevelShown() {
}

void ALevelTriggerActor::SetupBGMControl() {
}

void ALevelTriggerActor::SetCollisionComponent(UShapeComponent* pComp, FVector vPos) {
}

bool ALevelTriggerActor::SetAttachLadderPlayer_Implementation() {
    return false;
}

void ALevelTriggerActor::RefreshTransitionalData() {
}

bool ALevelTriggerActor::IsTriggerActive() const {
    return false;
}

bool ALevelTriggerActor::IsIgnoreShowOnRadarMap_Implementation() {
    return false;
}

FVector ALevelTriggerActor::GetTriggerCollisionLocation_Implementation() {
    return FVector{};
}

FVector ALevelTriggerActor::GetSpawnLocation_Implementation() {
    return FVector{};
}

ECharacterMoveModeForDB ALevelTriggerActor::GetMapInMoveMode() {
    return ECharacterMoveModeForDB::DEFAULT;
}

FEquipLanternData ALevelTriggerActor::GetEquipLanternData() const {
    return FEquipLanternData{};
}


