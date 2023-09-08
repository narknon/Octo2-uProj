#include "LevelManagerUtility.h"

ULevelManagerUtility::ULevelManagerUtility() {
}

bool ULevelManagerUtility::SwitchBattleLevel(int32 MapIndex) {
    return false;
}

void ULevelManagerUtility::SetVisibleObjects(EPLACEMENT_TYPE eType, FName Label, bool IsVisible) {
}

void ULevelManagerUtility::SetVisibleEmotionAllNPC(bool IsVisible) {
}

void ULevelManagerUtility::SetVisibleBarChangeCharacter() {
}

void ULevelManagerUtility::SetVisibleAllObjects(bool IsVisible) {
}

void ULevelManagerUtility::SetVignetteWeakRate(float Param) {
}

void ULevelManagerUtility::SetVignetteNormalRate(float Param) {
}

void ULevelManagerUtility::SetRequestedLevelTriggerID(ELevelTriggerID TriggerID) {
}

void ULevelManagerUtility::SetLevelChangeByLinerShip(bool bLinerShip) {
}

void ULevelManagerUtility::SetGainRateMin(float Param) {
}

void ULevelManagerUtility::SetGainRateMax(float Param) {
}

void ULevelManagerUtility::SetFocalRegionWideAdd(float Param) {
}

void ULevelManagerUtility::SetBgmIdFromOuter(int32 BGMID) {
}

void ULevelManagerUtility::SaveVisitedMap(FName SaveLevel) {
}

void ULevelManagerUtility::ResetCameraLockParam() {
}

void ULevelManagerUtility::RequestRestorePlayerPlacement(const FReminiscenceRestorePlacement& restorePlacement) {
}

void ULevelManagerUtility::RequestMapInLocation(const FPlayerLocation& Location) {
}

void ULevelManagerUtility::RequestMapInEquipLantern(const FEquipLanternData& EquipLantern) {
}

void ULevelManagerUtility::RequestMapInCameraLock(const FVector& CameraLockPos, ELevelTriggerID LevelTriggerID) {
}

bool ULevelManagerUtility::RequestLoadFieldLevel(FName Map, ELevelTriggerID TriggerID, bool Fade, bool ChangeBGM) {
    return false;
}

void ULevelManagerUtility::RemoveTargetNPC_ByID(int32 NPCUniqID) {
}

bool ULevelManagerUtility::RemoveObjectFromList(EPLACEMENT_TYPE eType, FName ObjLabel) {
    return false;
}

void ULevelManagerUtility::RemoveAllType() {
}

bool ULevelManagerUtility::RefreshSwoon(int32 NPCUniqID) {
    return false;
}

bool ULevelManagerUtility::RefreshSpawnCurrentLevel(bool FadeChara, bool IsForceSpawn, bool NextTimeZone, bool bUpdateSwoon) {
    return false;
}

void ULevelManagerUtility::RefreshFlagObjectRenderStateDirty() {
}

void ULevelManagerUtility::RefreshFlagObject() {
}

void ULevelManagerUtility::RefreshBarChangeCharacter() {
}

void ULevelManagerUtility::RecalcCollectedPostProcessVolumes() {
}

bool ULevelManagerUtility::PlayLevelBGM() {
    return false;
}

void ULevelManagerUtility::ModifyActorSoftReference(TSoftObjectPtr<AActor>& softRef) {
}

bool ULevelManagerUtility::IsValidLevelManager_Inner() {
    return false;
}

void ULevelManagerUtility::IsValidLevelManager(TEnumAsByte<EBPIsValidReturnCode::Type>& returnCode) {
}

bool ULevelManagerUtility::IsTransitionToGameOver() {
    return false;
}

bool ULevelManagerUtility::IsTownById(int32 levelId) {
    return false;
}

bool ULevelManagerUtility::IsSameLevelChanging() {
    return false;
}

bool ULevelManagerUtility::IsRequestedMapInLocation() {
    return false;
}

bool ULevelManagerUtility::IsPrevLevelSea() {
    return false;
}

bool ULevelManagerUtility::IsPrevLevelInGame() {
    return false;
}

bool ULevelManagerUtility::IsNowLevelTown() {
    return false;
}

bool ULevelManagerUtility::IsNowLevelSea() {
    return false;
}

bool ULevelManagerUtility::IsNowLevelInGame() {
    return false;
}

bool ULevelManagerUtility::IsNextLevelInGame() {
    return false;
}

bool ULevelManagerUtility::IsLevelChanging() {
    return false;
}

bool ULevelManagerUtility::IsImmovableByFieldChanging() {
    return false;
}

bool ULevelManagerUtility::IsGameOverPlaying() {
    return false;
}

bool ULevelManagerUtility::IsGameOverLevelLoad() {
    return false;
}

bool ULevelManagerUtility::IsFirstVisitLevel() {
    return false;
}

bool ULevelManagerUtility::IsDungeonById(int32 levelId) {
    return false;
}

bool ULevelManagerUtility::IsCompletedLevelChanging() {
    return false;
}

void ULevelManagerUtility::HouseChangeVisible(bool inHouse, int32 floor) {
}

float ULevelManagerUtility::GetVignetteWeakRate() {
    return 0.0f;
}

float ULevelManagerUtility::GetVignetteNormalRate() {
    return 0.0f;
}

FName ULevelManagerUtility::GetShowLevelName() {
    return NAME_None;
}

