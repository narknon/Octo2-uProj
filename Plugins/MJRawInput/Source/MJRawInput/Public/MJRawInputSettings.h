#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MJRawInputDeviceConfiguration.h"
#include "MJRawInputSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Input)
class MJRAWINPUT_API UMJRawInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMJRawInputDeviceConfiguration> DeviceConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterDefaultDevice;
    
    UMJRawInputSettings();
};

