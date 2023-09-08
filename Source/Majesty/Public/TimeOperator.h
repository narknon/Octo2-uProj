#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELEVEL_DARK_STATE.h"
#include "ETimeZoneType.h"
#include "TimeOperator.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable)
class MAJESTY_API UTimeOperator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeZoneType m_eTimeZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeZoneType m_eNextTimeZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELEVEL_DARK_STATE m_eDarkAreaState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeZoneType m_eTempTimeZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_pSequencer;
    
    UTimeOperator();
    UFUNCTION(BlueprintCallable)
    void SetTimeZoneChangeValueMax(const int32 nNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeZoneChangeValue(const int32 nNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetManualAccelerationTime(const float fNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoAccelerationTime(const float fNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETimeZoneType IsNextTimeZoneCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeZoneChangeValueMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeZoneChangeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReserveAutoChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetManualAccelerationTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELEVEL_DARK_STATE GetDarkAreaState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSeaquencerNormalizedTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoAccelerationTime();
    
};

