#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "EKSLanguage.h"
#include "KSTextManager.generated.h"

class UDataTable;
class UTextOperationComponent;

UCLASS(Blueprintable)
class MAJESTY_API AKSTextManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoadedVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> GameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TalkText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TalkVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TextCharaInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TextItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextOperationComponent* TextOperationComponent;
    
public:
    AKSTextManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetLanguageConditonParam_Talk(FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetLanguageConditonParam_Solo(bool IsSolo);
    
    UFUNCTION(BlueprintCallable)
    void SetConditonParam_Item(FName ItemLabel, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadTextVoice(EKSLanguage eLang);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LoadText(EKSLanguage eLang);
    
    UFUNCTION(BlueprintCallable)
    FString ExecMacroOperation(const FString& InputStr);
    
};

