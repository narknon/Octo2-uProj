#pragma once
#include "CoreMinimal.h"
#include "NPCSpawnEventFlag.generated.h"

USTRUCT(BlueprintType)
struct FNPCSpawnEventFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Flag;
    
    MAJESTY_API FNPCSpawnEventFlag();
};

