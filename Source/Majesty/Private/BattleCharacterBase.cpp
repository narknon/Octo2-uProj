#include "BattleCharacterBase.h"
#include "Components/SceneComponent.h"

ABattleCharacterBase::ABattleCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nCharacterID = 0;
    this->m_cAnimationCharacter = NULL;
    this->m_nCurrentHP = 0;
    this->m_nDecreaseHPMax = 0;
    this->m_bIsChangedHPMax = false;
    this->m_nCurrentMP = 0;
    this->m_nCurrentBP = 0;
    this->m_nCurrentBPMax = 0;
    this->m_nCurrentShieldPoint = 0;
    this->m_nShieldPointMax = 0;
    this->m_cOwnerPlayer = NULL;
    this->m_nUseBPInCurrentOrder = 0;
    this->m_bUseBoost = false;
    this->m_bBreakEnemyInCurrentOrder = false;
    this->m_bExecBreakAct = false;
    this->m_bCharacterReady = false;
    this->m_bAbilityHitFlag = false;
    this->m_bAbilityHitInvisible = false;
    this->m_bUseDamageCutShield = false;
    this->m_bJustKillInAilment = false;
    this->m_bReflectionEnforcer = false;
    this->m_bHitDiseaseInAction = false;
    this->m_bIsExceptField = false;
    this->m_nDragInIndex = 0;
    this->m_nDragInIndexTest = 0;
    this->m_bIsExecForceMovement = false;
    this->m_bResumeIdleAction = false;
    this->m_bResumeIdleActionFixed = false;
    this->m_eResumeIdleActionType = EBATTLE_ACTION_TYPE::IDLE;
    this->m_bIsAutoTameMonster = false;
    this->m_bEnableBlind = false;
    this->m_cActionOrderComponent = NULL;
    this->m_nOrderCountMax = 1;
    this->m_nCurrentOrderCountMax = 1;
    this->m_nCurrentOrderCounter = 0;
    this->m_nCurrentActionTimeBase = 0;
    this->m_nNextActionTimeBase = 0;
    this->m_cBattleVoiceComponent = NULL;
    this->m_bPlayOnRecoveredVoice = true;
    this->m_bSettledPlayOnce_OnRecovered = false;
    this->m_cDefaultEffectSocket = NULL;
    this->m_cGroundEffectSocket = NULL;
    this->m_cChargeActionEffectSocket = NULL;
    this->m_bIsCharacterWarpMode = false;
    this->m_bEnableDeadCharacterControl = false;
    this->VisibleCanoe = true;
    this->EnableCanoeTrace = false;
    this->CharacterOpacity = 1.00f;
    this->DisableBattleCameraOpacity = false;
    this->PotentialityAction_EyesColor = 0.00f;
    this->m_eWeaponStance = EWEAPON_STANCE::NONE;
    this->m_eMainWeapon = EWEAPON_CATEGORY::eSWORD;
    this->m_nMainWeaponIndex = 0;
    this->m_eNormalAttackWeapon = EWEAPON_CATEGORY::eSWORD;
    this->m_nNormalAttackWeaponIndex = 0;
    this->m_nSwitchWeaponIndex = 0;
    this->m_eForteWeapon = EWEAPON_CATEGORY::eSWORD;
    this->m_cPotentialityActionComponent = NULL;
    this->m_bPotentialityActionEnable = false;
    this->m_nExcitementPoint = 0;
    this->m_bMasqueradeEnable = false;
    this->m_cMasqueradeComponent = NULL;
    this->m_bInventorEnable = false;
    this->m_cInventorComponent = NULL;
    this->m_bChargeActionEnable = false;
    this->m_cBattleAIComponent = NULL;
    this->m_bBattleAIReady = false;
    this->m_bIsPreparation = false;
    this->m_bIsWeakIconFullOpen = false;
    this->m_bIsUpdateWeakLockData = false;
    this->m_bIsUpdateWeakChangeData = false;
    this->m_bIsUpdateShieldChangeData = false;
    this->m_bIsUpdateShieldChangeDataTest = false;
    this->m_nBribeCounter = 0;
    this->m_fBribeRatio = 0.00f;
    this->m_bRequestSettingNextOrder = false;
    this->m_bRequestSettingNextTurnOnly = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

TArray<bool> ABattleCharacterBase::WeakTypeToWeaponType(int32 eWeakLockType) {
    return TArray<bool>();
}

TArray<bool> ABattleCharacterBase::WeakTypeToMagicType(int32 eWeakLockType) {
    return TArray<bool>();
}
















void ABattleCharacterBase::SetWeaponStance(EWEAPON_STANCE eStance) {
}


void ABattleCharacterBase::SetVisibleCanoe_Implementation(bool bVisible) {
}

void ABattleCharacterBase::SetUseDamageCutShield(bool bUseShield) {
}







bool ABattleCharacterBase::SetSupportAilment(FSupportAbilityDataBase cSupportAbilityData) {
    return false;
}


void ABattleCharacterBase::SetReflactionEnforcer(bool bEnable) {
}

void ABattleCharacterBase::SetPotentialityAction_EyesColor_Implementation(float fAlpha) {
}

void ABattleCharacterBase::SetPotentialityAction_BodyColor_Implementation(FLinearColor cColor) {
}



void ABattleCharacterBase::SetForceMovementParameter(FVector vStartPoint, FVector vGoalPoint, bool bResumeIdle, EBATTLE_ACTION_TYPE eResumeIdleType, bool bResumeIdleFixed) {
}





