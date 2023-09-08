#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EGET_DATATABLE_RESULT.h"
#include "LibDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class MAJESTY_API ULibDataTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibDataTable();
    UFUNCTION(BlueprintCallable)
    static bool GetDataTableRowByName(UDataTable* Table, FName RowName, FTableRowBase& OutRow, EGET_DATATABLE_RESULT& OutResult);
    
};

