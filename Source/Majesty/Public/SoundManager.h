#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "DebugListMenuItem.h"
#include "EACF_CATEGORY.h"
#include "EKSAudioComponentType.h"
#include "EKSDeviceVolumeType.h"
#include "EKSDspBusType.h"
#include "EKSVolumeType.h"
#include "ELISTENER_TYPE.h"
#include "ENOTICE_TYPE.h"
#include "ETimeZoneType.h"
#include "LevelInfoData.h"
#include "NoticeArgs.h"
#include "PlayMusicRecordDelegate.h"
#include "SoundData.h"
#include "StopMusicRecordDelegate.h"
#include "SoundManager.generated.h"

class AActor;
class AEnvSound;
class UAtomComponent;
class UMJSoundListenerComponent;
class USceneComponent;
class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class MAJESTY_API ASoundManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseBattleGaya;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPauseEventGaya;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowMenuSeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowSeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowEnvSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBgmInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCategoryVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLoadedCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Show3DSeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowListenerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowListeningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAISACParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> m_AtomComponents;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UAtomComponent>> m_3DSEComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundAtomCueSheet*> m_LoadedCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_CueSheetsForEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundAtomCue*> m_LoadedCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMJSoundListenerComponent* m_pcListenerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> m_CommonSeAtom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> m_EventSeAtom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UAtomComponent*> m_UsedEventSeAtom;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool waitFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEnvSound*> m_pEnvSoundTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_pEnvSoundInterfaceObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEndCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlayVoiceCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData m_CurentBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData m_NextChangeBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData m_PauseBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData CurrentPlayingMusicRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData LastPlayedNormalBGM;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMusicRecord OnPlayMusicRecorad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopMusicRecord OnStopMusicRecorad;
    
    ASoundManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UpdateBgmChangeTimeZone(const FLevelInfoData& rLevelInfo);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterLoadedSoundCue(FName cueLabel);
    
    UFUNCTION(BlueprintCallable)
    bool UnloadEventCueSheet();
    
    UFUNCTION(BlueprintCallable)
    bool UnloadCueSheetByName(FName CueSheetName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StopVoice(float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAllSe();
    
    UFUNCTION(BlueprintCallable)
    void SetWaitFadeIn(bool NewWaitFadeIn);
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(EKSVolumeType volType, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetupSelector();
    
    UFUNCTION(BlueprintCallable)
    void SetupEnvSoundOnCollect(ETimeZoneType eTimeZone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupBattleChangeEnvSound(bool bIsBattle);
    
    UFUNCTION(BlueprintCallable)
    bool SetFadeCategoryVolumeForEvent(EACF_CATEGORY Category, float Volume, float Time);
    
    UFUNCTION(BlueprintCallable)
    bool SetFadeCategoryVolume(EACF_CATEGORY Category, float Volume, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetDspBusToSeAndVoice(EKSDspBusType dspBusType);
    
    UFUNCTION(BlueprintCallable)
    void SetDspBusToComponent(EKSDspBusType dspBusType, UAtomComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetDeviceVolume(EKSDeviceVolumeType devVolType, float deviceVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBGMSelector(bool bIsDayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCategoryVolumeByName(const FString& CategoryName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    bool SetCategoryVolume(EACF_CATEGORY Category, float Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetBgmSelector(FName SelectorName, FName SelectorLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetBgmNextBlockIndex(int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAISACVolume(const FString& strAisacName, float fValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeEnvGaya(bool bBattle, bool bEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RestoreBgmBeforePlayMusicRecord(float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
    
    UFUNCTION(BlueprintCallable)
    void ResetEnvCollect(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestStopMusicRecord(float FadeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestStopLoopSe(int32 handleId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestStopFadeBgm(float FadeOutTime, bool stopBoth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestStopBGM();
    
    UFUNCTION(BlueprintCallable)
    void RequestStopAllEventSe();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestPlayVoiceByLabel(FName VoiceLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestPlayTitleBgmByLabel(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool IsDayTime, bool bIsDebugPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestPlaySeByLabel(FName SELabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestPlayMusicRecord(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestPlayLoopSe(int32 handleId, FName SELabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestPlayInterruptBgmByLabel(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestPlayFadeMapChangeBgmByLabel(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestPlayFadeBgmByLabel(FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayEventSeByRowName(const FString& SeName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayEventSeByLabel(FName SELabel, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayBgmByLabel(FName BgmLabel, int32 Priority, bool& success, FSoundData& BeforSoundData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayBgmById(int32 BGMID, int32 Priority, bool& success, FSoundData& BeforSoundData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayBattleVoiceByLabel(FName VoiceLabel, bool& success, FString& CueName, float& Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayBattleSeByLabel(FName SELabel, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestPlay3DSeWithComponent(UAtomComponent* Component, FName BgmLabel);
    
    UFUNCTION(BlueprintCallable)
    void RequestFadeOutAllEventSe(float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeEnvSound(ETimeZoneType eTimeZone);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLoadedSoundCue(FName CueSheetName, FName cueLabel, USoundAtomCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshCharacterVoiceResource(const TArray<FName>& TempCharaVoices);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseEnvGaya(bool bBattle, bool bEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden();
    
    UFUNCTION(BlueprintCallable)
    bool LoadEventCueSheetByEventName(UPARAM(Ref) FString& CueSheetName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadCueSheetByName(FName CueSheetName);
    
    UFUNCTION(BlueprintCallable)
    bool IsRequestChangeEnvSound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventSeFadeOut() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEndCollect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtomPlaying(EKSAudioComponentType CompType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtomPaused(EKSAudioComponentType CompType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume(EKSVolumeType volType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FName GetPlayingBgmLabelOnMusicPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetLoopSeHandle(int32& handleId, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetLoadedCue(FName CueName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLastPlayedNormalBGMLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAtomComponent* GetEventAtomComponent(FName CueSheetName);
    
    UFUNCTION(BlueprintCallable)
    float GetDeviceVolume(EKSDeviceVolumeType devVolType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetCurrentBgmLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentBgmData(FSoundData& PlayingBgmData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCueSheetAssetPath(FName CueSheetName, FName& outAssetPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCategoryVolumeForEvent(EACF_CATEGORY Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCategoryVolume(EACF_CATEGORY Category) const;
    
    UFUNCTION(BlueprintCallable)
    void GetBgmSelectorInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAtomCueName(EKSAudioComponentType eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAtomComponent* GetAtomComponent(EKSAudioComponentType CompType) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishChangeEnvSound();
    
    UFUNCTION(BlueprintCallable)
    void Debug_UnregisterAllSoundCue();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ShowEnvSoundInfo(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetShowDeviceVolume(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void Debug_GetLoadedCueSheetNames(FString& outCueSheetNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Debug_GetCategoryInfo(FString& outDebugInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Debug_GetAtomInfo(FString& outDebugInfo);
    
    UFUNCTION(BlueprintCallable)
    void Debug_Get3DSoundInfo(FString& out3DSoundInfo);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_ChangeSEOnDecided(const FDebugListMenuItem& menuItem);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ChangeSEListClose();
    
    UFUNCTION(BlueprintCallable)
    UAtomComponent* CreateAndAttach3DSEComponent(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeNextBgmFadeInTime(float FadeIn);
    
    UFUNCTION(BlueprintCallable)
    void ChangeListenerPoint(ELISTENER_TYPE eType, USceneComponent* pParentComponent);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFocusPointDistanceLevel(float fDistanceLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeCurrentBgmFadeOutTime(float FadeOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcSeEnvVolume();
    
    UFUNCTION(BlueprintCallable)
    void BattleChange_SetupEnvSE(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ApplyEnvVolume();
    
};

