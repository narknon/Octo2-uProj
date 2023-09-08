#pragma once
#include "CoreMinimal.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AcqManagerBase.h"
#include "FieldCommandResult.h"
#include "FieldCommandStatus.h"
#include "MJFieldCommandType.h"
#include "PurchaseItemInfoData.h"
#include "FieldCommandManager.generated.h"

class AActor;
class AFieldCommandFlowBase;
class AFieldCommandManager;
class AKSCharacterBase;

UCLASS(Blueprintable)
class MAJESTY_API AFieldCommandManager : public AAcqManagerBase, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<MJFieldCommandType, FFieldCommandResult> LastFieldCommandResults;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFieldCommandEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestBadConnectionInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InterruptPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInFcOpeningPeriod;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Debug_WaitReason;
    
    AFieldCommandManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartSwoonTalk(AKSCharacterBase* targetNpc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartFieldCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartBadConnectionTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupFlowBase(AKSCharacterBase* TargetChara, MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupCommand(const TArray<MJFieldCommandType>& FieldCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetStartParam(AKSCharacterBase* TargetChara, MJFieldCommandType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLastFieldCommandResults(MJFieldCommandType FCType, FieldCommandStatus FcStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsInterruptPlay(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsIgnoreSwoonProcessFromEventCommand(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsIgnoreFollowProcessFromEventCommand(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RecoveryConnectionValue(int32 TownID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrintToVLog(const FString& str);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingBadConnectionFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsImpossibleSucceed(MJFieldCommandType FCType, AKSCharacterBase* targetNpc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCompleteFieldCommand(MJFieldCommandType FCType, AKSCharacterBase* targetNpc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsBattleType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsAvailableFieldCommand(MJFieldCommandType FCType, AKSCharacterBase* targetNpc);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<FString, FString> GrabStateSnapshot_Internal() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AKSCharacterBase* GetTargetNpc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FPurchaseItemInfoData> GetPurchaseItemList(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AFieldCommandFlowBase* GetPlayingCommand();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<MJFieldCommandType, FFieldCommandResult> GetLastFieldCommandResults();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInterruptPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetIsGameOverWhenLoose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetIsFieldCommandEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFieldCommandManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AFieldCommandFlowBase* GetFlowBase(MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FinishFieldCommand();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Debug_SetWaitReason(const FText reason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ConnectionBadNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanExecFieldCommand(FName NPCLabel, MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddEventBalloon(FName RowName, AActor* Target);
    
    
    // Fix for true pure virtual functions not being implemented
};

