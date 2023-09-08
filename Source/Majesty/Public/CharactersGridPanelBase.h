#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "CharacterGridPanelParam.h"
#include "CharactersGridPanelCharacterSelectNoticeDelegate.h"
#include "CharactersGridPanelNoticeDelegate.h"
#include "ECHARACTER_GRID_PANEL_WIDGET_STATE.h"
#include "EPlayableCharacterID.h"
#include "CharactersGridPanelBase.generated.h"

class UPartyCharPanelSelectBackBase;
class UPartyCharacterPanelBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UCharactersGridPanelBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharactersGridPanelNotice OnOpenedCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharactersGridPanelNotice OnClosedCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharactersGridPanelCharacterSelectNotice OnSelectedCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECHARACTER_GRID_PANEL_WIDGET_STATE m_WidgetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint m_CursorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint m_GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyCharacterPanelBase*> m_PartyCharacterPanelRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyCharPanelSelectBackBase*> m_PartyCharacterPanelSelectBackRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, UPartyCharacterPanelBase*> m_PartyCharacterPanelPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, UPartyCharPanelSelectBackBase*> m_PartyCharacterPanelSelectBackPositions;
    
public:
    UCharactersGridPanelBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetWidgetState(ECHARACTER_GRID_PANEL_WIDGET_STATE NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FName& TextLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMember(const TArray<FCharacterGridPanelParam>& newMember);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCursorPosition(const FIntPoint& newPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveCursor(const FIntPoint& Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPartyCharPanelSelectBackBase*> GetPartyCharacterPanelSelectBackRefs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPartyCharacterPanelBase*> GetPartyCharacterPanelRefs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetPartyCharacterPanelByPos(const FIntPoint& Pos, UPartyCharacterPanelBase*& outPanel, UPartyCharPanelSelectBackBase*& outSelectBack) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetCursorPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnSelectedCharacter(EPlayableCharacterID PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnOpenedDelegate();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnClosedDelegate();
    
};

