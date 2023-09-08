#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "ELIST_ITEM_NEXT_SPACE.h"
#include "ELIST_ITEM_STATUS.h"
#include "ELIST_NUM_UNIT_TYPE.h"
#include "KSListItemWidgetBase.h"
#include "MJListWidgetItemData.h"
#include "MJListItemWidget.generated.h"

class UHorizontalBox;
class UImage;
class UKSTextBlock;
class UListItemDetailWidgetBase;
class URankWidgetBase;
class UTexture2D;
class UUserWidget;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UMJListItemWidget : public UKSListItemWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSTextBlock* RefText_Col1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSTextBlock* RefText_Col2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSTextBlock* RefText_Col3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSTextBlock* RefText_Unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RefIcon_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RefIcon_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RefIcon_Item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RefImg_StrikeThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RefImg_BackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RefFixedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* RefVBox_Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RefColumnExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* RefTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RefAnim_Focus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RefAnim_OutFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RefAnim_Decide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RefAnim_DisableFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RefAnim_DisableOutFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultBackColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RefSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RefDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URankWidgetBase* RefRankWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextCol_Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextCol_Disable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconCol_Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconCol_Disable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndxInAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ColumnExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TextCol2_Dark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELIST_ITEM_STATUS itemStatus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResetToDefaultAnimDisable;
    
public:
    UMJListItemWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateCheckIcon(bool StrikeThrough);
    
    UFUNCTION(BlueprintCallable)
    void StopAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(const FMJListWidgetItemData& itemmData, ELIST_NUM_UNIT_TYPE unitType, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleWidget(UUserWidget* titleWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetTextToColumn1(FName TextLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTextColor(const FSlateColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetSpacer(ELIST_ITEM_NEXT_SPACE spacerType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShining(bool ShiningFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetNumUnit(ELIST_NUM_UNIT_TYPE unitType);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDataIsRank(UTexture2D* itemTexture, const FText& Name, const FText& Value_0, const FText& Value_1, int32 rankNum, const FText& Detail, ELIST_ITEM_STATUS Status);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemData(UTexture2D* iconTex, UTexture2D* iconTex0, const FText& Name, const FText& value0, const FText& value1, const FText& Detail, ELIST_ITEM_STATUS Status);
    
    UFUNCTION(BlueprintCallable)
    void SetIconColor(const FSlateColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetFixedIcon(UTexture2D* Tex);
    
    UFUNCTION(BlueprintCallable)
    void SetDetailWidget(UListItemDetailWidgetBase* detailWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetDarkToTextCol2(bool Dark);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnExWidget(UUserWidget* extensionWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetColorByStatus(ELIST_ITEM_STATUS newPram);
    
    UFUNCTION(BlueprintCallable)
    void SetCol1Icon(UTexture2D* iconTex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDetailWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveColumnExWidget();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim(UWidgetAnimation* anim, bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutFocus(bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitInstance(bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(int32 indexInAll, bool showColumn2, bool showColumn3, ELIST_ITEM_STATUS NewItemStatus, bool StrikeThrough);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemIndexAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeight() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetCursorRelativePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetColumnExWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Focus(bool isFast);
    
    UFUNCTION(BlueprintCallable)
    void FirstSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
};

