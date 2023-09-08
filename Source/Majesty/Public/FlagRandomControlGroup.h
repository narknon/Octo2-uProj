#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFlagRandomControlTrigger.h"
#include "FlagRandomControlCandidate.h"
#include "FlagRandomControlGroup.generated.h"

USTRUCT(BlueprintType)
struct FFlagRandomControlGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlBeginFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlEndFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlagRandomControlTrigger ControlTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlagRandomControlCandidate> ControlCandidate;
    
    MAJESTY_API FFlagRandomControlGroup();
};

