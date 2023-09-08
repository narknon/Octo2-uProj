#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EControllerInputType.h"
#include "EKeyboardLayoutType.h"
#include "LibKey.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class MAJESTY_API ULibKey : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibKey();
    UFUNCTION(BlueprintCallable)
    static void SaveInputSetting();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAxisMappingByName(const FName InAxisName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActionMappingByName(const FName InActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName KeyToName(const FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInputKeyDownByActionMappings(APlayerController* PlayerController, const FName InActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTypeHashFromFKey(const FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKeyboardLayoutType GetKeyboardLayoutType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetKeyBoardCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetInputKeyDownFKeyConfigFilter(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetInputKeyDownFKey(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetFKeyFromTypeHash(int32 TypeHash);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EControllerInputType GetControllerInputType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EControllerInputType GetControllerInputCurrentType();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogTypeHashFromKey();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogCodesFromKey();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogAxisMappingByName(const FName InAxisName);
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogAllAxisMapping();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogAllActionMapping();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogActionMappingByName(const FName InActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey CheckInputKeyDown(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckInputAnyKeyboardKeyJustPressed(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void AddAxisMapping(const FName InAxisName, const FKey Key, const float Scale);
    
    UFUNCTION(BlueprintCallable)
    static void AddActionMapping(const FName InActionName, const FKey Key);
    
};

