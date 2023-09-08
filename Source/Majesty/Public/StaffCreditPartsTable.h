#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECreditAlignment.h"
#include "ECreditFontColor.h"
#include "ECreditFontSize.h"
#include "ECreditFontType.h"
#include "StaffCreditPartsTable.generated.h"

USTRUCT(BlueprintType)
struct FStaffCreditPartsTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditAlignment Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditFontColor FontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditFontType FontType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditFontSize FontSize;
    
    MAJESTY_API FStaffCreditPartsTable();
};

