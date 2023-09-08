#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LoopSeData.generated.h"

class UAtomComponent;

USTRUCT(BlueprintType)
struct FLoopSeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUsed;
    
    MAJESTY_API FLoopSeData();
};

