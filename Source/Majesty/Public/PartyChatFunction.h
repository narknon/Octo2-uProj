#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PartyChat.h"
#include "PartyChatFunction.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPartyChatFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPartyChatFunction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithinMainStoryProgress(const FPartyChat& PartyChat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidPartyChatData(const FPartyChat& PartyChat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTraveledUniqueMapEnoughTimes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSameLevel(const FPartyChat& PartyChat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingFinalChapterPartyChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChokerDetachPartyChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChokerAttachPartyChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyCharacterPlayingMainStory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllRequiredCharactersInParty(const FPartyChat& PartyChat, bool containSubMember);
    
};

