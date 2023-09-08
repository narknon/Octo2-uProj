#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibVibration.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibVibration : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibVibration();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDefaultVibrationEnable();
    
};

