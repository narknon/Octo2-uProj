#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECONTROL_GUIDE_BUTTON_TYPE.h"
#include "EKSKeyConfigElement.h"
#include "EKSLanguage.h"
#include "GameTextCharaInfo.h"
#include "GameTextItemInfo.h"
#include "TalkText.h"
#include "TalkVoice.h"
#include "KSTextStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UKSTextStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKSTextStatics();
    UFUNCTION(BlueprintCallable)
    static bool LoadTextVoice(EKSLanguage eLang);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadText(EKSLanguage eLang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKSTextLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTextItemInfo(FName Label, FGameTextItemInfo& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTextCharaInfo(FName Label, FGameTextCharaInfo& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTalkVoice(FName Label, FTalkVoice& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTalkText(FName Label, FTalkText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameTextString(FName Label, FString& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameTextMacroOperation(FName Label, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameText(FName Label, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFallbackTalkTextLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetButtonTextFromKeyConfig(UObject* WorldContextObject, EKSKeyConfigElement Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetButtonText(UObject* WorldContextObject, ECONTROL_GUIDE_BUTTON_TYPE Type);
    
};

