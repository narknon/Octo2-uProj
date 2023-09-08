#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TimeZoneParamBase.h"
#include "TimeZoneLightParam.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ATimeZoneLightParam : public ATimeZoneParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_fIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor m_cColor;
    
    ATimeZoneLightParam(const FObjectInitializer& ObjectInitializer);
};

