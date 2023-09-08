#include "WorldMapGlobeActorBase.h"

AWorldMapGlobeActorBase::AWorldMapGlobeActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WorldMapDynamicMaterial = NULL;
}






UMaterialInstanceDynamic* AWorldMapGlobeActorBase::GetWorldMapDynamicMaterial() const {
    return NULL;
}


