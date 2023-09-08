#pragma once
#include "CoreMinimal.h"
#include "RandomItemData.generated.h"

USTRUCT(BlueprintType)
struct FRandomItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    MAJESTY_API FRandomItemData();
};

