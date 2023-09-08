#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKSUIKind.h"
#include "EWIDGET_TEMPORARY_HIDE_USER.h"
#include "WidgetTemporaryHiddenData.generated.h"

USTRUCT(BlueprintType)
struct FWidgetTemporaryHiddenData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWIDGET_TEMPORARY_HIDE_USER HiddenUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKSUIKind> UiList;
    
    MAJESTY_API FWidgetTemporaryHiddenData();
};

