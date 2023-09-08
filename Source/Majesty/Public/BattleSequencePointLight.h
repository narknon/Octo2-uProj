#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleSequencePointLight.generated.h"

class UPointLightComponent;

UCLASS(Blueprintable)
class MAJESTY_API ABattleSequencePointLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowResolutionScale;
    
    ABattleSequencePointLight(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetShadowResolutionScale(float fValue);
    
};