void ABattleCharacterBase::SetEnablePlayOnRecoveredVoice(bool bEnable) {
}

void ABattleCharacterBase::SetEnableCanoeTrace_Implementation(bool bEnable) {
}

void ABattleCharacterBase::SetDisableBattleCameraOpacity_Implementation(bool bDisable) {
}


void ABattleCharacterBase::SetDecreaseHPMax(int32 DecreaseValue) {
}

void ABattleCharacterBase::SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue) {
}


void ABattleCharacterBase::SetCharaTransform_Implementation(FTransform cTransform) {
}


void ABattleCharacterBase::SetCharacterOpacity_Implementation(float fOpacity) {
}


void ABattleCharacterBase::SetCanoeTransform_Implementation(FTransform cTransform) {
}


void ABattleCharacterBase::SetAbilityHitFlag(bool bAbilityHit, bool bAbilityHitInvisible) {
}









void ABattleCharacterBase::ResetHitDiseaseForPreAction() {
}

void ABattleCharacterBase::ResetExcitementPoint() {
}































bool ABattleCharacterBase::IsPotentialityActionEnable() {
    return false;
}

bool ABattleCharacterBase::IsMasqueradeEnable() {
    return false;
}

void ABattleCharacterBase::IsJustKillInAilment(bool& bJustKill) {
}

bool ABattleCharacterBase::IsInventorEnable() {
    return false;
}

bool ABattleCharacterBase::IsHitDiseaseInAction() {
    return false;
}


bool ABattleCharacterBase::IsExecForceMovement() {
    return false;
}

bool ABattleCharacterBase::IsExecBreakAct() {
    return false;
}

bool ABattleCharacterBase::IsExceptField() {
    return false;
}












bool ABattleCharacterBase::IsCharacterDead_Implementation() {
    return false;
}


bool ABattleCharacterBase::IsAutoTameMonster() {
    return false;
}


void ABattleCharacterBase::InitUseDamageCutShield() {
}



EWEAPON_STANCE ABattleCharacterBase::GetWeaponStance() {
    return EWEAPON_STANCE::NONE;
}




int32 ABattleCharacterBase::GetSwitchWeaponIndex() {
    return 0;
}




UPotentialityActionComponent* ABattleCharacterBase::GetPotentialityActionComponent() {
    return NULL;
}


ABattleCharacterBase* ABattleCharacterBase::GetOwnerPlayer() {
    return NULL;
}


int32 ABattleCharacterBase::GetNormalAttackWeaponIndex() {
    return 0;
}

EWEAPON_CATEGORY ABattleCharacterBase::GetNormalAttackWeaponCategory() {
    return EWEAPON_CATEGORY::eSWORD;
}


UMasqueradeComponent* ABattleCharacterBase::GetMasqueradeComponent() {
    return NULL;
}

EWEAPON_CATEGORY ABattleCharacterBase::GetMainWeaponCategory() {
    return EWEAPON_CATEGORY::eSWORD;
}

UInventorComponent* ABattleCharacterBase::GetInventorComponent() {
    return NULL;
}

FName ABattleCharacterBase::GetForteWeaponID() {
    return NAME_None;
}

int32 ABattleCharacterBase::GetExcitementPoint() {
    return 0;
}

TArray<EWEAPON_CATEGORY> ABattleCharacterBase::GetEquipmentWeaponCategory_Implementation() {
    return TArray<EWEAPON_CATEGORY>();
}




bool ABattleCharacterBase::GetEnablePlayOnRecoveredVoice() {
    return false;
}

bool ABattleCharacterBase::GetEnableBlind() {
    return false;
}




int32 ABattleCharacterBase::GetDecreaseHPMax() {
    return 0;
}

UDebugBattleCharaComponent* ABattleCharacterBase::GetDebugComponent() {
    return NULL;
}
















UBattleVoiceComponent* ABattleCharacterBase::GetBattleVoiceComponent() {
    return NULL;
}


UBattleAIBase* ABattleCharacterBase::GetBattleAIComponent() {
    return NULL;
}






UActionOrderComponent* ABattleCharacterBase::GetActionOrderComponent() {
    return NULL;
}


























void ABattleCharacterBase::CheckUseDamageCutShield(bool& bUseShield) {
}

bool ABattleCharacterBase::CheckSupportAilment_Implementation(ESUPPORT_AILMENT_TYPE eSupportAilment, FSupportAbilityDataBase& cSupportAbilityData) {
    return false;
}


bool ABattleCharacterBase::CheckReflactionEnforcer() {
    return false;
}


bool ABattleCharacterBase::CheckPotentialityActionExec(EPOTENTIALITY_ACTION_TYPE eActionType) {
    return false;
}







bool ABattleCharacterBase::CheckEnableStealthTarget_Implementation() {
    return false;
}

bool ABattleCharacterBase::CheckEnableStealthCursor_Implementation() {
    return false;
}

bool ABattleCharacterBase::CheckEnableStealthActionOrder_Implementation() {
    return false;
}

bool ABattleCharacterBase::CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType) {
    return false;
}




void ABattleCharacterBase::CheckAbilityHitFlag(bool& bAbilityHitFlag, bool& bAbilityHitInvisible) {
}



bool ABattleCharacterBase::ChangeActionMode_Implementation(bool bIsSpecial, int32 nModeIndex, bool bUseTransition) {
    return false;
}









UActorComponent* ABattleCharacterBase::AddActorComponent(UClass* cActorComponentClass) {
    return NULL;
}


