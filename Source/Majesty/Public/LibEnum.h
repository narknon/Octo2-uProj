#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibEnum.generated.h"

class UEnum;

UCLASS(Blueprintable)
class MAJESTY_API ULibEnum : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibEnum();
    UFUNCTION(BlueprintCallable)
    static int32 NameEnumLabel(const FString& EnumName, TArray<FText>& OutStringList);
    
    UFUNCTION(BlueprintCallable)
    static int32 NameEnumDisplayName(const FString& EnumName, TArray<FText>& OutStringList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxEnumValue(const FString& EnumName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEnum* GetEnumType(const FString& EnumName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEnumNameStringByValue(const FString& EnumName, int32 Value, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnumLabel(const FString& EnumName, int32 Key, FString& OutValueName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEnumEntryNum(const FString& EnumName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEnumDisplayNameByValue(const FString& EnumName, int32 Value, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnumDisplayName(const FString& EnumName, int32 Key, FString& OutValueName);
    
    UFUNCTION(BlueprintCallable)
    static int32 BuildEnumStrings(UEnum* EnumType, TArray<FString>& OutStringList);
    
    UFUNCTION(BlueprintCallable)
    static int32 BuildEnumNameStrings(UEnum* EnumType, TArray<FString>& OutStringList);
    
    UFUNCTION(BlueprintCallable)
    static int32 BuildEnumLabel(UEnum* EnumType, TArray<FText>& OutStringList);
    
    UFUNCTION(BlueprintCallable)
    static int32 BuildEnumFNameLabel(UEnum* EnumType, TArray<FName>& OutStringList);
    
    UFUNCTION(BlueprintCallable)
    static int32 BuildEnumDisplayName(UEnum* EnumType, TArray<FText>& OutStringList);
    
};

