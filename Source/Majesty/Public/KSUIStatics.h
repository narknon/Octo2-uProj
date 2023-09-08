#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKSUIKind.h"
#include "EKSUIPartsKind.h"
#include "KSUIStatics.generated.h"

class UBalloonBundleWidgetBase;
class UStaticMesh;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class MAJESTY_API UKSUIStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKSUIStatics();
    UFUNCTION(BlueprintCallable)
    static void ReloadUIResources();
    
    UFUNCTION(BlueprintCallable)
    static int32 PushActive(UUserWidget* PushUI);
    
    UFUNCTION(BlueprintCallable)
    static void PopActiveUIWith(UUserWidget* UI, bool& IsPop, UUserWidget*& PopUI);
    
    UFUNCTION(BlueprintCallable)
    static void PopActive(UUserWidget*& PopUI);
    
    UFUNCTION(BlueprintCallable)
    static int32 OpenRequest(UUserWidget* PushUI, bool UseStack);
    
    UFUNCTION(BlueprintCallable)
    static void OpenMainMenu(bool FastWorldMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUIResManagerLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStack(UUserWidget* CheckUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKSUserWidgetRunning(EKSUIKind inKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClosingStack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetUIResTexture2D(FName resName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStaticMesh* GetUIResStaticMesh(FName resName);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetUIPartsWidget(EKSUIPartsKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBalloonBundleWidgetBase* GetBalloonBundle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUserWidget* GetActiveStack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAbsoluteSize(UWidget* Target);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteStackUI(UUserWidget* DeleteUI);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetEventForceSkip(bool bforceSkip);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetBalloonMessageFullSkip(bool bSkip);
    
    UFUNCTION(BlueprintPure)
    static FText ConvertMoneyToText_int64(int64 Money, int32 MinDigit, int32 MaxDigit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertMoneyToText(int32 Money, int32 MinDigit, int32 MaxDigit);
    
    UFUNCTION(BlueprintCallable)
    static void CloseRequestFromKind(EKSUIKind Kind, bool ForceClose);
    
    UFUNCTION(BlueprintCallable)
    static void CloseRequest(UUserWidget* PopUI, bool ForceClose);
    
    UFUNCTION(BlueprintCallable)
    static bool CloseMainMenuFromMissionRecordPartyChat(bool FastClose);
    
    UFUNCTION(BlueprintCallable)
    static bool CloseMainMenu(bool FastClose);
    
    UFUNCTION(BlueprintCallable)
    static void AddToScreen(UUserWidget* Target, int32 ZOrder, bool UsePlayer);
    
};

