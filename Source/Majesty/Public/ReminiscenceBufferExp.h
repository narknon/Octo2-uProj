#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferExp.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferExp : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Org_Exp;
    
public:
    MAJESTY_API FReminiscenceBufferExp();
};

