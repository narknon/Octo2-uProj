#pragma once
#include "CoreMinimal.h"
#include "AtomSound.h"
#include "ETimeZoneType.h"
#include "EnvSound.generated.h"

class UAtomComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class MAJESTY_API AEnvSound : public AAtomSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FirstWaitTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_NightEnvSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_DayTimeEnvSound;
    
public:
    AEnvSound(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UpdateFade(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopEnvSound(int32 nFadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayEnvSound(ETimeZoneType ETimeZoneType, int32 nFadeInTime);
    
    UFUNCTION(BlueprintCallable)
    void PauseSE(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsFade();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    UAtomComponent* GetAtomComponent();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeEnvSound(ETimeZoneType eTimeZone);
    
    UFUNCTION(BlueprintCallable)
    void BattleChange_SavePlayingState();
    
    UFUNCTION(BlueprintCallable)
    void BattleChange_RestorePlayingState();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyOptionVolume();
    
};

