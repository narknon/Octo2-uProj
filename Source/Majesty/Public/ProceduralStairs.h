#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralStairs.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAJESTY_API AProceduralStairs : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> m_StaticMeshList;
    
    AProceduralStairs(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ReleaseBase();
    
};

