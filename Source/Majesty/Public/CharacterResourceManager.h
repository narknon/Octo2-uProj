#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "CbFinishLoadQueueProccesDelegate.h"
#include "EKSCharacterAction.h"
#include "LoadedObject.h"
#include "SimpleActionLoad.h"
#include "CharacterResourceManager.generated.h"

class ULoadCharaAssetQueue;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API ACharacterResourceManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadCharaAssetQueue*> m_LoadQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLoadedObject> m_LoadedFlipbookResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_SubPartyMemberResource;
    
public:
    ACharacterResourceManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void RequestUnLoadCharactersAsset(TArray<FName> CharaResourceIds);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadSubPartyCharactersAsset();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadCharactersAsset(TArray<FName> CharaResourceIds);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadCharactersActionAsset(UPARAM(Ref) TArray<FSimpleActionLoad>& CharaResourceIds);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadCharacterAssetSync_SelectAction(FName CharaResLabel, FCbFinishLoadQueueProcces LoadedCallback, TArray<EKSCharacterAction> ActionLabels);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadCharacterAssetSync(FName CharaResLabel, FCbFinishLoadQueueProcces LoadedCallback);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadCharacterAsset(FName CharaResLabel, FCbFinishLoadQueueProcces LoadedCallback, TArray<EKSCharacterAction> ActionLabels, bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    bool RefreshLoadCharacters(TArray<FName> NewCharactersResourceId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadedSubPartyResource(TArray<UObject*>& loadedResource);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedMainPartyResource(TArray<UObject*>& loadedResource);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsLoading();
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetAlwaysEnableTick(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_LoadCharacterAssetSync(TArray<FName> CharacterResourceIds);
    
    UFUNCTION(BlueprintCallable)
    void Debug_GetDebugInfo(FString& outDebugInfo);
    
};

