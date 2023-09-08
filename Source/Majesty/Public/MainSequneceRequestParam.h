#pragma once
#include "CoreMinimal.h"
#include "EREQUEST_TYPE.h"
#include "MainSequenceStateParam.h"
#include "RequestDelegateDelegate.h"
#include "MainSequneceRequestParam.generated.h"

USTRUCT(BlueprintType)
struct FMainSequneceRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestDelegate Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainSequenceStateParam StateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EREQUEST_TYPE Type;
    
    MAJESTY_API FMainSequneceRequestParam();
};

