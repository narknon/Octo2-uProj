#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKSCharacterDir.h"
#include "EPlayableCharacterID.h"
#include "KSUserWidgetBase.h"
#include "PartyChat.h"
#include "PartyChatBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartyChatBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UPartyChatBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool VisibleBackGround(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupPartyChatWidget(const FPartyChat& PartyChatData, bool UseBackgroundImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCharaDir(int32 Index, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCharacterIndex(int32 Index, EPlayableCharacterID Character, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OutFocusPartyChatCharactr(bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCharacterPos(FVector2D& Pos, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FocusPartyChatCharactr(const TArray<int32>& FocusCharacters, bool isFast);
    
};

