// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Equipment.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FEquipment
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 UpgradeLevel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Unlocked;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* Sprite;

    FEquipment() {
        Name = "None";
        UpgradeLevel = 0;
        Unlocked = false;
    }
};
