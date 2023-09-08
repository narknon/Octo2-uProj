#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KSSimpleLevelLoader.generated.h"

class AKSSimpleLevelLoader;
class ULevelStreamingDynamic;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API AKSSimpleLevelLoader : public AActor {
    GENERATED_BODY()
public:
    AKSSimpleLevelLoader(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StreamingLevelLoaded();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULevelStreamingDynamic* SimpleLoadKSLevel(UObject* WorldContextObject, const FString& levelName, const FVector& Location, const FRotator& Rotation, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetStreaming(ULevelStreamingDynamic* Stream);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSSimpleLevelLoader* GetInstance();
    
};

