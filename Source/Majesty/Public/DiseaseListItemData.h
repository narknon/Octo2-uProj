#pragma once
#include "CoreMinimal.h"
#include "EDISEASE_CATEGORY.h"
#include "DiseaseListItemData.generated.h"

USTRUCT(BlueprintType)
struct FDiseaseListItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DetailTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDISEASE_CATEGORY DiseaseCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayOrder;
    
    MAJESTY_API FDiseaseListItemData();
};

