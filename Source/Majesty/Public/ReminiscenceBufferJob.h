#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferJob.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferJob : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Org_SecondJobId;
    
public:
    MAJESTY_API FReminiscenceBufferJob();
};

