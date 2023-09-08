#include "MapShipObjectBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AMapShipObjectBase::AMapShipObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RelativeDir_Go = 0.00f;
    this->RelativeDir_Return = 0.00f;
    this->ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    this->ShipMesh->SetupAttachment(RootComponent);
    this->MyShipFlag = false;
    this->EventFlag_ForceDir_Go = 0;
    this->EventFlag_ForceDir_Return = 0;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void AMapShipObjectBase::ResetRelativeTransform() {
}


void AMapShipObjectBase::ApplyRelativeTransform(bool bGo) {
}

void AMapShipObjectBase::ApplyMyShipCustomizeFirstChoice() {
}

void AMapShipObjectBase::ApplyMyShipCustomize() {
}


