#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETUTORIAL_TYPE.h"
#include "TutorialFlagPart.generated.h"

USTRUCT(BlueprintType)
struct FTutorialFlagPart : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETUTORIAL_TYPE TutorialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialListFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialOpenedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PageDataLabel;
    
    MAJESTY_API FTutorialFlagPart();
};

