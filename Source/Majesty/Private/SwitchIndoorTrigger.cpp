#include "SwitchIndoorTrigger.h"

ASwitchIndoorTrigger::ASwitchIndoorTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bEnableGateKeeper = false;
    this->SwitchVisibilityOnPostTick = false;
    this->Fix_Redmine9113 = false;
    this->Fix_Redmine13664 = false;
    this->m_fAnimTime = 0.10f;
    this->m_nIndoorFloor = 0;
    this->m_nOutdoorFloor = 0;
    this->m_bNotChangeVisible = false;
    this->m_bForceOutdoor = false;
    this->m_bNotChangeRenderSetting = false;
    this->m_bForceIndoorAtStart = false;
    this->m_bSkipInitializeProcess = false;
    this->m_bIsBar = false;
    this->m_nID = 0;
    this->m_bUseDoor = false;
    this->m_fDoorAnimTime = 0.50f;
    this->m_fCharacterScaleIndoor = 0.50f;
    this->m_fCharacterScaleOutdoor = 1.00f;
    this->m_fCharacterHeightIndoor = -130.00f;
    this->m_fCharacterHeightOutdoor = -164.00f;
    this->m_fCameraDistanceRateIndoor = 0.50f;
    this->m_fManualFocusDistanceIndoor = 2500.00f;
    this->m_nStartEventFlag = 0;
    this->m_nEndEventFlag = 0;
    this->m_bIsOnlyHouseOutSetting = false;
    this->m_pMPC = NULL;
    this->m_bIsIndoor = false;
    this->m_bIsIndoorPrev = false;
    this->m_eMaterialAnimState = ESWITCH_INDOOR_ANIM_STATE::NONE;
    this->m_fMaterialAnimElapsedTime = 0.00f;
    this->m_bInitialized = false;
    this->m_pcBorderBox = NULL;
    this->m_bOverlapBegin = false;
    this->m_bOverlapEnd = false;
    this->m_bCheckPartyChatFlag = false;
    this->m_pcDoorMeshComponent = NULL;
    this->m_pcDoorMaterial = NULL;
    this->m_eLightAnimState = ESWITCH_INDOOR_ANIM_STATE::NONE;
    this->m_fLightAnimElapsedTime = 0.00f;
    this->m_pcSoundAisacIndoor = NULL;
    this->m_pcSoundAisacOutdoor = NULL;
}

void ASwitchIndoorTrigger::SetVisibleLightPreview(AActor* pcActor, bool bVisible) {
}

void ASwitchIndoorTrigger::SetVisibleChild(AActor* pcActor, bool bVisible) {
}

void ASwitchIndoorTrigger::SetupFocusLength(bool bIsIndoor) {
}

bool ASwitchIndoorTrigger::SetupExit(AKSCharacterBase* pcPlayer, float fAnimTime, bool bModifyParty, bool bIsForceOutdoor) {
    return false;
}

void ASwitchIndoorTrigger::SetupEnter(float fAnimTime, AKSCharacterBase* pcPlayer, bool bModifyParty, bool bIsLevelChange) {
}

void ASwitchIndoorTrigger::Setup() {
}

void ASwitchIndoorTrigger::SetLightChannnelAllHierarchy(AActor* pcRootActor, bool bIndoor) {
}

void ASwitchIndoorTrigger::SetGateKeeperNpc(AKSCharacterBase* NPC) {
}

bool ASwitchIndoorTrigger::OpenDoor(bool PlaySE) {
    return false;
}

void ASwitchIndoorTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASwitchIndoorTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ASwitchIndoorTrigger::IsVisibleChangeEnable() {
    return false;
}

bool ASwitchIndoorTrigger::IsIndoor(AKSCharacterBase* pcPlayer) {
    return false;
}

bool ASwitchIndoorTrigger::IsHiddenObjLabelCheck(const FString& placeLabel) {
    return false;
}

void ASwitchIndoorTrigger::InitializeLight() {
}

int32 ASwitchIndoorTrigger::GetOutdoorFloor() {
    return 0;
}

ASwitchIndoorTrigger* ASwitchIndoorTrigger::GetLinkHouseTrigger() {
    return NULL;
}

int32 ASwitchIndoorTrigger::GetIndoorFloor() {
    return 0;
}

AKSCharacterBase* ASwitchIndoorTrigger::GetGateKeeperNpc() {
    return NULL;
}

void ASwitchIndoorTrigger::ForceOpenDoor() {
}

void ASwitchIndoorTrigger::CloseDoor() {
}

void ASwitchIndoorTrigger::CheckCollision() {
}

bool ASwitchIndoorTrigger::CanOpenDoor() {
    return false;
}

void ASwitchIndoorTrigger::ApplyIndoorToMpcAndPostProcess(bool bIndoor) {
}


