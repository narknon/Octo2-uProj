#pragma once
#include "CoreMinimal.h"
#include "SaveDataSubTitle.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataSubTitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubTitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ViewFlag;
    
    MAJESTY_API FSaveDataSubTitle();
};

