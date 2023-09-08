#include "CharacterResourceManager.h"

ACharacterResourceManager::ACharacterResourceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ACharacterResourceManager::RequestUnLoadCharactersAsset(TArray<FName> CharaResourceIds) {
}

bool ACharacterResourceManager::RequestLoadSubPartyCharactersAsset() {
    return false;
}

bool ACharacterResourceManager::RequestLoadCharactersAsset(TArray<FName> CharaResourceIds) {
    return false;
}

bool ACharacterResourceManager::RequestLoadCharactersActionAsset(TArray<FSimpleActionLoad>& CharaResourceIds) {
    return false;
}

bool ACharacterResourceManager::RequestLoadCharacterAssetSync_SelectAction(FName CharaResLabel, FCbFinishLoadQueueProcces LoadedCallback, TArray<EKSCharacterAction> ActionLabels) {
    return false;
}

bool ACharacterResourceManager::RequestLoadCharacterAssetSync(FName CharaResLabel, FCbFinishLoadQueueProcces LoadedCallback) {
    return false;
}

bool ACharacterResourceManager::RequestLoadCharacterAsset(FName CharaResLabel, FCbFinishLoadQueueProcces LoadedCallback, TArray<EKSCharacterAction> ActionLabels, bool bBattle) {
    return false;
}

bool ACharacterResourceManager::RefreshLoadCharacters(TArray<FName> NewCharactersResourceId) {
    return false;
}

void ACharacterResourceManager::OnLoadedSubPartyResource(TArray<UObject*>& loadedResource) {
}

void ACharacterResourceManager::OnLoadedMainPartyResource(TArray<UObject*>& loadedResource) {
}

bool ACharacterResourceManager::IsLoading() {
    return false;
}

void ACharacterResourceManager::Debug_SetAlwaysEnableTick(bool Enable) {
}

bool ACharacterResourceManager::Debug_LoadCharacterAssetSync(TArray<FName> CharacterResourceIds) {
    return false;
}

void ACharacterResourceManager::Debug_GetDebugInfo(FString& outDebugInfo) {
}


