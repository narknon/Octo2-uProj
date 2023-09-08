#pragma once
#include "CoreMinimal.h"
#include "SoldOutShopItemData.generated.h"

USTRUCT(BlueprintType)
struct FSoldOutShopItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSoldOut;
    
    MAJESTY_API FSoldOutShopItemData();
};

