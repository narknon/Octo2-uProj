#pragma once
#include "CoreMinimal.h"
#include "MainSequenceStateParam.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMainSequenceStateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param0;
    
    MAJESTY_API FMainSequenceStateParam();
};

