#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EUIResCategory.h"
#include "EUIResType.h"
#include "UIResourceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FUIResourceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIResType ResType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIResCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> ResList;
    
    MAJESTY_API FUIResourceData();
};

