#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqUserWidget.h"
#include "AddBalloonParam.h"
#include "EBalloonEventType.h"
#include "EBalloonType.h"
#include "EKSLanguage.h"
#include "FnishBalloonEventDelegate.h"
#include "BalloonBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UBalloonBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBalloonType BalloonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawTextEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddBalloonParam BalloonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalloonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinWH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextBoxSize;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFnishBalloonEvent FinishBalloonEvent;
    
    UBalloonBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UnPausedBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextAnimationWait(EKSLanguage NewLanguage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PauseBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawTextEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Init(const FAddBalloonParam& InParam, bool bAutoTalk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBalloonType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetPlayedVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAddBalloonParam GetBalloonParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallNext(bool AutoNext);
    
    UFUNCTION(BlueprintCallable)
    bool CallBalloonEvent(EBalloonEventType EventType);
    
};

