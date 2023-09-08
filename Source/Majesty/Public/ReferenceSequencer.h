#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ENOTICE_TYPE.h"
#include "ETimeZoneType.h"
#include "NoticeArgs.h"
#include "ReferenceSequencer.generated.h"

class ALevelSequenceActor;
class ULevelSequence;

UCLASS(Blueprintable)
class MAJESTY_API AReferenceSequencer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_pDeepThinkActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_pDeepDirectingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_pDeepDirecting;
    
public:
    AReferenceSequencer(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StopReferenceSequencer(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDeepThink(FName TagName, FVector AddOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDeepDirecting();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetToolsTimeZone(ETimeZoneType eTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDeepThinkParameter(FName TagName, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDeepDirectingAttachPlayer(AActor* DeepDirectingActor, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDeepDirectingAttachCamera(AActor* DeepDirectingActor, bool Enable);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETimeZoneType GetToolsTimeZone();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDeepThinkTagName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDeepThinkOffset();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSequence* GetDeepThink();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSequence* GetDeepDirecting();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDeepThink();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDeepDirecting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateSequenceActor();
    
public:
    UFUNCTION(BlueprintCallable)
    void AllStopSequencer();
    
};

