#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ActivityManager.generated.h"

class UKSSaveSystem;

UCLASS(Blueprintable)
class AActivityManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKSSaveSystem* m_CacheSaveDataForMerge;
    
public:
    AActivityManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void SetSystemSaveDataForMerge(UKSSaveSystem* saveDataOther);
    
    UFUNCTION(BlueprintCallable)
    static void MergeActivitySaveDataOnPostLoadSlot();
    
    UFUNCTION(BlueprintCallable)
    static void MergeActivitySaveData(const UKSSaveSystem* saveDataOther);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSystemSaveDataForMerge();
    
};

