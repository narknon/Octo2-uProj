#include "BattleWipeBase.h"

UBattleWipeBase::UBattleWipeBase() {
    this->m_bBattleEndWipeOut = false;
    this->m_bEnableWhiteOut = false;
    this->m_bExecWipe = false;
    this->m_eState = EBATTLE_WIPE_STATE::eNONE;
    this->m_bDebugWipeColorEnable = false;
}





void UBattleWipeBase::SetWhiteOut(bool Enable) {
}



bool UBattleWipeBase::IsExecWipe() {
    return false;
}

bool UBattleWipeBase::IsEnableWhiteOut() {
    return false;
}

bool UBattleWipeBase::IsBattleEndWipeOut() {
    return false;
}



