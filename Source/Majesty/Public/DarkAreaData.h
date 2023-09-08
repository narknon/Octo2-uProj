#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHOLY_TORCH_TYPE.h"
#include "DarkAreaData.generated.h"

USTRUCT(BlueprintType)
struct FDarkAreaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHOLY_TORCH_TYPE HolyTorchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TorchLevel;
    
    MAJESTY_API FDarkAreaData();
};

