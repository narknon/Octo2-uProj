#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralBuildingMeshDataSet.h"
#include "ProceduralBuildingMeshList.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UProceduralBuildingMeshList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProceduralBuildingMeshDataSet m_cBuildingMesh;
    
    UProceduralBuildingMeshList();
};

