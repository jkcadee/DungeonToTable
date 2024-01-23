// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Recipe.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FRecipe
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ItemRequirementArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Sprite;

	bool CheckInventory();

	FRecipe() {
		Name = "None";
		Description = "None";
	}
};
