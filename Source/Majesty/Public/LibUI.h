#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SlateWrapperTypes.h"
#include "DataTableTutorialPageData.h"
#include "EKSUIKind.h"
#include "EPARTY_SPLIT_CLOSE_REASON.h"
#include "ETUTORIAL_TYPE.h"
#include "EWIDGET_TEMPORARY_HIDE_USER.h"
#include "MJFieldCommandType.h"
#include "SpActMerchantResult.h"
#include "LibUI.generated.h"

class AActor;
class AKSCharacterBase;
class UDiseaseListWidget;
class UKSPartySplitWidgetBase;
class ULetterBoxBase;
class UMusicPlayerWidget;
class UPaperSprite;
class UPartySplitWidgetBase;
class UTexture;
class UTexture2D;
class UUITutorialBase;
class UUserWidget;

UCLASS(Blueprintable)
class MAJESTY_API ULibUI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibUI();
    UFUNCTION(BlueprintCallable)
    static void UpdateProgress(float CurrentTime, float MaxTime);
    
    UFUNCTION(BlueprintCallable)
    static void TurnOffTemporaryHiddenFlag(EWIDGET_TEMPORARY_HIDE_USER hideUser);
    
    UFUNCTION(BlueprintCallable)
    static void TemporaryCloseActionPopup();
    
    UFUNCTION(BlueprintCallable)
    static void SetWidgetVisible(EKSUIKind Type, ESlateVisibility Visible);
    
    UFUNCTION(BlueprintCallable)
    static void SetWidgetPaused(bool isPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetSupportAbilityMenuEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetRadarForceHidden(bool ForceHidden);
    
    UFUNCTION(BlueprintCallable)
    static void SetLetterBoxWidget(ULetterBoxBase* letterWidget);
    
    UFUNCTION(BlueprintCallable)
    static void SetJobMenuEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsOpeningPartyChatNotification(bool IsOpening);
    
    UFUNCTION(BlueprintCallable)
    static void SetHelpWindowPositionByWidget(const UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void SetHelpWindowPosition(const FVector2D& NewPosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetHelpWindowOffset(const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable)
    static void SetAbilityMenuEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMapNameNotification();
    
    UFUNCTION(BlueprintCallable)
    static void ReOpenSubTitle();
    
    UFUNCTION(BlueprintCallable)
    static void ReOpenGuildMenu();
    
    UFUNCTION(BlueprintCallable)
    static void ReOpenEnterActionPopup();
    
    UFUNCTION(BlueprintCallable)
    static void PushMapNameNotification(FName RegionName, FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, UTexture* EmblemTexture, FName NotificationFormat);
    
    UFUNCTION(BlueprintCallable)
    static void OpenTutorialUI(const TArray<FDataTableTutorialPageData>& PageData, ETUTORIAL_TYPE Type, UUITutorialBase*& UITutorial, bool IsEndCard, bool IsEpilouge);
    
    UFUNCTION(BlueprintCallable)
    static void OpenSubTitle(FName SubTitleLabel, bool RequestEvent, FName AfterEventLabel);
    
    UFUNCTION(BlueprintCallable)
    static void OpenStoryNotificationSubStory(FName TitleLabel, FName FormatTextLabel);
    
    UFUNCTION(BlueprintCallable)
    static void OpenStoryNotificationMarchant(FName MainStoryLabel, FName TitleLabel, FName FormatTextLabel);
    
    UFUNCTION(BlueprintCallable)
    static void OpenStoryNotificationCoupling(FName MainStoryLabel, FName TitleLabel, FName FormatTextLabel);
    
    UFUNCTION(BlueprintCallable)
    static void OpenScreenCaputreWithTexture(FName ResourceLabel);
    
    UFUNCTION(BlueprintCallable)
    static void OpenScreenCapture(bool PlayNoice);
    
    UFUNCTION(BlueprintCallable)
    static void OpenSaveLoadMenu(bool SaveMode, bool FromDebugMenu);
    
    UFUNCTION(BlueprintCallable)
    static UPartySplitWidgetBase* OpenPartySplitWidget();
    
    UFUNCTION(BlueprintCallable)
    static UMusicPlayerWidget* OpenMusicPlayer();
    
    UFUNCTION(BlueprintCallable)
    static void OpenMissionRecord();
    
    UFUNCTION(BlueprintCallable)
    static UKSPartySplitWidgetBase* OpenKSPartySplitWidget();
    
    UFUNCTION(BlueprintCallable)
    static void OpenHelpWindowWithOffset(const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable)
    static void OpenHelpWindow();
    
    UFUNCTION(BlueprintCallable)
    static void OpenGuildMenu(FName guildLabel, bool& IsOpen);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFieldCommandPreviewMenu(AKSCharacterBase* targetNpc);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFieldCommandMenu(AKSCharacterBase* targetNpc, bool DrawLeft, TArray<MJFieldCommandType> CommandList);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenFieldCommandJudge(AKSCharacterBase* TargetChara, TArray<MJFieldCommandType> CommandList);
    
    UFUNCTION(BlueprintCallable)
    static void OpenEnterActionPopup(AActor* TargetActor, FName ActionTextLabel);
    
    UFUNCTION(BlueprintCallable)
    static UDiseaseListWidget* OpenDiseaseListUI();
    
    UFUNCTION(BlueprintCallable)
    static void OpenBusinessWithNpcNotificationAnimal(const FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
    
    UFUNCTION(BlueprintCallable)
    static void OpenBusinessWithNpcNotification(const FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningPartySplitWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningMusicPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningKSPartySplitWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningFieldCommandPreviewMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpeningGuildMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainMenuFastWorldMapMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActiveSubTitle();
    
    UFUNCTION(BlueprintCallable)
    static void HideWidgetTemporary(bool isHide, EWIDGET_TEMPORARY_HIDE_USER hideUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetSourceTextureFromPaperSprite(UPaperSprite* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNoiceFinish();
    
    UFUNCTION(BlueprintCallable)
    static ULetterBoxBase* GetLetterBoxWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPARTY_SPLIT_CLOSE_REASON GetKSPartySplitWidgetCloseReason();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGuildReOpenFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFCMenuUniqueCommandFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFCMenuInputEnableMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEnableSafetyBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetAfterEventLabel();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceHideQuitGameMenu(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceAvailableTrialData(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetEnableSafetyBalloon(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetIsForceHideQuitGameMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetIsForceAvailableTrialData();
    
    UFUNCTION(BlueprintCallable)
    static void CloseSubTitle(bool& IsNext);
    
    UFUNCTION(BlueprintCallable)
    static void CloseScreenCapture();
    
    UFUNCTION(BlueprintCallable)
    static void ClosePartySplitWidget();
    
    UFUNCTION(BlueprintCallable)
    static void CloseMusicPlayer();
    
    UFUNCTION(BlueprintCallable)
    static void CloseKSPartySplitWidget();
    
    UFUNCTION(BlueprintCallable)
    static void CloseFieldCommandPreviewMenu(bool OpenJudgeWindow);
    
    UFUNCTION(BlueprintCallable)
    static void CloseFieldCommandMenu(bool OpenJudgeWindow, bool StateCheck);
    
    UFUNCTION(BlueprintCallable)
    static void CloseEnterActionPopup();
    
    UFUNCTION(BlueprintCallable)
    static void CloseDiseaseListUI();
    
    UFUNCTION(BlueprintCallable)
    static void CloseBusinessWithNpcNotification(bool bIsFast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanMainMenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanMainMenuClose();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyLetterBoxSize();
    
};

