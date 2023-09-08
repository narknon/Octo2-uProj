#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MacroData.generated.h"

class UMacroData;

UCLASS(Blueprintable)
class MAJESTY_API UMacroData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMacroData*> m_ChildrenNodes;
    
    UMacroData();
};

