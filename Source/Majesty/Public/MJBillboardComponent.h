#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MJBillboardComponent.generated.h"

class UCameraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UMJBillboardComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_pCineCamComp;
    
public:
    UMJBillboardComponent();
};

