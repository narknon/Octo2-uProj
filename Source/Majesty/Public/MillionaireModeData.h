#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MillionaireModeData.generated.h"

USTRUCT(BlueprintType)
struct FMillionaireModeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveEventFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Price;
    
    MAJESTY_API FMillionaireModeData();
};

