#pragma once
#include "CoreMinimal.h"
#include "SaveEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FSaveEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnalyse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaknessOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPreparation;
    
    MAJESTY_API FSaveEnemyData();
};

