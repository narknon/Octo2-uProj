#include "BattleManager.h"

ABattleManager::ABattleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eBattleMode = EBATTLE_ENCOUNT_TYPE::eNORMAL;
    this->m_bIsViewerMode = false;
    this->m_nBattleTurnCount = 0;
    this->m_nEnemyBreakCount = 0;
    this->m_bUsedRepeatAbility = false;
    this->m_bIsWaterSideMode = false;
    this->m_nBattleOrderCount = 0;
    this->m_nBattleOrderCountMax = 0;
    this->m_bUseSubPartyBattle = false;
    this->m_bEnableSyncAnimationCharacter = false;
    this->m_cSyncAnimationCharacter_Parent = NULL;
    this->m_cPrevNoticeCharacter_Pinch = NULL;
    this->m_cPrevNoticeCharacter_JustBreak = NULL;
    this->m_cBattleCamera = NULL;
    this->m_cBattleDirector = NULL;
    this->m_bExecutedReturnDragInEffect_Sea = false;
    this->m_bExecSessionAbility = false;
    this->m_cCurrentActionCommand = NULL;
    this->m_cBattleEventSequence = NULL;
    this->m_bIsBattleEvent = false;
    this->m_bReadyBattleEvent = false;
    this->m_bExecBattleEvent = false;
    this->m_bExecBattleStartDash = false;
    this->m_cBattleCommandMenuActor = NULL;
    this->m_bIsAutoTameMonster = false;
    this->m_cAutoTameTarget = NULL;
    this->m_cBattleActionOrder = NULL;
    this->m_bIsFirstActionCharacter = false;
    this->m_bExecFirstActionTurn = false;
    this->m_cActiveCharacter = NULL;
    this->m_cActionCharacter = NULL;
    this->m_cAdditiveCharacter = NULL;
    this->m_nTotalRewardMoney = 0;
    this->m_nTotalRewardExp = 0;
    this->m_nTotalRewardJP = 0;
    this->m_nRewardLuckyMoney = 0;
    this->m_nRewardLuckyExp = 0;
    this->m_nRewardLuckyJP = 0;
    this->m_fMoneyRatioByAbility = 0.00f;
    this->m_fExpRatioByAbility = 0.00f;
    this->m_fJPRatioByAbility = 0.00f;
    this->m_fMoneyRatioByEquipment = 0.00f;
    this->m_fExpRatioByEquipment = 0.00f;
    this->m_fJPRatioByEquipment = 0.00f;
    this->m_fMoneyRatioBySupport = 0.00f;
    this->m_fExpRatioBySupport = 0.00f;
    this->m_fJPRatioBySupport = 0.00f;
    this->m_fExpRatioBySupportInNight = 0.00f;
    this->m_fJPRatioBySupportInNight = 0.00f;
    this->m_bOverrideBattleSpeed = false;
    this->m_bAllowChangeBattleSpeed = false;
    this->m_bMainPartyIsFrontMember = false;
    this->m_bOnePartyDead = false;
    this->m_bExecChangePartySequencer = false;
    this->m_nSettledPlayerNum = 0;
    this->m_bDebugRelaseWeaponTexture = false;
}



bool ABattleManager::SwapBattlePlayerForEightBattle() {
    return false;
}


void ABattleManager::SetUsedRepeatAbility(bool bEnable) {
}


void ABattleManager::SetUnloadWeaponGCType(EWEAPON_UNLOAD_GC_TYPE eType) {
}

void ABattleManager::SetUnloadWeaponCntMax(uint8 uMax) {
}

void ABattleManager::SetSyncAnimationCharacterParent(ABattleCharacterBase* cCharacter) {
}

void ABattleManager::SetPrevNoticeCharacter_Pinch(ABattleCharacterBase* cPinchCharacter) {
}

void ABattleManager::SetPrevNoticeCharacter_JustBreak(ABattleCharacterBase* cJustBreakCharacter) {
}

bool ABattleManager::SetMoneyRatioBySupport(float fRatio) {
    return false;
}

bool ABattleManager::SetMoneyRatioByEquipment(float fRatio) {
    return false;
}

bool ABattleManager::SetMoneyRatioByAbility(float fRatio) {
    return false;
}

bool ABattleManager::SetJPRatioBySupportInNight(float fRatio) {
    return false;
}

bool ABattleManager::SetJPRatioBySupport(float fRatio) {
    return false;
}

bool ABattleManager::SetJPRatioByEquipment(float fRatio) {
    return false;
}

bool ABattleManager::SetJPRatioByAbility(float fRatio) {
    return false;
}

bool ABattleManager::SetExpRatioBySupportInNight(float fRatio) {
    return false;
}

bool ABattleManager::SetExpRatioBySupport(float fRatio) {
    return false;
}

bool ABattleManager::SetExpRatioByEquipment(float fRatio) {
    return false;
}

bool ABattleManager::SetExpRatioByAbility(float fRatio) {
    return false;
}

void ABattleManager::SetExecSessionAbilityForTutorial(bool bEnable) {
}

void ABattleManager::SetEnableRelaseWeaponTexture(bool bRelease) {
}

void ABattleManager::SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue) {
}

void ABattleManager::SetDebugParameter(EBATTLE_DEBUG_SWITCH eType, int32 nValue) {
}





void ABattleManager::ReturnDragInIndex(int32 nIndex) {
}

void ABattleManager::ResetDragInIndex() {
}










void ABattleManager::OpenChainInfomation_Implementation(TArray<FText>& astrInfomationText, float fShowTime) {
}





