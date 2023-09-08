#pragma once
#include "CoreMinimal.h"
#include "EFieldCommandPreviewMenuState.h"
#include "KSUserWidgetBase.h"
#include "FieldCommandPreviewMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandPreviewMenu : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentTabCursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFieldCommandPreviewMenuState WidgetState;
    
public:
    UFieldCommandPreviewMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void SetState(EFieldCommandPreviewMenuState NextState);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTabCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateState(EFieldCommandPreviewMenuState CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndState(EFieldCommandPreviewMenuState CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecide_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCursorUp_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCursorDown_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancel_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginState(EFieldCommandPreviewMenuState CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFieldCommandPreviewMenuState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTabCursorIndex();
    
};

