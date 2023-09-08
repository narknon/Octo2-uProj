#pragma once
#include "CoreMinimal.h"
#include "EMAINSEQ_TYPE.h"
#include "TransitionData.generated.h"

USTRUCT(BlueprintType)
struct FTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMAINSEQ_TYPE> NextFlowData;
    
    MAJESTY_API FTransitionData();
};

