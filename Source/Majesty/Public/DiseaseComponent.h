#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DiseaseComponent.generated.h"

class ABattleCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDiseaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
public:
    UDiseaseComponent();
};

