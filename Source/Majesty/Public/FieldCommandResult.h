#pragma once
#include "CoreMinimal.h"
#include "FieldCommandStatus.h"
#include "MJFieldCommandType.h"
#include "FieldCommandResult.generated.h"

USTRUCT(BlueprintType)
struct FFieldCommandResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MJFieldCommandType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FieldCommandStatus Status;
    
    MAJESTY_API FFieldCommandResult();
};

