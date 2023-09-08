#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ECHANGE_TIME_DILATION.h"
#include "EEVENT_MODE.h"
#include "GameSpeedManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API AGameSpeedManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool b_mBattleSpeedChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool b_mEventSpeedChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEVENT_MODE m_eEventMode;
    
public:
    AGameSpeedManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ResetEventSpeedUp(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    EEVENT_MODE GetEventMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECHANGE_TIME_DILATION GetEventDilation();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void EventSpeedUpInit(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void EventSpeedUpFinish(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    void EventSpeedUp(UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEventMode(bool bIsUp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleSpeedUpInit(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BattleSpeedUpFinish(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BattleSpeedUp();
    
};

