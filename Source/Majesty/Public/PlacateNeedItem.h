#pragma once
#include "CoreMinimal.h"
#include "PlacateNeedItem.generated.h"

USTRUCT(BlueprintType)
struct FPlacateNeedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemNum;
    
    MAJESTY_API FPlacateNeedItem();
};

