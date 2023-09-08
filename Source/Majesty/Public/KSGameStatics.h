#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EBATTLE_RESULT.h"
#include "ECHANGE_TIME_DILATION.h"
#include "EDebugFixMoveMode.h"
#include "EEVENT_MODE.h"
#include "EFADE_TYPE.h"
#include "EFADE_USER.h"
#include "EKSLanguage.h"
#include "ELOADING_REASON.h"
#include "EMJRegion.h"
#include "EREQUEST_TYPE.h"
#include "ERESOLUTION_TYPE.h"
#include "MainSequneceRequestParam.h"
#include "KSGameStatics.generated.h"

class AActor;
class AKSGameMode;
class APlayerController;
class UKSAutoSavingWidget;
class UKSFade;
class UKSLoadingWidget;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class MAJESTY_API UKSGameStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKSGameStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WipeOutAtBattleStart(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WipeOutAtBattleEnd(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WipeInAtBattleStart(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WipeInAtBattleEnd(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSLoadingWidget* StopLoadingUI(UObject* WorldContextObject, ELOADING_REASON reason);
    
    UFUNCTION(BlueprintCallable)
    static void StartTimer();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSLoadingWidget* StartLoadingUI(UObject* WorldContextObject, ELOADING_REASON reason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetUseCustomFlipbook(UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTransitionFromLoadGame(UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimerHandle SetTimerForNextTick(UObject* WorldContextObject, const FTimerDynamicDelegate& InDynDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTimeDilation(UObject* WorldContextObject, ECHANGE_TIME_DILATION eType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTagVisibleStaticMesh(UObject* WorldContextObject, FName Tag, bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTagVisible(UObject* WorldContextObject, FName Tag, bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShowMultilingualGuide(UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetResolution(ERESOLUTION_TYPE Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayerDash(UObject* WorldContextObject, bool inEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPartyChatEnable(UObject* WorldContextObject, bool inEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuEnable(UObject* WorldContextObject, bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastBattleResult(EBATTLE_RESULT InResult);
    
    UFUNCTION(BlueprintCallable)
    static void SetLanguage(EKSLanguage InLang);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInHouse(UObject* WorldContextObject, bool inHouse);
    
    UFUNCTION(BlueprintCallable)
    static void SetHiddenCollisionComponentChild(USceneComponent* pRootComp, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    static void SetHiddenCollisionActorChild(AActor* pRootActor, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    static void SetHiddenActorChild(AActor* pRootActor, bool bHidden);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEventSpeedUpMode(UObject* WorldContextObject, int32 State, bool IsInputChange);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEncountSignMode(UObject* WorldContextObject, bool InEncountSign);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEncount(UObject* WorldContextObject, bool InEncount);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleSpeed();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBattleMode(UObject* WorldContextObject, bool InBattleMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetGameOnGameOver(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetBattleSpeedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSLanguage PS_GetSystemLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PS4IsEnterAssingCircle();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintCurrentRealTime(const UObject* WorldContextObject, const FString& Comment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSAutoSavingWidget* OpenOptionAutoSavingUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSAutoSavingWidget* OpenAutoSavingUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void KSSetPerformanceModeChangedNotificationEnabled(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUseCharacterResourceDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTrialEdition(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTransitionFromLoadGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReleaseMusicPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerActiveMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayBalloonVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformPS5();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformPS4();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlatformPC(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNoticeScreenSkip(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMainMenuOpen(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFadeUser(UObject* WorldContextObject, EFADE_USER User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFadeEnd(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCheckInputEventFunction(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCheckInputBattleFunction(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideWipeAtBattleEnd_Immediately(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetUseCustomFlipbook(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTitlePlaying(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShowMultilingualGuide(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERESOLUTION_TYPE GetResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMJRegion GetRegion_Switch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPlayVoiceWaitTimeLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPlayerDash(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMJRegion GetPlatformRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSLanguage GetPlatformDefaultLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartyChatEnable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetOpenMainMenuDisable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSLanguage GetOldLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNoVoiceWaitTimeLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetMainMenuEnable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBATTLE_RESULT GetLastBattleResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSLanguage GetLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKSGameMode* GetKSGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetInHouse(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetFieldCommandDisable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFCMode();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSFade* GetFadeWidget(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EFADE_TYPE GetFadeType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEventSpeedUpMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEVENT_MODE GetEventMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEventAutoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetEncountSignMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetEncount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetElapsedTimeZoneDisable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetChangeTimeZoneDisable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetCalcBaseBattleSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBuildRegionJP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBitFlagIndexByName(FName FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBitFlagByName(FName FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetBattleMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetBalloonThinkingTextWaitValue(UObject* WorldContextObject, bool PlayVoice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetBalloonTextWaitValue(UObject* WorldContextObject, bool PlayVoice);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetBalloonSpeedValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActivatedWindow(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSFade* FadeOut(UObject* WorldContextObject, float EndTime, const FLinearColor Color, EFADE_USER FadeUser);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FadeInImmediately(UObject* WorldContextObject, EFADE_USER FadeUser);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSFade* FadeIn(UObject* WorldContextObject, float EndTime, const FLinearColor Color, EFADE_USER FadeUser);
    
    UFUNCTION(BlueprintCallable)
    static void EndTimerToComment(const FString& reason);
    
    UFUNCTION(BlueprintCallable)
    static void EndTimer();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_SetFixMoveMode(UObject* WorldContextObject, EDebugFixMoveMode fixMoveMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EDebugFixMoveMode Debug_GetFixMoveMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKSAutoSavingWidget* CloseAutoSavingUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearFadeForcibly(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CheckTimer();
    
    UFUNCTION(BlueprintCallable)
    static void ChangBattleSpeedUp();
    
    UFUNCTION(BlueprintCallable)
    static void AddSequenceRequestForHolding(EREQUEST_TYPE Type, FMainSequneceRequestParam Param);
    
    UFUNCTION(BlueprintCallable)
    static void AddSequenceRequest(EREQUEST_TYPE Type, FMainSequneceRequestParam Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AcqQuitGame(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

