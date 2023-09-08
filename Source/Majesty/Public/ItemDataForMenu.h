#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataForMenu.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemDataForMenu : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconLabel;
    
    MAJESTY_API FItemDataForMenu();
};

