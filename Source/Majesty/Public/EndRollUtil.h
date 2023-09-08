#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EndRollUtil.generated.h"

class AEndRollFlowManager;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UEndRollUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEndRollUtil();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopEndRoll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartEndroll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetupEndRoll();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetEndRoll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsReadyEndRoll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingEndRoll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetEndRollManager(const UObject* WorldContextObject, AEndRollFlowManager*& Out);
    
};

