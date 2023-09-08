#pragma once
#include "CoreMinimal.h"
#include "TameMonsterData.generated.h"

USTRUCT(BlueprintType)
struct FTameMonsterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Used;
    
    MAJESTY_API FTameMonsterData();
};

