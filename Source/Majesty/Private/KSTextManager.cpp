#include "KSTextManager.h"

AKSTextManager::AKSTextManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsLoaded = false;
    this->IsLoadedVoice = false;
    this->TextOperationComponent = NULL;
}

void AKSTextManager::SetLanguageConditonParam_Talk(FName TargetLabel) {
}

void AKSTextManager::SetLanguageConditonParam_Solo(bool IsSolo) {
}

void AKSTextManager::SetConditonParam_Item(FName ItemLabel, int32 Count) {
}



FString AKSTextManager::ExecMacroOperation(const FString& InputStr) {
    return TEXT("");
}


