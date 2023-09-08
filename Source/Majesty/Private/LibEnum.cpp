#include "LibEnum.h"

ULibEnum::ULibEnum() {
}

int32 ULibEnum::NameEnumLabel(const FString& EnumName, TArray<FText>& OutStringList) {
    return 0;
}

int32 ULibEnum::NameEnumDisplayName(const FString& EnumName, TArray<FText>& OutStringList) {
    return 0;
}

int32 ULibEnum::GetMaxEnumValue(const FString& EnumName) {
    return 0;
}

UEnum* ULibEnum::GetEnumType(const FString& EnumName) {
    return NULL;
}

void ULibEnum::GetEnumNameStringByValue(const FString& EnumName, int32 Value, FString& OutString) {
}

void ULibEnum::GetEnumLabel(const FString& EnumName, int32 Key, FString& OutValueName) {
}

int32 ULibEnum::GetEnumEntryNum(const FString& EnumName) {
    return 0;
}

void ULibEnum::GetEnumDisplayNameByValue(const FString& EnumName, int32 Value, FString& OutString) {
}

void ULibEnum::GetEnumDisplayName(const FString& EnumName, int32 Key, FString& OutValueName) {
}

int32 ULibEnum::BuildEnumStrings(UEnum* EnumType, TArray<FString>& OutStringList) {
    return 0;
}

int32 ULibEnum::BuildEnumNameStrings(UEnum* EnumType, TArray<FString>& OutStringList) {
    return 0;
}

int32 ULibEnum::BuildEnumLabel(UEnum* EnumType, TArray<FText>& OutStringList) {
    return 0;
}

int32 ULibEnum::BuildEnumFNameLabel(UEnum* EnumType, TArray<FName>& OutStringList) {
    return 0;
}

int32 ULibEnum::BuildEnumDisplayName(UEnum* EnumType, TArray<FText>& OutStringList) {
    return 0;
}


