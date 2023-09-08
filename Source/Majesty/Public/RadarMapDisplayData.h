#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEventKind.h"
#include "EOBJ_TYPE.h"
#include "ETIMEZONE_TRIGGER_TYPE.h"
#include "RadarMapDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FRadarMapDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlacementLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOBJ_TYPE ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETIMEZONE_TRIGGER_TYPE TimezoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventKind EventKind;
    
    MAJESTY_API FRadarMapDisplayData();
};

