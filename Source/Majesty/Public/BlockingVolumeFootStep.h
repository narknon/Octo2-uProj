#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Chaos/ChaosEngineInterface.h"
#include "BlockingVolumeFootStep.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ABlockingVolumeFootStep : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> m_eFootStepType;
    
public:
    ABlockingVolumeFootStep(const FObjectInitializer& ObjectInitializer);
};

