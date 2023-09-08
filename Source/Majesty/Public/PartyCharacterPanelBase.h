#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "EEQUIPMENT_ITEM_PARAM.h"
#include "SavePlayerCharacterData.h"
#include "PartyCharacterPanelBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPartyCharacterPanelBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseUiResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavePlayerCharacterData m_CharacterData;
    
public:
    UPartyCharacterPanelBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleEquipmentInfo(int32 ShowCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleEquipIcon(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetParamRange(int32 ParamMin, int32 ParamMax);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUseUiResource(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEquipmentInfo(int32 Index, const EEQUIPMENT_ITEM_PARAM ParamType, int32 ParamBefore, int32 ParamAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEquipmentAnim(bool CanEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterData(const FSavePlayerCharacterData& CharacterData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUseUiResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavePlayerCharacterData GetCharacterData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Focus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
};

