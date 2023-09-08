#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemCategory.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemCategory : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTexture;
    
    MAJESTY_API FItemCategory();
};

