#pragma once
#include "CoreMinimal.h"
#include "MenuData.generated.h"

USTRUCT(BlueprintType)
struct FMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionRecord_MainStartSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionRecord_ExtraStartSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionRecord_SubStartSelect;
    
    MAJESTY_API FMenuData();
};

