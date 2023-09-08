#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "DataTableTutorialPageData.h"
#include "UITutorialTemplateBase.generated.h"

class UAcqImage;
class UKSTextBlock;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UUITutorialTemplateBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FocusAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OutFocusAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAcqImage*> PageImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKSTextBlock*> PageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> VisibleList;
    
    UUITutorialTemplateBase();
    UFUNCTION(BlueprintCallable)
    void SetVisibleList(ESlateVisibility Visible, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetUIFocus(bool Focus, bool Fast);
    
    UFUNCTION(BlueprintCallable)
    void SetPageText(FName TextLabel, int32 TextID);
    
    UFUNCTION(BlueprintCallable)
    void SetPageImage(UTexture2D* SetTexture, int32 TextID);
    
    UFUNCTION(BlueprintCallable)
    void RefreshImage();
    
    UFUNCTION(BlueprintCallable)
    void RefleshText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetUseBackGround();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetTemplateType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckReplaceText(const FDataTableTutorialPageData PageData);
    
};

