#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlantResourceData.h"
#include "ProceduralPlant.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAJESTY_API AProceduralPlant : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> m_acStaticMeshComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlantResourceData> m_ResourceData;
    
    AProceduralPlant(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ReleaseBase();
    
};

