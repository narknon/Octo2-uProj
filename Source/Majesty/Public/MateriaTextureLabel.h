#pragma once
#include "CoreMinimal.h"
#include "MateriaTextureLabel.generated.h"

USTRUCT(BlueprintType)
struct FMateriaTextureLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Acq_LabelForRuntime_AutoFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Acq_LabelForRuntime;
    
    MAJESTY_API FMateriaTextureLabel();
};

