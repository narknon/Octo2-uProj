#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "TriggerManager.generated.h"

class ACameraLockTrigger;
class AHolyTorchItemTriggerBase;
class AKSTriggerBase;

UCLASS(Blueprintable)
class MAJESTY_API ATriggerManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSTriggerBase*> m_apTriggerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReserveUpdateEnableSwitchIndoorTrigger;
    
public:
    ATriggerManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SortTriggerList(TArray<AKSTriggerBase*>& TriggerList);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUpEncountTriggerByName(FName TriggerName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUpCameraLockTriggerByName(FName TriggerName);
    
    UFUNCTION(BlueprintCallable)
    void SetReserveUpdateEnableSwitchIndoorTrigger(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void SetHolyTorchItemTrigger(AHolyTorchItemTriggerBase* holyTorchItemTrigger);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSwitchIndoorTriggerList(TArray<int32> NewList);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSwitchIndoorTrigger(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnableSwitchIndoorTriggerList(int32 nID);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AHolyTorchItemTriggerBase* GetHolyTorchItemTrigger();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetShowLadderTrigger(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetShowCanoeDockTrigger(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputTriggerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetShowLadderTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetShowCanoeDockTrigger();
    
    UFUNCTION(BlueprintCallable)
    static void ClearHolyTorchItemTrigger();
    
    UFUNCTION(BlueprintCallable)
    void ClearEnableSwitchIndoorTriggerList();
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyCameraLockTrigger(ACameraLockTrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void AddEnableSwitchIndoorTriggerList(int32 nID);
    
};

