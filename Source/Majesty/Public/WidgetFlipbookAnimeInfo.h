#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterDir.h"
#include "WidgetFlipbookAnimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FWidgetFlipbookAnimeInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawSize;
    
    MAJESTY_API FWidgetFlipbookAnimeInfo();
};

