#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AcqManagerBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AAcqManagerBase : public AActor {
    GENERATED_BODY()
public:
    AAcqManagerBase(const FObjectInitializer& ObjectInitializer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void UpdateManager(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, Category="Octo2")
    void StartManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool ResetManagerFromTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool ResetManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool PrepareManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void PostInitManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    void OnBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Octo2")
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Octo2")
    bool DestroyManager();
    
};

