#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MJFieldCommandType.h"
#include "FieldCommandInfo.generated.h"

USTRUCT(BlueprintType)
struct FFieldCommandInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MJFieldCommandType DayTimeFC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayTimeFCImpossibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MJFieldCommandType NightFC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NightFCImpossibleFlag;
    
    MAJESTY_API FFieldCommandInfo();
};

