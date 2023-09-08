#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ForceFeedbackEffectVibrationData.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FForceFeedbackEffectVibrationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* VibrationAsset;
    
    MAJESTY_API FForceFeedbackEffectVibrationData();
};

