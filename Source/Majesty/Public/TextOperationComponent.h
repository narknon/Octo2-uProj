#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TextOperationComponent.generated.h"

class UMacroData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UTextOperationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacroData* m_MacroData;
    
public:
    UTextOperationComponent();
    UFUNCTION(BlueprintCallable)
    FString ExecMacroOperation(const FString& InputText);
    
};

