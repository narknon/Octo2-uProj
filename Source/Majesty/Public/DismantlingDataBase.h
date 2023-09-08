#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AilmentHandler.h"
#include "EDISMANTLING_EFFECT_TYPE.h"
#include "DismantlingDataBase.generated.h"

USTRUCT(BlueprintType)
struct FDismantlingDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAilmentHandler> Ailment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDISMANTLING_EFFECT_TYPE EFFECT;
    
    MAJESTY_API FDismantlingDataBase();
};

