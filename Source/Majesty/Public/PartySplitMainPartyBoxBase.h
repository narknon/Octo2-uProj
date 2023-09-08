#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPlayableCharacterID.h"
#include "PartySplitMainPartyBoxBase.generated.h"

class UPartySplitCharacterPanelBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartySplitMainPartyBoxBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartySplitCharacterPanelBase*> m_CharacterPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayableCharacterID> m_MainMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TitleTextLabel;
    
public:
    UPartySplitMainPartyBoxBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMemberList(const TArray<EPlayableCharacterID>& newMainMember);
    
};

