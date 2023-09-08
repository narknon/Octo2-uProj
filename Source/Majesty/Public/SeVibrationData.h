#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SeVibrationData.generated.h"

USTRUCT(BlueprintType)
struct FSeVibrationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    MAJESTY_API FSeVibrationData();
};

