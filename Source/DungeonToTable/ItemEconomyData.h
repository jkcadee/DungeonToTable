// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemEconomyData.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct FItemEconomyData
{
	GENERATED_BODY()

	// The amount of an item in the economy.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;

	// Min sellable amount that an item can reach.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinSellableAmount;

	// Max sellable amount that an item can reach.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSellableAmount;

	// Amount of days it takes for an item be stabilised.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StabilisationDays;

	// Amount of days since this item has last been sold
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DaysLastSold;
};
