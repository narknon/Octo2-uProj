#pragma once
#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "BattleSequenceEmitter.generated.h"

class ABattleCharacterBase;
class UEnforcerOffsetComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class MAJESTY_API ABattleSequenceEmitter : public AEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_cOriginalEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEmitterTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableAttachTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnforcerOffsetComponent* m_cEnforcerOffsetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cAttachBattleCharacter;
    
public:
    ABattleSequenceEmitter(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UpdateBattleEmitterVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleSystemTemplate(UParticleSystem* cTemplate);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleSystemComponent(UParticleSystemComponent* cComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAttachTarget(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEmitterTrigger(bool bTrigger);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachBattleCharacter(ABattleCharacterBase* cCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseParticleSystemComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAttachTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmitterTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattleCharacterBase* GetAttachBattleCharacter();
    
};

