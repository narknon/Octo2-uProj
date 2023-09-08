#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "LevelManagerBase.generated.h"

class ULevelLoader;

UCLASS(Blueprintable)
class ALevelManagerBase : public AAcqManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelLoader*> m_LevelLoader;
    
public:
    ALevelManagerBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void RegisterSubLevelSuffix(FName subLevelSuffix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelShown(FName levelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelLoaded(FName levelName) const;
    
};

