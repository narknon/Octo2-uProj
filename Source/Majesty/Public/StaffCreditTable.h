#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECreditWidgetType.h"
#include "StaffCreditTable.generated.h"

USTRUCT(BlueprintType)
struct FStaffCreditTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreditWidgetType PartsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Resource;
    
    MAJESTY_API FStaffCreditTable();
};

