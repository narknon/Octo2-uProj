#pragma once
#include "CoreMinimal.h"
#include "GiftItemDataSet.generated.h"

USTRUCT(BlueprintType)
struct FGiftItemDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemNum;
    
    MAJESTY_API FGiftItemDataSet();
};

