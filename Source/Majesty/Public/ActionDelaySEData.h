#pragma once
#include "CoreMinimal.h"
#include "ActionDelaySEData.generated.h"

USTRUCT(BlueprintType)
struct FActionDelaySEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaySEID;
    
    MAJESTY_API FActionDelaySEData();
};

