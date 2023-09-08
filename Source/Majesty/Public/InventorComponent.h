#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventorItemData.h"
#include "InventorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UInventorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInventorItemData> m_acInventorItemData;
    
public:
    UInventorComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UseInventorItem(FName strInventorItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateCreateInventorItem(int32 nTurnCount, bool bRandom, bool bUseText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartCreateInventorItem(FName strInventorItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartCreateAllInventorItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInventorItemReady(FName strLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInventorItemExecCreate(FName strLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInventorItemAllReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsExecutableInventorItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitInventorItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetInventorItemCreateTurn(FName strLabel, int32& nRestTurn, int32& nCreateTurnMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddInventorItemData(FName strInventorItemLabel, int32 nInventorTurn);
    
};

