#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpecialAbilityInfoData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialAbilityInfoData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Detail;
    
    MAJESTY_API FSpecialAbilityInfoData();
};

