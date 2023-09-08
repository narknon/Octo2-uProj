#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EDIALOG_TEXT_TYPE.h"
#include "EKSLanguage.h"
#include "GameTextCharaInfo.h"
#include "GameTextInfoData.h"
#include "GameTextItemInfo.h"
#include "TalkText.h"
#include "TalkVoice.h"
#include "TextDataUtility.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UTextDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UTextDataUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetTalkVoiceTextTableRowData(FTalkVoice& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetTalkVoiceLabel(FName& outLabel, FName TargetLabel, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTalkTextTableRowData(FTalkText& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemTextTableRowData(FGameTextItemInfo& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameTextTableRowData(FGameTextInfoData& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameTextString(FName Label, FString& OutText);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGameTextDB(EKSLanguage lang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameText(FText& OutText, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDialogText(FText& DetailText, TArray<FText>& ButtonTexts, FName TargetLabel, EDIALOG_TEXT_TYPE DialogType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharaTextTableRowData(FGameTextCharaInfo& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool Debug_SeachTargetText(FName& outLabel, FText targetText, EKSLanguage lang);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ResetText();
    
};

