#include "MJSphereTrigger.h"
#include "Components/SphereComponent.h"

AMJSphereTrigger::AMJSphereTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("CollisionComp"))) {
    this->RootComponent = GetCollisionComponent();
}


