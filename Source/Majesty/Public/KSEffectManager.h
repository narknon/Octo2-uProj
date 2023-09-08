#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AcqManagerBase.h"
#include "EffectComponentList.h"
#include "KSEffectManager.generated.h"

class AActor;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class MAJESTY_API AKSEffectManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectComponentList> m_EffectComponentList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEffectManagerReady;
    
public:
    AKSEffectManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SuspendEffect(UParticleSystemComponent* EFFECT);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEffect(FName EffectName, AActor* TargetActor, FVector Location, FRotator Rotate, bool ForceSpawn, UParticleSystemComponent*& EFFECT, bool& success, bool& LoopEffect, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectSetupFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectList(TArray<FName> EffectList);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMode(bool isDebug);
    
    UFUNCTION(BlueprintCallable)
    void ResumeEffect(UParticleSystemComponent* EFFECT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectManagerReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDebugAddCnt();
    
    UFUNCTION(BlueprintCallable)
    void DestroyEffect(UParticleSystemComponent* EFFECT);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSpawnEffect(FName EffectLabel, uint8 spawnCnt);
    
    UFUNCTION(BlueprintCallable)
    void CallbackSystemFinished(UParticleSystemComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void CallbackParticleSpawn(FName Name, float Float, FVector VectorA, FVector VectorB);
    
};

