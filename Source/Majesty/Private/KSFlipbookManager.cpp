#include "KSFlipbookManager.h"

AKSFlipbookManager::AKSFlipbookManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMaterial = NULL;
}

bool AKSFlipbookManager::GetSpriteDataFromActionLabel(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, FKSSpriteData& Data) {
    return false;
}




void AKSFlipbookManager::GetFlipbookTexAssetPtrs(FName FlipbookName, bool resetArray, TArray<TSoftObjectPtr<UTexture2D>>& outTexAssetPtrs) {
}


UMaterialInterface* AKSFlipbookManager::GetDefaultMaterial() const {
    return NULL;
}

bool AKSFlipbookManager::GetCharacterTextureAndAddtionalFirstFrame_SoftObjectPtr(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, TArray<TSoftObjectPtr<UTexture2D>>& outArray) {
    return false;
}


void AKSFlipbookManager::GetCharacterMaterialAssetPtrs(FName CharacterName, TArray<TSoftObjectPtr<UMaterialInterface>>& outMatAssetPtrs) {
}


bool AKSFlipbookManager::GetCharacterFlipbookName(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, FName& FlipbookName) {
    return false;
}


bool AKSFlipbookManager::GetAllSpriteDataFromActionLabel(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, TMap<FName, FMJSpriteSocketData>& DataList, bool bIsReverseSocket) {
    return false;
}

UKSPaperFlipbook* AKSFlipbookManager::CreateFlipbook(UObject* Outer) {
    return NULL;
}


bool AKSFlipbookManager::ChangeMissionFlipbook(FName FlipbookName, UKSPaperFlipbook* PaperFlipbook, UMaterialInstanceDynamic* SetMaterial) {
    return false;
}

bool AKSFlipbookManager::ChangeFlipbook(FName FlipbookName, UKSPaperFlipbook* PaperFlipbook, UMaterialInstanceDynamic* SetMaterial, bool bReverseSprite) {
    return false;
}


