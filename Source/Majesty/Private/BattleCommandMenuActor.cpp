#include "BattleCommandMenuActor.h"

ABattleCommandMenuActor::ABattleCommandMenuActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bIsTargetEnemySide = false;
}


void ABattleCommandMenuActor::SetCommandSealing(ECOMMAND_SEALING_TYPE eType, bool bSealing) {
}

bool ABattleCommandMenuActor::OnStyleChange_Implementation() {
    return false;
}

bool ABattleCommandMenuActor::OnPotentialityAction_Implementation() {
    return false;
}

bool ABattleCommandMenuActor::OnBreakStyle_Implementation() {
    return false;
}

bool ABattleCommandMenuActor::OnBoostStyle_Implementation() {
    return false;
}

bool ABattleCommandMenuActor::OffPotentialityAction_Implementation() {
    return false;
}

bool ABattleCommandMenuActor::OffBreakStyle_Implementation() {
    return false;
}

bool ABattleCommandMenuActor::OffBoostStyle_Implementation() {
    return false;
}

bool ABattleCommandMenuActor::IsCommandSealing(ECOMMAND_SEALING_TYPE eType) {
    return false;
}


void ABattleCommandMenuActor::GetEventFlag(FName FlagName, bool& Value) {
}

bool ABattleCommandMenuActor::ExecPotentialityAction_Implementation() {
    return false;
}

void ABattleCommandMenuActor::ClearCommandSealing() {
}





