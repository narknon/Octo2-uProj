#include "LevelManager_Others.h"

ALevelManager_Others::ALevelManager_Others(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PostParam_VignetteWeakRate = 0.00f;
    this->m_PostParam_VignetteNormalRate = 0.00f;
    this->m_PostParam_FocalRegionWideAdd = 0.00f;
    this->m_PostParam_DofScaleWeakRate = 0.00f;
    this->m_PostParam_DofScaleNormalRate = 0.00f;
    this->m_PostParam_GainRateMin = 0.00f;
    this->m_PostParam_GainRateMax = 0.00f;
    this->m_Debug_BarNotPlaceCharaRate = -1;
    this->m_Debug_BarPlaceCharaRateOne = -1;
    this->ChangeBGM = false;
    this->m_nTreasureBoxCounter = 0;
    this->m_IsGameOverPlaying = false;
    this->m_bTransitionToGameOver = false;
    this->m_LevelChangeByLinerShip = false;
    this->m_bForceSpawn = false;
    this->m_MPC_PGControl = NULL;
}

void ALevelManager_Others::VisibleEmotionAllNPC(bool IsVisible) {
}

void ALevelManager_Others::VisibleCategoryAll(EPLACEMENT_TYPE eType, bool IsVisible) {
}


void ALevelManager_Others::VisibleAll(bool IsVisible) {
}

void ALevelManager_Others::Visible(EPLACEMENT_TYPE eType, FName Label, bool IsVisible) {
}


bool ALevelManager_Others::Spawn_TimeZoneChange(EPLACEMENT_TYPE eType, FName Label) {
    return false;
}


void ALevelManager_Others::SetupNPCPathList() {
}

void ALevelManager_Others::SetLevelChangeByLinerShip(bool bLinerShip) {
}

void ALevelManager_Others::SetChangeBGM(bool change) {
}

void ALevelManager_Others::SetBgmIdFromOuter(int32 BGMID) {
}

void ALevelManager_Others::ResetInHouseSettings() {
}


void ALevelManager_Others::RequestRestorePlayerPlacement(const FReminiscenceRestorePlacement& restorePlacement) {
}

void ALevelManager_Others::RequestMapInLocation(const FPlayerLocation& Location) {
}

void ALevelManager_Others::RequestMapInEquipLantern(const FEquipLanternData& EquipLantern) {
}

void ALevelManager_Others::RequestMapInCameraLock(const FVector& CameraLockPos, ELevelTriggerID LevelTriggerID) {
}


bool ALevelManager_Others::RemoveObjectFromList(EPLACEMENT_TYPE eType, FName ObjLabel) {
    return false;
}

bool ALevelManager_Others::RemoveList_TimeZoneChange(EPLACEMENT_TYPE eType, FName Label) {
    return false;
}

bool ALevelManager_Others::RemoveList_TargetNPC(AKSCharacterBase* pNPC) {
    return false;
}

bool ALevelManager_Others::RemoveList(EPLACEMENT_TYPE eType, FName ObjLabel) {
    return false;
}

void ALevelManager_Others::RemoveAllType() {
}

void ALevelManager_Others::RemoveAll(EPLACEMENT_TYPE eType) {
}


bool ALevelManager_Others::RefreshSpawn(UObject* WorldContextObject, FName levelName, bool FadeChara, bool ForceSpawn, bool NextTimeZone, bool bUpdateSwoon) {
    return false;
}

void ALevelManager_Others::RefreshPostProcess(bool bCheckEventPlaying) {
}


void ALevelManager_Others::RefreshCurrentCameraLock_Delay(ENOTICE_TYPE noticeType, const FNoticeArgs& Args) {
}

void ALevelManager_Others::RefreshCurrentCameraLock() {
}

void ALevelManager_Others::RefreshCameraLockByLevelTriggerId(ELevelTriggerID TriggerID) {
}


void ALevelManager_Others::RecalcCollectedPostProcessVolumes() {
}














void ALevelManager_Others::NotifyGameParamDB(FName dbName, EDBNoticeType notice) {
}

bool ALevelManager_Others::IsTimeZoneThatCanPlaced(const FPlacementData& cPlaceData, bool NextTimeZone) {
    return false;
}

