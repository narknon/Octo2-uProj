#pragma once
#include "CoreMinimal.h"
#include "TimeZoneParamBase.h"
#include "TimeZoneSoundParam.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ATimeZoneSoundParam : public ATimeZoneParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool m_bEnable;
    
    ATimeZoneSoundParam(const FObjectInitializer& ObjectInitializer);
};

