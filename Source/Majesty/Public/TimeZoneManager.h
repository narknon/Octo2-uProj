#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ELEVEL_TYPE.h"
#include "ELevelTransitionNotice.h"
#include "ENOTICE_TYPE.h"
#include "ETimeZoneType.h"
#include "NoticeArgs.h"
#include "TimeZoneManager.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class UObject;
class UTimeOperator;

UCLASS(Blueprintable)
class MAJESTY_API ATimeZoneManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTimeOperator* m_pTimeOperator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_pSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_pcOriginalSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_pcReplaceSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_pcPrevSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_TheaterCache_CurrentSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_TheaterCache_PrevSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnable;
    
public:
    ATimeZoneManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTimeZoneType(ETimeZoneType eNewType);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTimeZoneDarkAreaForEditor(const UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTempDarkSurfaceEnable(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIndoorPostProcessEnableForEditor(const UObject* WorldContextObject, bool bIndoor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIndoorPostProcessEnable(bool bIndoor);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameTimeZoneSequencer(int32 nFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedChangeTimeDisable(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeTimeEnable(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAddChangeValueTime(const float fNewValue);
    
    UFUNCTION(BlueprintCallable)
    void RevertTimezoneSequencerAfterTheater();
    
    UFUNCTION(BlueprintCallable)
    void RevertTimeZoneSequencer();
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetTimeZoneSequencerForEditor(const UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeTimezoneSequencer(FName sequencerLabel);
    
    UFUNCTION(BlueprintCallable)
    void Refresh(bool bNextTimeZone);
    
    UFUNCTION(BlueprintCallable)
    void OnStartChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable)
    void OnStartChangeFieldLevel(FName levelId, ELEVEL_TYPE levelType, ELevelTransitionNotice notice);
    
    UFUNCTION(BlueprintCallable)
    void OnPreFinishChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDarkState(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETimeZoneType IsNextTimeZoneCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETimeZoneType GetTimeZoneType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequencerCurrentFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSequenceActor* GetSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETimeZoneType GetNextTimeZoneType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChangeTimeEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeTimeZoneSequencer(ULevelSequence* pSequencer);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeTimeZoneForEditor(const UObject* WorldContextObject, ETimeZoneType ETimeZoneType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeNextTimeZone();
    
    UFUNCTION(BlueprintCallable)
    void CacheTimezoneSequencerBeforeTheater();
    
    UFUNCTION(BlueprintCallable)
    void ApplyReplaceTimezoneSequencer();
    
};

