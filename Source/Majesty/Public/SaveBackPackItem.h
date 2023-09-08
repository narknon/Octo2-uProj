#pragma once
#include "CoreMinimal.h"
#include "SaveBackPackItem.generated.h"

USTRUCT(BlueprintType)
struct FSaveBackPackItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    MAJESTY_API FSaveBackPackItem();
};

