#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameDataClearnupWorker.generated.h"

class UKSSaveSystem;

UCLASS(Blueprintable)
class MAJESTY_API AGameDataClearnupWorker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKSSaveSystem* m_targetSystemData;
    
public:
    AGameDataClearnupWorker(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartClearnup(UKSSaveSystem* SystemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDeleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsComplete();
    
};

