#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterFormData.h"
#include "EKSCharacterAction.h"
#include "CharacterFormDataSet.generated.h"

USTRUCT(BlueprintType)
struct FCharacterFormDataSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaResourceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterAction CharaActionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterFormData> FormData;
    
    MAJESTY_API FCharacterFormDataSet();
};

