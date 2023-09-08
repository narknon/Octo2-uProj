#include "UIResourceManager.h"

AUIResourceManager::AUIResourceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AUIResourceManager::UnloadAssetsByCategory(EUIResCategory Category) {
}

void AUIResourceManager::UnloadAssetList(TArray<FName> LabelList) {
}

void AUIResourceManager::UnloadAsset(FName resLabel) {
}

void AUIResourceManager::SetDataTable(UDataTable* DataTable) {
}

void AUIResourceManager::ReloadResources() {
}

void AUIResourceManager::OnCompletedLoadFirst() {
}

void AUIResourceManager::OnCompletedLoadCommon() {
}

void AUIResourceManager::NotifyUIResourceDB(FName dbName, EDBNoticeType notice) {
}

void AUIResourceManager::LoadFirstAssetsAsync() {
}

void AUIResourceManager::LoadCommonAssetsAsync() {
}

void AUIResourceManager::LoadAssetSyncByLabel(TArray<FName>& assetLabels, FCbLoadAssetHandle cb) {
}

void AUIResourceManager::LoadAssetsAsyncByLabel(TArray<FName>& assetLabels, FCbLoadAssetHandle cb) {
}

void AUIResourceManager::LoadAssetsAsyncByCategory(EUIResCategory Category, FCbLoadAssetHandle cb) {
}

bool AUIResourceManager::IsLoading() const {
    return false;
}

bool AUIResourceManager::IsLoadedFirst() const {
    return false;
}

bool AUIResourceManager::IsLoadedCommon() const {
    return false;
}

UTexture2D* AUIResourceManager::GetTexture2D(FName resLabel) {
    return NULL;
}

UStaticMesh* AUIResourceManager::GetStaticMesh(FName resLabel) {
    return NULL;
}

int32 AUIResourceManager::GetResourceCount() {
    return 0;
}

int32 AUIResourceManager::GetLoadHandleCount() const {
    return 0;
}


