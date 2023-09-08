#pragma once
#include "CoreMinimal.h"
#include "EncountFlagStartEndData.generated.h"

USTRUCT(BlueprintType)
struct FEncountFlagStartEndData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EncountTriggerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StartFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EndFlag;
    
    MAJESTY_API FEncountFlagStartEndData();
};

