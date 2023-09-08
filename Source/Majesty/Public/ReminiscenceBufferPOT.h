#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferPOT.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferPOT : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Org_POT;
    
public:
    MAJESTY_API FReminiscenceBufferPOT();
};