bool ABattleManager::IsFirstActionTurn() {
    return false;
}

bool ABattleManager::IsExecBattleStartDash() {
    return false;
}


bool ABattleManager::IsEndrollReplayMode() {
    return false;
}

bool ABattleManager::IsEnableRelaseWeaponTexture() {
    return false;
}

bool ABattleManager::IsEightBattleMode() {
    return false;
}



bool ABattleManager::IsBattleSpeedOverride() {
    return false;
}




void ABattleManager::InitSyncAnimationCharacter() {
}

void ABattleManager::InitPrevNoticeCharacter() {
}

void ABattleManager::InitializeResultValue() {
}



bool ABattleManager::GetWaterSideMode() {
    return false;
}

bool ABattleManager::GetUsedRepeatAbility() {
    return false;
}

bool ABattleManager::GetSyncAnimationCharacter(ABattleCharacterBase*& cParent, TArray<ABattleCharacterBase*>& acChilds) {
    return false;
}

TArray<ABattleCharacterBase*> ABattleManager::GetSubBattlePlayerList() {
    return TArray<ABattleCharacterBase*>();
}

int32 ABattleManager::GetSettledPlayerNum() {
    return 0;
}

float ABattleManager::GetResultMoneyRatio() {
    return 0.0f;
}

float ABattleManager::GetResultJPRatio() {
    return 0.0f;
}

float ABattleManager::GetResultExpRatio() {
    return 0.0f;
}



bool ABattleManager::GetPrevNoticeCharacter_Pinch(ABattleCharacterBase*& cPinchCharacter) {
    return false;
}

bool ABattleManager::GetPrevNoticeCharacter_JustBreak(ABattleCharacterBase*& cJustBreakCharacter) {
    return false;
}

bool ABattleManager::GetOnePartyDead() {
    return false;
}


bool ABattleManager::GetMainPartyIsFrontMember() {
    return false;
}

ABattleManager* ABattleManager::GetInstance() {
    return NULL;
}

void ABattleManager::GetEventFlag(FName FlagName, bool& Value) {
}


int32 ABattleManager::GetEnemyBreakCount() {
    return 0;
}

int32 ABattleManager::GetDebugParameter(EBATTLE_DEBUG_SWITCH eType) {
    return 0;
}

UDebugBattleLogComponent* ABattleManager::GetDebugLogComponent() {
    return NULL;
}

UDebugBattleManagerComponent* ABattleManager::GetDebugComponent() {
    return NULL;
}






bool ABattleManager::GetBattleViewerMode() {
    return false;
}

int32 ABattleManager::GetBattleTurnCount() {
    return 0;
}

TArray<ABattleCharacterBase*> ABattleManager::GetBattleSupporterList() {
    return TArray<ABattleCharacterBase*>();
}




ABattleSequenceDirector* ABattleManager::GetBattleSequenceDirector() {
    return NULL;
}

void ABattleManager::GetBattlePlayerListForSequencer(TArray<ABattleCharacterBase*>& acFrontParty, TArray<ABattleCharacterBase*>& acBackParty) {
}

TArray<ABattleCharacterBase*> ABattleManager::GetBattlePlayerListForEightBattle() {
    return TArray<ABattleCharacterBase*>();
}

TArray<ABattleCharacterBase*> ABattleManager::GetBattlePlayerList() {
    return TArray<ABattleCharacterBase*>();
}

void ABattleManager::GetBattleOrderCount(int32& nOrderCount, int32& nOrderCountMax) {
}

EBATTLE_ENCOUNT_TYPE ABattleManager::GetBattleMode() {
    return EBATTLE_ENCOUNT_TYPE::eNORMAL;
}


TArray<ABattleCharacterBase*> ABattleManager::GetBattleEnemyList() {
    return TArray<ABattleCharacterBase*>();
}

TArray<ABattleCharacterBase*> ABattleManager::GetBattleCharacterList() {
    return TArray<ABattleCharacterBase*>();
}

ABattleCamera* ABattleManager::GetBattleCamera() {
    return NULL;
}



ABattleActionOrder* ABattleManager::GetBattleActionOrder() {
    return NULL;
}


int32 ABattleManager::GetAddDragInIndex() {
    return 0;
}

















bool ABattleManager::CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType) {
    return false;
}



bool ABattleManager::CheckBattlePlayerInMainParty(ABattleCharacterBase* cTargetPlayer) {
    return false;
}



void ABattleManager::ApplyAllDebugSwitch() {
}



void ABattleManager::AddUnloadWeaponTextureLabel(TArray<FName>& weaponList) {
}

void ABattleManager::AddSyncAnimationCharacterChilds(ABattleCharacterBase* cCharacter) {
}

bool ABattleManager::AddRewardLuckyMoney(int32 nValue) {
    return false;
}

bool ABattleManager::AddRewardLuckyJP(int32 nValue) {
    return false;
}

bool ABattleManager::AddRewardLuckyExp(int32 nValue) {
    return false;
}

void ABattleManager::AddReflectionEnforcerList(ABattleCharacterBase* cCharacter) {
}

void ABattleManager::AddloadWeaponTextureLabel(TArray<FName>& weaponList) {
}

void ABattleManager::AddEnemyBreakCount() {
}

void ABattleManager::AddBattleTurnCount() {
}

void ABattleManager::AddBattleOrderCount() {
}

void ABattleManager::AddBattleLogForOneLine(const FString& strBattleLog) {
}

void ABattleManager::AddBattleLog(FDebugBattleLog cBattleLog) {
}















