#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "MJFieldCommandType.h"
#include "FieldCommandFlowBase.generated.h"

class AKSCharacterBase;

UCLASS(Blueprintable)
class MAJESTY_API AFieldCommandFlowBase : public AActor, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MJFieldCommandType m_FieldCommandType;
    
public:
    AFieldCommandFlowBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void PrintToVLog(const FString& str);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsImpossibleSucceed(AKSCharacterBase* targetNpc);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<FString, FString> GrabStateSnapshot_Internal() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString GetRunningStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetIsGameOverWhenLoose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    MJFieldCommandType GetFieldCommandType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AKSCharacterBase* GetFieldCommandTargetNpc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AKSCharacterBase* GetFieldCommandOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Debug_ExecAutoPlayProcess();
    
    
    // Fix for true pure virtual functions not being implemented
};

