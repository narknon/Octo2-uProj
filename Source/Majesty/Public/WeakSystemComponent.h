#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeakSystemComponent.generated.h"

class ABattleCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UWeakSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
public:
    UWeakSystemComponent();
};

