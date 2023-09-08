#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelStreamingDynamic.h"
#include "LevelStreamingCustom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULevelStreamingCustom : public ULevelStreamingDynamic {
    GENERATED_BODY()
public:
    ULevelStreamingCustom();
private:
    UFUNCTION(BlueprintCallable)
    void OnUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnHidden();
    
};

