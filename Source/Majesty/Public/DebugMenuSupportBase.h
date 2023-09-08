#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AddFloatValueDelegateDelegate.h"
#include "AddIntValueDelegateDelegate.h"
#include "AddListValueDelegateDelegate.h"
#include "AddSubMenuDelegateDelegate.h"
#include "AddToggleValueDelegateDelegate.h"
#include "ChangeFloatValueDelegateDelegate.h"
#include "ChangeIntValueDelegateDelegate.h"
#include "ChangeListValueDelegateDelegate.h"
#include "ChangeToggleValueDelegateDelegate.h"
#include "DebugParam.h"
#include "EDEBUG_INFORMATION_COLOR_TYPE.h"
#include "OnTickWidgetDelegateDelegate.h"
#include "PreInitWidgetDelegateDelegate.h"
#include "DebugMenuSupportBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDebugMenuSupportBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RootMenuName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugParam> DebugParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugParam cCurrentParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSubMenuActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nMaxHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nParentHierarchy;
    
    UDebugMenuSupportBase();
    UFUNCTION(BlueprintCallable)
    void OnPreInitWidgetFunc(UPARAM(Ref) FDebugParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideFunc(UPARAM(Ref) FDebugParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeFunc(UPARAM(Ref) FDebugParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDebugParam> GetSubMenuParam(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDebugParam> GetDebugSubMenuList(const FDebugParam& baseManuItem);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDebugParam> GetDebugParamFromHierarchy(int32 nHierarcy);
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintScreenMessage(const FString& str, FColor col);
    
    UFUNCTION(BlueprintCallable)
    void CreateMenu_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu_Implementation();
    
    UFUNCTION(BlueprintCallable)
    int32 BackParentHierarchy();
    
    UFUNCTION(BlueprintCallable)
    void AddToggleVal_Change(const FString& MenuName, bool Enable, FChangeToggleValueDelegate NewOnChangeFunc, FAddToggleValueDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddToggleVal(const FString& MenuName, bool Enable, FAddToggleValueDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddSubMenuEnd();
    
    UFUNCTION(BlueprintCallable)
    void AddSubMenuBegin(const FString& MenuName, FAddSubMenuDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddListVal_Change_PreInitWidget(const FString& MenuName, TArray<FText> strList, int32 StartIndex, FChangeListValueDelegate NewOnChangeFunc, FAddListValueDelegate NewOnDecideFunc, FPreInitWidgetDelegate NewOnPreInitWidgetFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddListVal_Change(const FString& MenuName, TArray<FText> strList, int32 StartIndex, FChangeListValueDelegate NewOnChangeFunc, FAddListValueDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddListVal(const FString& MenuName, TArray<FText> strList, int32 StartIndex, FAddListValueDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddIntVal_Change(const FString& MenuName, int32 DefaultValue, int32 intMin, int32 intMax, FChangeIntValueDelegate NewOnChangeFunc, FAddIntValueDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddIntVal(const FString& MenuName, int32 DefaultValue, int32 intMin, int32 intMax, FAddIntValueDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddInfomationWithCallback(const FString& MenuName, const FString& InformationStr, FOnTickWidgetDelegate OnTickFunc, EDEBUG_INFORMATION_COLOR_TYPE ColorType);
    
    UFUNCTION(BlueprintCallable)
    void AddInfomation(const FString& MenuName, const FString& InfomationStr, EDEBUG_INFORMATION_COLOR_TYPE ColorType);
    
    UFUNCTION(BlueprintCallable)
    void AddFloatVal_Change(const FString& MenuName, float DefaultValue, float floatMin, float floatMax, FChangeFloatValueDelegate NewOnChangeFunc, FAddFloatValueDelegate NewOnDecideFunc);
    
    UFUNCTION(BlueprintCallable)
    void AddFloatVal(const FString& MenuName, float DefaultValue, float floatMin, float floatMax, FAddFloatValueDelegate NewOnDecideFunc);
    
};

