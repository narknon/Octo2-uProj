#pragma once
#include "CoreMinimal.h"
#include "AcqListViewWidgetEventPayload.generated.h"

class UAcqListViewEntryItemBase;

USTRUCT(BlueprintType)
struct FAcqListViewWidgetEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAcqListViewEntryItemBase* SelectedEntryItem;
    
    MAJESTY_API FAcqListViewWidgetEventPayload();
};

