#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OptionalParts.h"
#include "ProceduralBuilding.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAJESTY_API AProceduralBuilding : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptionalParts> m_acOptionalPartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> m_acStaticMeshComponentList;
    
    AProceduralBuilding(const FObjectInitializer& ObjectInitializer);
};

