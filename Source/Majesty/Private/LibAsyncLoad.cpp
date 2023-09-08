#include "LibAsyncLoad.h"

ULibAsyncLoad::ULibAsyncLoad() {
}

void ULibAsyncLoad::UnloadAssets(TArray<TSoftObjectPtr<UObject>>& assetsPtrList) {
}

void ULibAsyncLoad::LoadAssetsAsync(UObject* WorldContextObject, TArray<TSoftObjectPtr<UObject>>& assetsPtrList, FCbLoadAsync Callback) {
}

void ULibAsyncLoad::LoadAssetList(TArray<UObject*>& outList, TArray<TSoftObjectPtr<UObject>> assetPtrList) {
}

void ULibAsyncLoad::LoadAssetAsyncByReference(UObject* WorldContextObject, TArray<FSoftObjectPath>& AssetRefList, FCbLoadAsync Callback) {
}

UObject* ULibAsyncLoad::LoadAsset(TSoftObjectPtr<UObject> AssetPtr) {
    return NULL;
}

bool ULibAsyncLoad::InitLoadAsync() {
    return false;
}

int32 ULibAsyncLoad::GetAcyncLoadRequestNum() {
    return 0;
}

void ULibAsyncLoad::DestroyLoadAsync() {
}


