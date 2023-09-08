#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHOLY_TORCH_SHINING_STATE.h"
#include "EHOLY_TORCH_TYPE.h"
#include "LibHolyTorch.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibHolyTorch : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibHolyTorch();
    UFUNCTION(BlueprintCallable)
    static void ReburnHolyTorch(EHOLY_TORCH_TYPE torchType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EHOLY_TORCH_SHINING_STATE GetShiningState();
    
    UFUNCTION(BlueprintCallable)
    static void BurnOutHolyTorch(EHOLY_TORCH_TYPE torchType);
    
};

