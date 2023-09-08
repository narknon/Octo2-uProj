#pragma once
#include "CoreMinimal.h"
#include "RelatedFlagSection.generated.h"

USTRUCT(BlueprintType)
struct FRelatedFlagSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Begin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 End;
    
    MAJESTY_API FRelatedFlagSection();
};

