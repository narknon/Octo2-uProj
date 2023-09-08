#pragma once
#include "CoreMinimal.h"
#include "SaveDataUtilBase.h"
#include "BitFlagSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UBitFlagSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UBitFlagSaveDataUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFixedFollowNPC_Placate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFixedFollowNPC_Lure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFixedFollowNPC_Lead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFixedFollowNPC_Hire();
    
};