FReminiscenceRestorePlacement ULevelManagerUtility::GetRestorePlayherPlacement() {
    return FReminiscenceRestorePlacement{};
}

bool ULevelManagerUtility::GetRestoreEncountDataAfterReminiscence(FEncountTriggerData& outEncountTriggerData) {
    return false;
}

ELevelTriggerID ULevelManagerUtility::GetRequestedLevelTriggerID() {
    return ELevelTriggerID::Start;
}

int32 ULevelManagerUtility::GetPrevTownID(bool useSubTownID) {
    return 0;
}

FName ULevelManagerUtility::GetPrevLevelName() {
    return NAME_None;
}

int32 ULevelManagerUtility::GetPrevLevelDataID() {
    return 0;
}

bool ULevelManagerUtility::GetPrevLevelData(FLevelInfoData& outLevelData) {
    return false;
}

ELEVEL_DARK_STATE ULevelManagerUtility::GetPrevLevelDarkState() {
    return ELEVEL_DARK_STATE::NORMAL;
}

AKSCharacterBase* ULevelManagerUtility::GetNPCUniqID(int32 UniqID) {
    return NULL;
}

void ULevelManagerUtility::GetNPCPathList(TArray<AMJPathSplineObject*>& outNpcPathList) {
}

AKSCharacterBase* ULevelManagerUtility::GetNPC(FName ObjLabel) {
    return NULL;
}

int32 ULevelManagerUtility::GetNowTownID(bool useSubTownID) {
    return 0;
}

FName ULevelManagerUtility::GetNowLevelName() {
    return NAME_None;
}

int32 ULevelManagerUtility::GetNowLevelDataID() {
    return 0;
}

bool ULevelManagerUtility::GetNowLevelData(FLevelInfoData& outLevelData) {
    return false;
}

int32 ULevelManagerUtility::GetNextTownID(bool useSubTownID) {
    return 0;
}

FName ULevelManagerUtility::GetNextLevelName() {
    return NAME_None;
}

int32 ULevelManagerUtility::GetNextLevelDataID() {
    return 0;
}

bool ULevelManagerUtility::GetNextLevelData(FLevelInfoData& outLevelData) {
    return false;
}

FPlayerLocation ULevelManagerUtility::GetMapInLocation() {
    return FPlayerLocation{};
}

FEquipLanternData ULevelManagerUtility::GetMapInEquipLantern() {
    return FEquipLanternData{};
}

ALevelManager_Others* ULevelManagerUtility::GetLevelManageOthersActor() {
    return NULL;
}

bool ULevelManagerUtility::GetLevelChangeByLinerShip() {
    return false;
}

float ULevelManagerUtility::GetGainRateMin() {
    return 0.0f;
}

float ULevelManagerUtility::GetGainRateMax() {
    return 0.0f;
}

float ULevelManagerUtility::GetFocalRegionWideAdd() {
    return 0.0f;
}

ELEVEL_DARK_STATE ULevelManagerUtility::GetCurrentLevelDarkState() {
    return ELEVEL_DARK_STATE::NORMAL;
}

FName ULevelManagerUtility::GetBattleEnemyGroupID() {
    return NAME_None;
}

ELEVEL_TYPE ULevelManagerUtility::GetActiveLevelType() {
    return ELEVEL_TYPE::FIELD;
}

bool ULevelManagerUtility::FinishBattleLevel() {
    return false;
}

void ULevelManagerUtility::Debug_ShowPostProcessVolumeInfo() {
}

void ULevelManagerUtility::Debug_SetBarPlaceCharaRateOne(int32 Param) {
}

void ULevelManagerUtility::Debug_SetBarNotPlaceCharaRate(int32 Param) {
}

void ULevelManagerUtility::Debug_SetBarCharaList(const TArray<int32>& Param) {
}

bool ULevelManagerUtility::Debug_LevelChange(FName levelName, uint8 triggerIndex) {
    return false;
}

int32 ULevelManagerUtility::Debug_GetBarPlaceCharaRateOne() {
    return 0;
}

int32 ULevelManagerUtility::Debug_GetBarNotPlaceCharaRate() {
    return 0;
}

TArray<int32> ULevelManagerUtility::Debug_GetBarCharaList() {
    return TArray<int32>();
}

void ULevelManagerUtility::Debug_ChangeBarChara() {
}

void ULevelManagerUtility::ClearRestorePlayherPlacement() {
}

void ULevelManagerUtility::ClearMapInLocation() {
}

void ULevelManagerUtility::ClearMapInEquipLantern() {
}

void ULevelManagerUtility::ClearCollisionDisabledNPC() {
}

int32 ULevelManagerUtility::CalcLostWayProbability() {
    return 0;
}

bool ULevelManagerUtility::ApplyScreenBrightness(int32 Level) {
    return false;
}

void ULevelManagerUtility::ApplyRestorePlayerPlacement() {
}

void ULevelManagerUtility::ApplyPostProcessCurrentParam(bool bCheckEventPlaying) {
}

bool ULevelManagerUtility::ApplyCurrentLevelResolution(const UObject* WorldContextObject) {
    return false;
}

bool ULevelManagerUtility::ApplyCornerDarkness(bool IsNormal, bool CheckEventPlaying) {
    return false;
}

void ULevelManagerUtility::AddCollisionDisabledNPC(int32 NPCUniqID) {
}


