#pragma once
#include "CoreMinimal.h"
#include "EquipmentRecommendedCalcData.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentRecommendedCalcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvalautionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipFlag;
    
    MAJESTY_API FEquipmentRecommendedCalcData();
};

