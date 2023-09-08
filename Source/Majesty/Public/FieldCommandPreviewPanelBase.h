#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "EUI_INPUT_TYPE.h"
#include "FieldCommandPreviewPanelBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandPreviewPanelBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentCursorIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BanInput;
    
    UFieldCommandPreviewPanelBase();
    UFUNCTION(BlueprintCallable)
    void SetCurrentCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetBanInput(int32 allow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCursorIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBanInput(EUI_INPUT_TYPE Type);
    
};

