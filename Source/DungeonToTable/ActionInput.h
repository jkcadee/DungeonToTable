// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionInput.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FActionInput
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ActionPointCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RequiredEquipment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RequiredLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Unlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Sprite;

	void Activate();

	FActionInput() {
		Name = "None";
		Description = "None";
		RequiredEquipment = "None";
		RequiredLevel = 0;
		Unlocked = false;
	}
};
