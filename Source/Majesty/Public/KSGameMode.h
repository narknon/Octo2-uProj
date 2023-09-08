#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "EDebugFixMoveMode.h"
#include "EGameModeDebugPage.h"
#include "EPauseType.h"
#include "EventListData.h"
#include "KSGameMode.generated.h"

class AActor;
class UKSAutoSavingWidget;
class UKSLoadingWidget;

UCLASS(Blueprintable, NonTransient)
class MAJESTY_API AKSGameMode : public AGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSLoadingWidget* LoadingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSAutoSavingWidget* AutoSavingWidget;
    
public:
    AKSGameMode(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTheaterEndMainMenu(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(EPauseType pauseType, bool NewIsPaused);
    
    UFUNCTION(BlueprintCallable)
    static void SetHouseEnterActor(AActor* HouseEnter);
    
    UFUNCTION(BlueprintCallable)
    static void SetHouseCharacterScale(float inScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectLoadGame(bool bDirectLoadGame);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugInfoVisibility(bool bVisible, int32 pageIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugInfoStoryMemoryVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugInfoEventVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrightnessOffset_ForSwitch(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSaveEnable(bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    FString ParseStoryMemoryData(FEventListData EventData, int32 memoryIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSToggleEncount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowMultilingualGuide(bool Flag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetEncount(bool Encount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetBitFlag(int32 BitIndex, bool Flag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSDrawBitFlag(int32 StartIndex, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTheaterEndMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPauseType GetPauseFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPaused(EPauseType pauseType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetHouseEnterActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHouseCharacterScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDirectLoadGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBrightnessOffset_ForSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoSaveEnable() const;
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetInfoText(EGameModeDebugPage page, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetFixMoveMode(EDebugFixMoveMode fixMoveMode);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetCompletedGamePreparation(bool bCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetAutoPlaying(bool bAutoPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_ResetEncountWipeFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool Debug_IsCompletedGamePreparation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_IsAutoPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_GetStoryMemoryData(TArray<FString>& textList, int32 memoryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDebugFixMoveMode Debug_GetFixMoveMode();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_GetEventText(FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetAutoPlayingArgument(FString& outScenarioName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanLoadDisabledSaveData();
    
};

