#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPARTY_SPLIT_PLACEMENT_POSITION.h"
#include "EPlayableCharacterID.h"
#include "PartySplitResultNoticeDelegate.h"
#include "PartySplitResultBase.generated.h"

class UPartyCharacterPanelBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartySplitResultBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySplitResultNotice OnStartedOpenCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySplitResultNotice OnOpenedCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySplitResultNotice OnStartedCloseCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySplitResultNotice OnClosedCallback;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyCharacterPanelBase*> m_MainParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EPARTY_SPLIT_PLACEMENT_POSITION, UPartyCharacterPanelBase*> m_PlacedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TitleTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MainPartyTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WildernessPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DesertPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MountainPlaceTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IslandPlaceTextLabel;
    
public:
    UPartySplitResultBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMember(const TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION>& member);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnStartOpenDelegate();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnStartCloseDelegate();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnOpenedDelegate();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnClosedDelegate();
    
};

