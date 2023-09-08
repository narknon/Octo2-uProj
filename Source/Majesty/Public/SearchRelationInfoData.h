#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SearchRelationInfoData.generated.h"

USTRUCT(BlueprintType)
struct FSearchRelationInfoData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PersonalInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DiagramList;
    
    MAJESTY_API FSearchRelationInfoData();
};

