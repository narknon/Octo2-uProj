#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventionMaterial.h"
#include "InventionData.generated.h"

USTRUCT(BlueprintType)
struct FInventionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InventionItemlabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LearnAbilitylabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventionMaterial> Materials;
    
    MAJESTY_API FInventionData();
};

