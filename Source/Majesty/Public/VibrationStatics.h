#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVibrationPower.h"
#include "VibrationStatics.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UVibrationStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVibrationStatics();
    UFUNCTION(BlueprintCallable)
    static void UnloadVibration();
    
    UFUNCTION(BlueprintCallable)
    static bool StopVibration();
    
    UFUNCTION(BlueprintCallable)
    static bool PlayVibrationByLabel(FName vibLabel, float Power, bool Loop, int32 LoopInterval);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayVibration2ByLabel(FName vibLabel, EVibrationPower Power, bool Loop, int32 LoopInterval);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadVibration(const FString& PathName);
    
};

