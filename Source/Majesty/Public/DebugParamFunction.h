#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDEBUG_FLAG.h"
#include "DebugParamFunction.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UDebugParamFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugParamFunction();
    UFUNCTION(BlueprintCallable)
    static void SetDebugFlag(EDEBUG_FLAG eFlag, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoTalkTimer(float fAutoTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugFlag(EDEBUG_FLAG eFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAutoTalkTimer();
    
};

