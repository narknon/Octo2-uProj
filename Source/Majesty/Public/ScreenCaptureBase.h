#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "ScreenCaptureBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UScreenCaptureBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UScreenCaptureBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenUIWithTexture(FName ResourceLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenUI(bool PlayNoise);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool NoiseFinish();
    
    UFUNCTION(BlueprintCallable)
    void CloseUI();
    
};

