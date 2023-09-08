#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "TimeManager.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ATimeManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nGamePlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGamePlayCountPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMillisecond;
    
public:
    ATimeManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartGamePlayTime(float fStartTime);
    
    UFUNCTION(BlueprintCallable)
    void PauseGamePlayTime(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamePlayTime();
    
};

