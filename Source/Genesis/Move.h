// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Move.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FMove : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	FString Name;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	//enum class EType* Type;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	int32 Damage;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	int32 PowerPoints;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	int32 Accuracy;
};