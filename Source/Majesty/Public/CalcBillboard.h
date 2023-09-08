#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CalcBillboard.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class MAJESTY_API ACalcBillboard : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_pCineCamComp;
    
public:
    ACalcBillboard(const FObjectInitializer& ObjectInitializer);
};

