#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMYSHIP_CUSTOM_TYPE.h"
#include "MapShipObject2Base.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAJESTY_API AMapShipObject2Base : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_MyShipMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMYSHIP_CUSTOM_TYPE, UMaterialInterface*> m_ColorMaterialTable;
    
public:
    AMapShipObject2Base(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ApplyShipCustomize();
    
};

