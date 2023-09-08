#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CustomMissionFlipbookJobData.h"
#include "CustomMissionFlipbookList.generated.h"

USTRUCT(BlueprintType)
struct FCustomMissionFlipbookList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> PlayerSelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomMissionFlipbookJobData> PlayerJobList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomMissionFlipbookJobData> PlayerJobList_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> PlayerCostumeList;
    
    MAJESTY_API FCustomMissionFlipbookList();
};

