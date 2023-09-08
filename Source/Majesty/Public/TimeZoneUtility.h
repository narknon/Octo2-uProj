#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ETimeZoneType.h"
#include "TimeZoneUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UTimeZoneUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeZoneUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNightTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETimeZoneType GetTimeZoneTypeBeforeLostWay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETimeZoneType GetCurrentTimeZoneType();
    
};

