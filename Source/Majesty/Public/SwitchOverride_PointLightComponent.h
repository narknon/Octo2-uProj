#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "SwitchOverride_PointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API USwitchOverride_PointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_OverrideAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_OverrideLightFalloffExponent;
    
public:
    USwitchOverride_PointLightComponent();
};