bool ALevelManager_Others::IsTimeZoneCheck(const FPlacementData& cPlaceInfo) {
    return false;
}

bool ALevelManager_Others::IsRequestedMapInLocation() {
    return false;
}

bool ALevelManager_Others::IsRequestedMapInEquipLantern() {
    return false;
}


bool ALevelManager_Others::IsFindList(EPLACEMENT_TYPE eType, FName Label) {
    return false;
}



FReminiscenceRestorePlacement ALevelManager_Others::GetRestorePlayerPlacement() {
    return FReminiscenceRestorePlacement{};
}

ALevelSequenceActor* ALevelManager_Others::GetPlacedSequencer(FName Label) {
    return NULL;
}

AKSCharacterBase* ALevelManager_Others::GetNPCUniqID(int32 UniqID) {
    return NULL;
}

TArray<AMJPathSplineObject*> ALevelManager_Others::GetNPCPathList() const {
    return TArray<AMJPathSplineObject*>();
}

TArray<FName> ALevelManager_Others::GetNpcLabels() const {
    return TArray<FName>();
}

AKSCharacterBase* ALevelManager_Others::GetNPC(FName ObjLabel) {
    return NULL;
}

void ALevelManager_Others::GetMJLevelManager(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, AMJLevelManager*& outLevelManager) {
}

TArray<FName> ALevelManager_Others::GetMapObjectLabels() const {
    return TArray<FName>();
}

AKSObjectBase* ALevelManager_Others::GetMapObject(FName Label) {
    return NULL;
}

FPlayerLocation ALevelManager_Others::GetMapInLocation() {
    return FPlayerLocation{};
}

FEquipLanternData ALevelManager_Others::GetMapInEquipLantern() {
    return FEquipLanternData{};
}

FVector ALevelManager_Others::GetMapInCameraLockPos() {
    return FVector{};
}

bool ALevelManager_Others::GetLevelChangeByLinerShip() {
    return false;
}

TArray<FName> ALevelManager_Others::GetEventTriggerLabels() const {
    return TArray<FName>();
}

AEventTriggerBox* ALevelManager_Others::GetEventTrigger(FName Label) {
    return NULL;
}

TArray<FName> ALevelManager_Others::GetDelayedSpawnNpcLabelList() const {
    return TArray<FName>();
}

int32 ALevelManager_Others::GetBgmIdFromOuter() const {
    return 0;
}


TArray<AKSCharacterBase*> ALevelManager_Others::GetAllNPC() {
    return TArray<AKSCharacterBase*>();
}

void ALevelManager_Others::FloorVisibleChangeCheck(FName& PlacementLabel, int32 nCheckFloor) {
}





void ALevelManager_Others::CollectPostProcessVolumes() {
}

void ALevelManager_Others::ClearRestorePlayerPlacement() {
}

void ALevelManager_Others::ClearPostProcessVolumes() {
}

void ALevelManager_Others::ClearMapInLocation() {
}

void ALevelManager_Others::ClearMapInEquipLantern() {
}

void ALevelManager_Others::ClearMapInCameraLock() {
}

void ALevelManager_Others::ClearForciblyPostProcessVolumes() {
}



bool ALevelManager_Others::CheckExtendedSpawnByEndDelayCount(const FPlacementData& PlacementData, int32 nUnqIndex) {
    return false;
}



bool ALevelManager_Others::ApplyScreenBrightness(int32 Level) {
    return false;
}

bool ALevelManager_Others::ApplyCornerDarkness(bool bIsNormal, bool CheckEventPlaying) {
    return false;
}

bool ALevelManager_Others::AddPlacedSequencerList(FName ObjLabel, ALevelSequenceActor* pObj) {
    return false;
}

bool ALevelManager_Others::AddNPCList(FName ObjLabel, AKSCharacterBase* pObj) {
    return false;
}

bool ALevelManager_Others::AddMapObjectList(FName ObjLabel, AKSObjectBase* pObj) {
    return false;
}

bool ALevelManager_Others::AddEventTriggerList(FName ObjLabel, AEventTriggerBox* pObj) {
    return false;
}



