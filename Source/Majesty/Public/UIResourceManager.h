#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "CbLoadAssetHandleDelegate.h"
#include "EDBNoticeType.h"
#include "EUIResCategory.h"
#include "UIResourceManager.generated.h"

class UDataTable;
class ULoadAssetHandle;
class UObject;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class MAJESTY_API AUIResourceManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> LoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadAssetHandle*> LoadHandles;
    
public:
    AUIResourceManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UnloadAssetsByCategory(EUIResCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void UnloadAssetList(TArray<FName> LabelList);
    
    UFUNCTION(BlueprintCallable)
    void UnloadAsset(FName resLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void ReloadResources();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompletedLoadFirst();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedLoadCommon();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyUIResourceDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    void LoadFirstAssetsAsync();
    
    UFUNCTION(BlueprintCallable)
    void LoadCommonAssetsAsync();
    
    UFUNCTION(BlueprintCallable)
    void LoadAssetSyncByLabel(UPARAM(Ref) TArray<FName>& assetLabels, FCbLoadAssetHandle cb);
    
    UFUNCTION(BlueprintCallable)
    void LoadAssetsAsyncByLabel(UPARAM(Ref) TArray<FName>& assetLabels, FCbLoadAssetHandle cb);
    
    UFUNCTION(BlueprintCallable)
    void LoadAssetsAsyncByCategory(EUIResCategory Category, FCbLoadAssetHandle cb);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedFirst() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedCommon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTexture2D(FName resLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMesh* GetStaticMesh(FName resLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadHandleCount() const;
    
};

