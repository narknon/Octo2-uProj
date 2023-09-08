#pragma once
#include "CoreMinimal.h"
#include "EventPlayData.generated.h"

class AKSCharacterBase;

USTRUCT(BlueprintType)
struct FEventPlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    AKSCharacterBase* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool TheaterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FName OverrideMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool ForcePlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    bool PartyChat;
    
    MAJESTY_API FEventPlayData();
};

