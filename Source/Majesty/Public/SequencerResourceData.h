#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SequencerResourceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSequencerResourceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ResourcePath;
    
    MAJESTY_API FSequencerResourceData();
};

