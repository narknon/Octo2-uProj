#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MJLODActor.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class MAJESTY_API AMJLODActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDrawDistance;
    
    AMJLODActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetLODSettings(UPrimitiveComponent* PrimComp);
    
};

