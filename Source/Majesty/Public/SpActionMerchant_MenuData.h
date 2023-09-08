#pragma once
#include "CoreMinimal.h"
#include "ESPACT_MERCHANT_TYPE.h"
#include "SpActionMerchant_MenuData.generated.h"

USTRUCT(BlueprintType)
struct FSpActionMerchant_MenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SPActionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SPActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESPACT_MERCHANT_TYPE EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectOverview;
    
    MAJESTY_API FSpActionMerchant_MenuData();
};

