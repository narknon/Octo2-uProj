#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKSSaveSlotName.h"
#include "SaveDataObject.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USaveDataObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSSaveSlotName SlotName;
    
    USaveDataObject();
};

