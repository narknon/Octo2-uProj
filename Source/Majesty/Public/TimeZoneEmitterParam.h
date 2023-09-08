#pragma once
#include "CoreMinimal.h"
#include "TimeZoneParamBase.h"
#include "TimeZoneEmitterParam.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ATimeZoneEmitterParam : public ATimeZoneParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool m_bActive;
    
    ATimeZoneEmitterParam(const FObjectInitializer& ObjectInitializer);
};

