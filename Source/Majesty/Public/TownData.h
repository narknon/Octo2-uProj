#pragma once
#include "CoreMinimal.h"
#include "TownData.generated.h"

USTRUCT(BlueprintType)
struct FTownData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConnectionValue;
    
    MAJESTY_API FTownData();
};

