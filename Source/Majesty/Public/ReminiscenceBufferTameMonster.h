#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "TameMonsterData.h"
#include "ReminiscenceBufferTameMonster.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferTameMonster : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTameMonsterData> Org_TameMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTameMonsterData> Org_LegendTameMonster;
    
public:
    MAJESTY_API FReminiscenceBufferTameMonster();
};

