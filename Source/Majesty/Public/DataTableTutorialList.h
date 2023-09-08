#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataTableTutorialList.generated.h"

USTRUCT(BlueprintType)
struct FDataTableTutorialList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ListName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FlagPartLabel;
    
    MAJESTY_API FDataTableTutorialList();
};

