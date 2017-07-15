// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"


/*** FST_Collection ***/

USTRUCT(BlueprintType)
struct FST_Collection : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	FST_Collection(
		FString Id = "",
		FString Title = "",
		TArray<FString> Resources = TArray<FString>(),
		int PetalsRequired = 5)
		: Id(Id)
		, Title(Title)
		, Resources(Resources)
		, PetalsRequired(PetalsRequired)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	FString Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	FString Title;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	TArray<FString> Resources;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	int PetalsRequired;
	/*
	void SetInt(const int32 NewValue)
	{
		SampleInt32 = NewValue;
	}
	*/
};
