#include "ActionCommandBase.h"

AActionCommandBase::AActionCommandBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cEnforcer = NULL;
    this->m_nOptionIndex = 0;
    this->m_bEnableRandomTarget = false;
    this->m_bEnableSkillALL = false;
    this->m_bEnableDamageUpWithFullHP = false;
    this->m_bSettledPlayOnce_OnRecovered = false;
    this->m_bAblityHit = false;
    this->m_bAttackHitFailed = false;
    this->m_bIsLastHit = false;
    this->m_bEnableRandomCover = false;
    this->m_bExecRandomCover = false;
    this->m_cRandomCoverEnforcer = NULL;
    this->m_bExecutedCounterTrap = false;
    this->m_bIsForceWeakness = false;
    this->m_nAdditiveBreakDamage = 0;
    this->m_cSummonOwnerAbility = NULL;
    this->m_bIsSummonAbility = false;
    this->m_bIsSummonLastHit = false;
    this->m_bIsSettledAutoTameMonster = false;
    this->m_cActionCommandSequencePlayer = NULL;
    this->m_cActionCommandSequenceActor = NULL;
    this->m_cCommandSequence = NULL;
    this->m_bEnableCommandSequence = false;
    this->m_bReadyCommandSequence = false;
    this->m_nTotalSlideFrame = 0;
    this->m_bExecCommandSequence = false;
    this->m_bIsInfomation = false;
    this->m_bIsOnHitSE = false;
    this->m_bIsSessionSupport = false;
    this->m_bIsBusinessSupport = false;
}





















void AActionCommandBase::SetSettledAutoTameMonster(bool bExec) {
}



void AActionCommandBase::SetExecutedCounterTrap(bool bExec) {
}


void AActionCommandBase::SetBusinessSupportInfomationText(const FText& strInfoText) {
}

void AActionCommandBase::SetAttackHitFailed(bool bFailed) {
}

void AActionCommandBase::SetAdditiveBreakDamage(int32 nBreakDamage) {
}

void AActionCommandBase::SetActionCommandSequenceActor(ABattleAbilitySequenceActor* cSequenceActor) {
}




















bool AActionCommandBase::IsSettledAutoTameMonster() {
    return false;
}

bool AActionCommandBase::IsSessionSupportCommand() {
    return false;
}

bool AActionCommandBase::IsPlayOnHitDamageVoice_Implementation() {
    return false;
}


bool AActionCommandBase::IsForceWeakness() {
    return false;
}

bool AActionCommandBase::IsBusinessSupportCommand() {
    return false;
}







bool AActionCommandBase::GetExecutedCounterTrap() {
    return false;
}



bool AActionCommandBase::GetAttackHitFailed() {
    return false;
}






bool AActionCommandBase::ExecStepCounter_Implementation() {
    return false;
}









float AActionCommandBase::ConvertFrameToSecondByFrameRate(int32 nFrameNumber, FFrameRate cFrameRate) {
    return 0.0f;
}



EBATTLE_SEQUENCE_PATTERN_TYPE AActionCommandBase::CheckSequencePattern_Implementation() {
    return EBATTLE_SEQUENCE_PATTERN_TYPE::ePATTERN_NONE;
}




bool AActionCommandBase::CheckBoostLevelLess_Implementation(int32 nBorderLevel, bool bContainEqual) {
    return false;
}

bool AActionCommandBase::CheckBoostLevelGreater_Implementation(int32 nBorderLevel, bool bContainEqual) {
    return false;
}

bool AActionCommandBase::CheckAttackCounter_Implementation() {
    return false;
}






