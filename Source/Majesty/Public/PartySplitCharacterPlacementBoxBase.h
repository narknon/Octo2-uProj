#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPlayableCharacterID.h"
#include "PartySplitCharacterPlacementBoxBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartySplitCharacterPlacementBoxBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID m_PlacedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TitleTextLabel;
    
public:
    UPartySplitCharacterPlacementBoxBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlacedCharacter(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutFocus(bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InFocus(bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayableCharacterID GetPlacedCharacter();
    
};

