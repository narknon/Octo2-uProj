#pragma once
#include "CoreMinimal.h"
#include "FlagRandomControlCandidate.generated.h"

USTRUCT(BlueprintType)
struct FFlagRandomControlCandidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    MAJESTY_API FFlagRandomControlCandidate();
};

