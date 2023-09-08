#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NPCCheckData.generated.h"

USTRUCT(BlueprintType)
struct FNPCCheckData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogicalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FlagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> FlagEnableList;
    
    MAJESTY_API FNPCCheckData();
};

