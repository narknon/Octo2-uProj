#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KSCueSheetData.generated.h"

USTRUCT(BlueprintType)
struct FKSCueSheetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetPath;
    
    MAJESTY_API FKSCueSheetData();
};

