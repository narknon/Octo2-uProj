#pragma once
#include "CoreMinimal.h"
#include "SupporterCommandData.generated.h"

USTRUCT(BlueprintType)
struct FSupporterCommandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    MAJESTY_API FSupporterCommandData();
};

