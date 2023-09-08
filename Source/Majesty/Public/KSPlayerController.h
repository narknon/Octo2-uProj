#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "EControllerInputType.h"
#include "EKSInputMode.h"
#include "EKSKeyConfigElement.h"
#include "EKSKeyConfigType.h"
#include "EKSUseInputType.h"
#include "ENOTICE_TYPE.h"
#include "KSKeyConfigMappingDatum.h"
#include "NoticeArgs.h"
#include "KSPlayerController.generated.h"

class AActor;

UCLASS(Blueprintable)
class MAJESTY_API AKSPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerCharacterInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RAxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RAxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RSholderHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrameInputFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwitchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGamePadAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSUseInputType UseInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerInputType UseControllerInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeUseInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InputNotificationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMouseMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSystemUiOverlaid;
    
public:
    AKSPlayerController(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetPlayerCharacterInput(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetKSInputMode(EKSInputMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultControllerKeyConfig();
    
    UFUNCTION(BlueprintCallable)
    bool SetConfigKey(EKSKeyConfigElement Elem, const FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaultKeyConfig(EKSKeyConfigType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetKeyRepeat();
    
    UFUNCTION(BlueprintCallable)
    void ResetConfigKeyList();
    
    UFUNCTION(BlueprintCallable)
    void ReflectSystemDataKeyConfig();
    
    UFUNCTION(BlueprintCallable)
    void ReflectKeyboardLayoutType();
    
    UFUNCTION(BlueprintCallable)
    void RebuildKeyMappings(const FKSKeyConfigMappingDatum& MappingData);
    
    UFUNCTION(BlueprintCallable)
    void RebuildInputKeyMappingsByKeyConfigElement(EKSKeyConfigElement Elem);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionApplyComplete(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MouseEventY(float Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MouseEventX(float Axis);
    
    UFUNCTION(BlueprintCallable)
    bool IsSetConfigKey(EKSKeyConfigElement Elem, const FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressedEventSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressedEventDoubleSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyConfigCancelKey(EKSKeyConfigElement Elem, const FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeUseInputType() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeConfigKeyList();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSUseInputType GetUseInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTypeHashByKeyConfigElement(EKSKeyConfigElement Elem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRSholderHold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerCharacterInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSInputMode GetKSInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetKeyNameByKeyConfigElement(EKSKeyConfigElement Elem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyByKeyConfigElement(EKSKeyConfigElement Elem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGamePadAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFrameInputFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void GetDirectInputKey(const FKey XInputKey, FKey& DirectInputKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetDefaultKeyConfigElement(EKSKeyConfigElement Elem) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetFixedInputMode(EKSUseInputType inputType, bool isFixed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugRemoveOldKeyConfig();
    
    UFUNCTION(BlueprintCallable)
    void DebugEnableMouseInput(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void DebugChangeOldKeyConfigList(bool ChangeOldSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugAddOldKeyConfig();
    
    UFUNCTION(BlueprintCallable)
    void CleanMoveParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckInputType();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultKeyboardConfigKey();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDefaultKeyConfigToSystemData();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDefaultKeyConfig();
    
    UFUNCTION(BlueprintCallable)
    void AddInputNotificationActor(AActor* TargetActor);
    
};

