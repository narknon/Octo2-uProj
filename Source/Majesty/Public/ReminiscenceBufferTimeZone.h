#pragma once
#include "CoreMinimal.h"
#include "ELEVEL_DARK_STATE.h"
#include "ETimeZoneType.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferTimeZone.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferTimeZone : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeZoneType Org_TimeZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Org_TimeZonePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELEVEL_DARK_STATE Org_LevelDarkState;
    
public:
    MAJESTY_API FReminiscenceBufferTimeZone();
};

