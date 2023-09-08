#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FadeInEventDelegate.h"
#include "FadeOutEventDelegate.h"
#include "PlacementFadeComponent.generated.h"

class AActor;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UPlacementFadeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pOwnerAct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadeTimer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_pMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeInEvent OnFadeInEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeOutEvent OnFadeOutEvent;
    
    UPlacementFadeComponent();
    UFUNCTION(BlueprintCallable)
    void StartFadeOutWithFadeTime(float fFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeInWithFadeTime(float fFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeInWait();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void SetUpMaterialInstance(UMaterialInstanceDynamic* cMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetExFactorFadeTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetExFactorFadeRate(float fadeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFactorFadeRate(float fadeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningExFactorFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningCameraFactorFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeOutFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeInWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeInFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedExFactorFadeOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedCameraFactorFadeOut() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    void FadeInImmediately();
    
};

