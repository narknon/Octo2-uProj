#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayableCharacterID.h"
#include "PartyCharaPropertyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UPartyCharaPropertyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID m_PlayerCharacterID;
    
public:
    UPartyCharaPropertyComponent();
    UFUNCTION(BlueprintCallable)
    EPlayableCharacterID SetPlayerID(EPlayableCharacterID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayableCharacterID GetPlayerID();
    
};

