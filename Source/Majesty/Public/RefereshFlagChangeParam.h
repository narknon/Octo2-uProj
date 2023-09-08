#pragma once
#include "CoreMinimal.h"
#include "RefereshFlagChangeParam.generated.h"

USTRUCT(BlueprintType)
struct FRefereshFlagChangeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlagLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagStaus;
    
    MAJESTY_API FRefereshFlagChangeParam();
};

