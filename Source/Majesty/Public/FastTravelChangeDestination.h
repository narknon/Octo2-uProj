#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FastTravelChangeDestination.generated.h"

USTRUCT(BlueprintType)
struct FFastTravelChangeDestination : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndEventFlag;
    
    MAJESTY_API FFastTravelChangeDestination();
};

