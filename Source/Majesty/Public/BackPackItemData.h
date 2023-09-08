#pragma once
#include "CoreMinimal.h"
#include "BackPackItemData.generated.h"

USTRUCT(BlueprintType)
struct FBackPackItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    MAJESTY_API FBackPackItemData();
};

