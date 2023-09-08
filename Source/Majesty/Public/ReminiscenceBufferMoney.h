#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferMoney.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferMoney : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Org_Money;
    
public:
    MAJESTY_API FReminiscenceBufferMoney();
};

