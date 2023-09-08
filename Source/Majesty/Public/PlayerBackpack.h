#pragma once
#include "CoreMinimal.h"
#include "SaveBackPackItem.h"
#include "PlayerBackpack.generated.h"

USTRUCT(BlueprintType)
struct FPlayerBackpack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveBackPackItem> ItemList;
    
    MAJESTY_API FPlayerBackpack();
};

