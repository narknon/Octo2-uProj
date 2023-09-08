#pragma once
#include "CoreMinimal.h"
#include "PlantResourceData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FPlantResourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GenerateNum;
    
    MAJESTY_API FPlantResourceData();
};

