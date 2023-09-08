#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LEVEL_AREA_TYPE.h"
#include "LevelAreaCollisionBase.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ALevelAreaCollisionBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    LEVEL_AREA_TYPE AreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndEventFlag;
    
public:
    ALevelAreaCollisionBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollisionEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UBoxComponent* GetCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    LEVEL_AREA_TYPE GetAreaType() const;
    
};

