#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterDir.h"
#include "KSCharaFlipbook.h"
#include "KSFlipbookData.h"
#include "KSSpriteData.h"
#include "KSUIFlipbookData.h"
#include "MJSpriteSocketData.h"
#include "KSFlipbookManager.generated.h"

class UKSPaperFlipbook;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class MAJESTY_API AKSFlipbookManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMaterial;
    
public:
    AKSFlipbookManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpriteDataFromActionLabel(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, FKSSpriteData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetSpriteData(FName SpriteName, UPARAM(Ref) FKSSpriteData& spriteData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetMissionSpriteData(FName SpriteName, UPARAM(Ref) FKSSpriteData& spriteData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetMissionFlipbookData(FName FlipbookName, UPARAM(Ref) FKSUIFlipbookData& flipbookData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFlipbookTexAssetPtrs(FName FlipbookName, bool resetArray, TArray<TSoftObjectPtr<UTexture2D>>& outTexAssetPtrs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetFlipbookData(FName FlipbookName, UPARAM(Ref) FKSFlipbookData& flipbookData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetDefaultMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterTextureAndAddtionalFirstFrame_SoftObjectPtr(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, TArray<TSoftObjectPtr<UTexture2D>>& outArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterTexAssetPtrs(FName CharacterName, TArray<TSoftObjectPtr<UTexture2D>>& outTexAssetPtrs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterMaterialAssetPtrs(FName CharacterName, TArray<TSoftObjectPtr<UMaterialInterface>>& outMatAssetPtrs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetCharacterFlipbookNames(FName CharacterName, UPARAM(Ref) TArray<FName>& FlipbookNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterFlipbookName(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, FName& FlipbookName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetCharacterData(FName CharacterName, UPARAM(Ref) FKSCharaFlipbook& CharacterData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllSpriteDataFromActionLabel(FName CharacterName, EKSCharacterAction ActionType, EKSCharacterDir Dir, TMap<FName, FMJSpriteSocketData>& DataList, bool bIsReverseSocket);
    
    UFUNCTION(BlueprintCallable)
    UKSPaperFlipbook* CreateFlipbook(UObject* Outer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ContainsFlipbookData(FName FlipbookName);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeMissionFlipbook(FName FlipbookName, UKSPaperFlipbook* PaperFlipbook, UMaterialInstanceDynamic* SetMaterial);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeFlipbook(FName FlipbookName, UKSPaperFlipbook* PaperFlipbook, UMaterialInstanceDynamic* SetMaterial, bool bReverseSprite);
    
};

