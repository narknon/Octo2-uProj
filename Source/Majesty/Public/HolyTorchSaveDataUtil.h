#pragma once
#include "CoreMinimal.h"
#include "EHOLY_TORCH_STATE.h"
#include "EHOLY_TORCH_TYPE.h"
#include "SaveDataUtilBase.h"
#include "HolyTorchSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UHolyTorchSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UHolyTorchSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetHolyTorchState(EHOLY_TORCH_TYPE torchType, EHOLY_TORCH_STATE torchState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllHolyTorchReBurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EHOLY_TORCH_STATE GetHolyTorchState(EHOLY_TORCH_TYPE torchType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBurnOutNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBurnNum();
    
};

