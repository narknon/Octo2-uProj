#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AcqListViewEntryItemBase.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAcqListViewEntryItemEvent);

UCLASS(Abstract, Blueprintable)
class MAJESTY_API UAcqListViewEntryItemBase : public UObject {
    GENERATED_BODY()
public:
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcqListViewEntryItemEvent OnChangedEntryItem;
    
    UAcqListViewEntryItemBase();
};

