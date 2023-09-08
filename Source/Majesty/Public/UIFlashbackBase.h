#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFlashbackSequence.h"
#include "KSUserWidgetBase.h"
#include "UIFlashbackBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UUIFlashbackBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LabelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlashbackSequence SeqFlashback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;
    
public:
    UUIFlashbackBase();
protected:
    UFUNCTION(BlueprintCallable)
    bool TickInternal(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Start(FName strName, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ResetParam();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LoadStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitFlashback(float Alpha, UTexture2D* Texture, FLinearColor BackColor);
    
    UFUNCTION(BlueprintCallable)
    EFlashbackSequence GetFlashbackSeq();
    
    UFUNCTION(BlueprintCallable)
    bool Finish(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckResourceData(FName ResorceLabel);
    
    UFUNCTION(BlueprintCallable)
    bool AddImage(FName ResourceName);
    
};

