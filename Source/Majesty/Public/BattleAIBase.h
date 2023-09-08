#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleAICommandData.h"
#include "EBATTLE_AI_STATE.h"
#include "EBATTLE_AI_SUB_STATE.h"
#include "EBATTLE_TARGET_TYPE.h"
#include "BattleAIBase.generated.h"

class ABattleCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UBattleAIBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_AI_STATE m_ePreState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_AI_STATE m_eCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FString> m_astrStateNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBATTLE_AI_STATE, EBATTLE_AI_SUB_STATE> m_anAISubState;
    
public:
    UBattleAIBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateThinkForConfusion(FName& CommandName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateThink(FName& CommandName);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerCharacter(ABattleCharacterBase* cOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBattleCommandTable(const TArray<FBattleAICommandData>& acCommandTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectBattleTarget(const TArray<ABattleCharacterBase*>& PlayerList, const TArray<ABattleCharacterBase*>& EnemyList, EBATTLE_TARGET_TYPE TargetType, TArray<ABattleCharacterBase*>& TargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreUpdateThink();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreTurnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreOrderStart(ABattleCharacterBase* ActionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PostUpdateThink();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PostSignOfBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PostOrderEnd(ABattleCharacterBase* ActionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PostBattleEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnRevive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCounterAbility(FName& CommandName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleAISubState(EBATTLE_AI_SUB_STATE& CurrentSubState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBattleAIStateName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleAIState(EBATTLE_AI_STATE& CurrentState, EBATTLE_AI_STATE& PrevState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleAISubState(EBATTLE_AI_SUB_STATE NewSubState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleAIState(EBATTLE_AI_STATE NewState, bool ResetSubState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AIInitialize();
    
};

