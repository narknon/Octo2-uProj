#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEVENT_FADE_TYPE.h"
#include "FadeDataBase.generated.h"

USTRUCT(BlueprintType)
struct FFadeDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEVENT_FADE_TYPE EventFadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    MAJESTY_API FFadeDataBase();
};

