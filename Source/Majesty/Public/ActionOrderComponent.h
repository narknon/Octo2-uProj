#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionOrderComponent.generated.h"

class ABattleCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UActionOrderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
public:
    UActionOrderComponent();
};

