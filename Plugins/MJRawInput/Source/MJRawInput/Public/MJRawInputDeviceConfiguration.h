#pragma once
#include "CoreMinimal.h"
#include "MJRawInputDeviceAxisProperties.h"
#include "MJRawInputDeviceButtonProperties.h"
#include "MJRawInputDeviceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MJRAWINPUT_API FMJRawInputDeviceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VendorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMJRawInputDeviceAxisProperties> AxisProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMJRawInputDeviceButtonProperties> ButtonProperties;
    
    FMJRawInputDeviceConfiguration();
};

