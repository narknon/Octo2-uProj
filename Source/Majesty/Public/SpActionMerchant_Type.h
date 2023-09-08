#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESPACT_MER_DESC_PARAM_TYPE.h"
#include "SpActionMerchant_Type.generated.h"

USTRUCT(BlueprintType)
struct FSpActionMerchant_Type : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ExecTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESPACT_MER_DESC_PARAM_TYPE> DescTextParam;
    
    MAJESTY_API FSpActionMerchant_Type();
};

