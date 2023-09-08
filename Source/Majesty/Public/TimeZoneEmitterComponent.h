#pragma once
#include "CoreMinimal.h"
#include "TimeZoneComponentBase.h"
#include "TimeZoneEmitterComponent.generated.h"

class ATimeZoneEmitterParam;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UTimeZoneEmitterComponent : public UTimeZoneComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_lstParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATimeZoneEmitterParam* m_pcParam;
    
    UTimeZoneEmitterComponent();
};

