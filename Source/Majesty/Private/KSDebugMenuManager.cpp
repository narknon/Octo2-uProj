#include "KSDebugMenuManager.h"

AKSDebugMenuManager::AKSDebugMenuManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugMenuState = EDEBUGMENU_STATE::eNONE;
    this->CurrentWidget = NULL;
}





AKSDebugMenuManager* AKSDebugMenuManager::GetInstance() {
    return NULL;
}



