#pragma once
#include "CoreMinimal.h"
#include "MJGameTextMap.generated.h"

USTRUCT(BlueprintType)
struct FMJGameTextMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FName> TextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReady;
    
    MAJESTY_API FMJGameTextMap();
};

