#include "BattleSequencePointLight.h"
#include "Components/PointLightComponent.h"

ABattleSequencePointLight::ABattleSequencePointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightComponent0"));
    this->ShadowResolutionScale = 0.00f;
    this->RootComponent = PointLightComponent;
}

void ABattleSequencePointLight::SetShadowResolutionScale(float fValue) {
}


