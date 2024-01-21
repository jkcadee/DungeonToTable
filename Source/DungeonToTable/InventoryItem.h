#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.generated.h"

    USTRUCT(BlueprintType)
    struct FInventoryItem
    {
        GENERATED_BODY()
        
        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FName Name;

        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FString Type;

        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 Amount;

        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 SellValue;

        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        UTexture2D* Sprite;

        // The amount of a certain item before it is considered too saturated in the market and will sell at a lower price.
        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Threshold;

        FInventoryItem()
        {
            Name = "None";
            Type = "None";
            Amount = 0;
            SellValue = 0;
            Threshold = 0.0;
        }
    };