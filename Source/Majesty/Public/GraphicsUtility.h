#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GraphicsUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UGraphicsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGraphicsUtility();
    UFUNCTION(BlueprintCallable)
    static void SetVSyncEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewDistanceQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetShaderQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetResolutionQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcessQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxFPS(int32 nMaxFPS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGraphicsPreset(UObject* WorldContextObject, int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoloageQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetEyeAdaptationEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffectQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetAntiAliasingQuality(int32 nQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsEnableGraphicsPreset(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetViewDistanceQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShaderQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetResolutionQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFoliageQuality();
    
};

