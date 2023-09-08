#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BitFlagDefine.generated.h"

USTRUCT(BlueprintType)
struct FBitFlagDefine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    MAJESTY_API FBitFlagDefine();
};

