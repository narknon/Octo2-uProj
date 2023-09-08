#pragma once
#include "CoreMinimal.h"
#include "InventionMaterial.generated.h"

USTRUCT(BlueprintType)
struct FInventionMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCount;
    
    MAJESTY_API FInventionMaterial();
};

