#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CbLoadAsyncDelegate.h"
#include "LibAsyncLoad.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API ULibAsyncLoad : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibAsyncLoad();
    UFUNCTION(BlueprintCallable)
    static void UnloadAssets(UPARAM(Ref) TArray<TSoftObjectPtr<UObject>>& assetsPtrList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadAssetsAsync(UObject* WorldContextObject, UPARAM(Ref) TArray<TSoftObjectPtr<UObject>>& assetsPtrList, FCbLoadAsync Callback);
    
    UFUNCTION(BlueprintCallable)
    static void LoadAssetList(TArray<UObject*>& outList, TArray<TSoftObjectPtr<UObject>> assetPtrList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadAssetAsyncByReference(UObject* WorldContextObject, UPARAM(Ref) TArray<FSoftObjectPath>& AssetRefList, FCbLoadAsync Callback);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadAsset(TSoftObjectPtr<UObject> AssetPtr);
    
    UFUNCTION(BlueprintCallable)
    static bool InitLoadAsync();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAcyncLoadRequestNum();
    
    UFUNCTION(BlueprintCallable)
    static void DestroyLoadAsync();
    
};

