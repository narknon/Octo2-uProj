#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferLearnAbility.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferLearnAbility : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Org_LearnAbility;
    
public:
    MAJESTY_API FReminiscenceBufferLearnAbility();
};

