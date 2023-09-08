#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventEffect.generated.h"

class AActor;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FEventEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true), Category="Octo2")
    TWeakObjectPtr<UParticleSystemComponent> EffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TWeakObjectPtr<AActor> Target;
    
    MAJESTY_API FEventEffect();
};

