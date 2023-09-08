#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterDir.h"
#include "FlipbookPlayParam.generated.h"

USTRUCT(BlueprintType)
struct FFlipbookPlayParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterAction ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoop;
    
    MAJESTY_API FFlipbookPlayParam();
};

