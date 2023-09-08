#pragma once
#include "CoreMinimal.h"
#include "ETimeZoneType.h"
#include "TimeZoneSaveData.generated.h"

USTRUCT(BlueprintType)
struct FTimeZoneSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeZoneType m_eTimeZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nTimeZoneChangeValue;
    
    MAJESTY_API FTimeZoneSaveData();
};

