#pragma once
#include "CoreMinimal.h"
#include "EACTION_ORDER_TYPE.h"
#include "RequestActionOrderData.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FRequestActionOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EACTION_ORDER_TYPE m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseIcon;
    
    FRequestActionOrderData();
};

