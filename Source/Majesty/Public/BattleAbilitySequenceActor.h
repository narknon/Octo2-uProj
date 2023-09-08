#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "BattleAbilitySequenceActor.generated.h"

class ABattleSequenceEmitter;

UCLASS(Blueprintable)
class MAJESTY_API ABattleAbilitySequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleSequenceEmitter*> m_acAbilityHitEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleSequenceEmitter*> m_acSupportRotationEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseAbilitySequenceUpdate;
    
    ABattleAbilitySequenceActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSupportRotationEffectList(UPARAM(Ref) TArray<ABattleSequenceEmitter*>& acEffectList);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilitySequencePause(bool bPauseEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityHitEffectList(UPARAM(Ref) TArray<ABattleSequenceEmitter*>& acEffectList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAbilitySequencePause();
    
};

