#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIButtonData.generated.h"

class UButton;
class UImage;

USTRUCT(BlueprintType)
struct FUIButtonData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    MAJESTY_API FUIButtonData();
};

