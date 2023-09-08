#include "MJLevelManager.h"

AMJLevelManager::AMJLevelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_RequestLevelTrigger = ELevelTriggerID::Start;
    this->m_ChangeBGM = false;
    this->m_UseFadeUI = false;
    this->m_FadeInTime = 0.00f;
    this->m_FadeOutTime = 0.00f;
    this->m_PrevLevelInGame = false;
    this->m_PrevLevelSea = false;
    this->m_IsGameOver = false;
    this->m_LvlMng_Others = NULL;
    this->m_IsFirstVisitLevel = false;
    this->m_Debug_BattleLevelLoader = NULL;
}

bool AMJLevelManager::SwitchActiveLevel(ELEVEL_TYPE levelType, int32 MapIndex, bool useFade) {
    return false;
}

bool AMJLevelManager::StartFadeOut_Implementation() {
    return false;
}

bool AMJLevelManager::StartFadeIn_Implementation() {
    return false;
}

void AMJLevelManager::SetSwitchActiveParam(int32 MapIndex, ELEVEL_TYPE NextLevelType) {
}

void AMJLevelManager::SetRequestedLevelTriggerID(ELevelTriggerID TriggerID) {
}

void AMJLevelManager::SetNextMapInfoByName(FName NextMapName, ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, ELEVEL_TYPE NextLevelType) {
}

void AMJLevelManager::SetNextMapInfoByID(int32 NextMapID, ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, ELEVEL_TYPE NextLevelType) {
}

void AMJLevelManager::SetFirstVisited(bool bFirstVisited) {
}


void AMJLevelManager::RequestRevealBattle(bool bReveal) {
}


void AMJLevelManager::RequestLevelChange() {
}

void AMJLevelManager::Proc_AfterUnloadLevel() {
}

void AMJLevelManager::OnLevelLoaderCommandCompleted(int32 loaderId, const FLevelLoaderRequest& request) {
}

void AMJLevelManager::NotifyLevelTransition(FName levelId, ELEVEL_TYPE levelType, ELevelTransitionNotice notice) {
}

void AMJLevelManager::NotifyLevelLoader(FName levelName, ELEVEL_TYPE levelType, ELevelLoaderNotice notice) {
}

bool AMJLevelManager::IsSameLevelChanging() {
    return false;
}

bool AMJLevelManager::IsRunningFadeOut_Implementation() {
    return false;
}

bool AMJLevelManager::IsRunningFadeIn_Implementation() {
    return false;
}

bool AMJLevelManager::IsPrevLevelSea() const {
    return false;
}

bool AMJLevelManager::IsPrevLevelInGame() const {
    return false;
}

bool AMJLevelManager::IsLevelChangeFinishFadeIn() {
    return false;
}

bool AMJLevelManager::IsImmovableByFieldChanging() {
    return false;
}

bool AMJLevelManager::IsFadeOutState() {
    return false;
}

bool AMJLevelManager::IsFadeInAllowed_Implementation() {
    return false;
}

bool AMJLevelManager::IsChanging() const {
    return false;
}

bool AMJLevelManager::GetUseFadeUI() const {
    return false;
}

ELevelTransitionType AMJLevelManager::GetTransitionType() const {
    return ELevelTransitionType::WAIT;
}

ELevelTriggerID AMJLevelManager::GetRequestedLevelTriggerID() const {
    return ELevelTriggerID::Start;
}

FName AMJLevelManager::GetNextLevelId() const {
    return NAME_None;
}

ALevelManager_Others* AMJLevelManager::GetLevelManagerOthers() const {
    return NULL;
}

ULevelStreaming* AMJLevelManager::GetFieldLevelStreaming() {
    return NULL;
}

bool AMJLevelManager::GetChangeBGM() const {
    return false;
}

ELEVEL_TYPE AMJLevelManager::GetActiveLevelType() const {
    return ELEVEL_TYPE::FIELD;
}


void AMJLevelManager::Debug_ShowManagerInfo(bool bEnable) {
}

void AMJLevelManager::Debug_SetMemProf_OnUnloadLevel(bool bEnabled) {
}

void AMJLevelManager::Debug_SetMemProf_OnEndChangeLevel(bool bEnabled) {
}

void AMJLevelManager::Debug_SetMemProf_OnBattleEnd(bool bEnabled) {
}

void AMJLevelManager::Debug_SetForceRevealBattleMap(bool bForce) {
}

void AMJLevelManager::Debug_SetForceLostWay(bool bFlag) {
}

void AMJLevelManager::Debug_RequestSimulatedChangLevel() {
}

void AMJLevelManager::Debug_RequestOverrideBattleMap(FName battleMapName) {
}

void AMJLevelManager::Debug_OnTransitionEvent(FName levelId, ELEVEL_TYPE levelType, ELevelTransitionNotice notice) {
}

bool AMJLevelManager::Debug_ChangeLevelOnDecided(const FDebugListMenuItem& menuItem) {
    return false;
}

void AMJLevelManager::Debug_ChangeLevelOnClosed() {
}

bool AMJLevelManager::ChangeFieldLevelWithParams(FName levelId, ELevelTriggerID levelTrgId, bool useFade, bool ChangeBGM) {
    return false;
}

bool AMJLevelManager::ChangeFieldLevel(FName levelId) {
    return false;
}

void AMJLevelManager::CallLevelTransision(ELEVEL_TYPE levelType, ELevelTransitionNotice notice) {
}


