#pragma once
#include "CoreMinimal.h"
#include "CharacterFlipbookComponent.h"
#include "HunterPartnerFbComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UHunterPartnerFbComponent : public UCharacterFlipbookComponent {
    GENERATED_BODY()
public:
    UHunterPartnerFbComponent();
    UFUNCTION(BlueprintCallable)
    void SetPartnerVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    bool IsPartnerVisibile();
    
};

