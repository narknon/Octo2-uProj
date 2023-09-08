#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "EPATH_TYPE.h"
#include "PathSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UPathSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPATH_TYPE m_ePathType;
    
    UPathSplineComponent();
    UFUNCTION(BlueprintCallable)
    EPATH_TYPE GetPathType();
    
};

