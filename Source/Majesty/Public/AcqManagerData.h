#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMANAGER_CREATE_PHASE.h"
#include "AcqManagerData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAcqManagerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> InstancePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMANAGER_CREATE_PHASE CreatePhase;
    
    MAJESTY_API FAcqManagerData();
};

