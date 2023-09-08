#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "LibDisplay.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API ULibDisplay : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibDisplay();
    UFUNCTION(BlueprintCallable)
    static bool SetWindowResolution(TEnumAsByte<EWindowMode::Type> InFullScreenMode, FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFPS(float Fps);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshDisplayInformation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector2D GetWindowLetterBoxSize(UObject* WorldContextObject, bool IsRemoveDpiScale);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindowedResolutions(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector2D GetWidgetSpaceSize(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetFullscreenResolutions(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EWindowMode::Type> GetCurrentWindowMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetCurrentScreenResolutionFromConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetCurrentScreenResolutionEx();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetCurrentScreenResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentFPS();
    
    UFUNCTION(BlueprintCallable)
    static bool DisplayLog();
    
};

