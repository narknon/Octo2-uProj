#pragma once
#include "CoreMinimal.h"
#include "SaveDataUtilBase.h"
#include "SubTitleSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USubTitleSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    USubTitleSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetViewFlag(int32 SubTitleId, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartIndex(int32 SubTitleId, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetViewFlag(int32 SubTitleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStartIndex(int32 SubTitleId);
    
};

