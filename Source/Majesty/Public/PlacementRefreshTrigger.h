#pragma once
#include "CoreMinimal.h"
#include "ETIMEZONE_TRIGGER_TYPE.h"
#include "MJBoxTrigger.h"
#include "RefereshFlagChangeParam.h"
#include "PlacementRefreshTrigger.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API APlacementRefreshTrigger : public AMJBoxTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strStartEventLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strEndEventLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETIMEZONE_TRIGGER_TYPE m_eTargetTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRefereshFlagChangeParam> m_acRefreshParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strSELabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlacementRefresh;
    
    APlacementRefreshTrigger(const FObjectInitializer& ObjectInitializer);
};

