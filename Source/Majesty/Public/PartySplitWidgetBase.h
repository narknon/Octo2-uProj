#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPARTY_SPLIT_CLOSE_REASON.h"
#include "EPARTY_SPLIT_PLACEMENT_POSITION.h"
#include "EPARTY_SPLIT_WIDGET_STATE.h"
#include "EPlayableCharacterID.h"
#include "KSUserWidgetBase.h"
#include "OnClosedPartySplitWithResultDelegate.h"
#include "PartySplitWidgetBase.generated.h"

class UCharactersGridPanelBase;
class UPartySplitCharacterPlacementBoxBase;
class UPartySplitMainPartyBoxBase;
class UPartySplitResultBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartySplitWidgetBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClosedPartySplitWithResult OnClosedPartySplitWithResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPARTY_SPLIT_WIDGET_STATE m_WidgetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint m_CursorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartySplitMainPartyBoxBase* m_MainPartyBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharactersGridPanelBase* m_CharacterGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartySplitResultBase* m_PartySplitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, UPartySplitCharacterPlacementBoxBase*> m_CursorPosToPlacementBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EPARTY_SPLIT_PLACEMENT_POSITION, UPartySplitCharacterPlacementBoxBase*> m_PlacementPosToPlacementBoxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION> m_CharacterPlacementPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPARTY_SPLIT_CLOSE_REASON m_CloseReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_HeaderTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FooterSelectPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FooterSelectCharacterTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FooterConfirmButtonTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FooterResetButtonTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CharacterGridTitleTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WildernessPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DesertPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MountainPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IslandPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BackDialogTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FailedDialogTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ResetDialogTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ConfirmDialogTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool debug_IsLoggingMode;
    
public:
    UPartySplitWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetState(EPARTY_SPLIT_WIDGET_STATE NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCursorPosition(const FIntPoint& newPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterPlacementPosition(const TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION>& newPositions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputPlus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputMinus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputCursor(const FIntPoint& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedWidgetState(EPARTY_SPLIT_WIDGET_STATE NextState, EPARTY_SPLIT_WIDGET_STATE PrevState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPARTY_SPLIT_WIDGET_STATE GetWidgetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPartySplitCharacterPlacementBoxBase* GetPlacementBoxByPlacementPos(EPARTY_SPLIT_PLACEMENT_POSITION keyPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPartySplitCharacterPlacementBoxBase* GetPlacementBoxByCursorPos(const FIntPoint& keyPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetCursorPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPARTY_SPLIT_PLACEMENT_POSITION GetCurrentSelectedPlacementPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPartySplitCharacterPlacementBoxBase* GetCurrentSelectedPlacementBox() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPARTY_SPLIT_CLOSE_REASON GetCloseReason() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION> GetCharacterPositions() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnClosedPartySplitWithResultDelegate();
    
};

