#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EKSLanguage.h"
#include "FontItemData.h"
#include "KSGameInstance.generated.h"

class AKSCharacterManager;
class UKSGameInstance;
class UObject;

UCLASS(Blueprintable, NonTransient)
class MAJESTY_API UKSGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFontItemData> FontMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> FontJA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> FontEN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCreateFCv2;
    
    UKSGameInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStartLevel(FName levelName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayInTestLevel(bool bInTestLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetGameSuspend(bool isSuspend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFirstSpawn(bool FirstSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableWorldRendering(bool bDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugMode(bool isDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugLoadLevel(bool DebugLoadLebel);
    
    UFUNCTION(BlueprintCallable)
    void LoadFonts();
    
    UFUNCTION(BlueprintCallable)
    void LoadFont(EKSLanguage lang);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetLang(EKSLanguage eLang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayInTestLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePlayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetStartLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetIsDebugLoadLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UKSGameInstance* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetFirstSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AKSCharacterManager* GetCharacterManager();
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetOverwritePlatformFontType(int32 Type);
    
};

