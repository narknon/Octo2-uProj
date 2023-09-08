#include "MJBoxTrigger.h"
#include "Components/BoxComponent.h"

AMJBoxTrigger::AMJBoxTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("CollisionComp"))) {
    this->RootComponent = GetCollisionComponent();
}


