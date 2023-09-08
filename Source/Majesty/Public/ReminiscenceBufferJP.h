#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferJP.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferJP : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Org_JP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Start_JP;
    
public:
    MAJESTY_API FReminiscenceBufferJP();
};

