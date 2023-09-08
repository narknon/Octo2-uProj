#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "MJRawInputDeviceButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct MJRAWINPUT_API FMJRawInputDeviceButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    FMJRawInputDeviceButtonProperties();
};

