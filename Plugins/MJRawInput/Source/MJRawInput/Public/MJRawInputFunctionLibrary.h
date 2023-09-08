#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RegisteredDeviceInfo.h"
#include "MJRawInputFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MJRAWINPUT_API UMJRawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMJRawInputFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
};

