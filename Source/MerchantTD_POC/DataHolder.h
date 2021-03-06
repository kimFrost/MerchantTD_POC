// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "DataHolder.generated.h"



//~~~~~ Forward Declarations ~~~~~//
//class APOTLStructure;


/*** FST_Resource ***/
USTRUCT(BlueprintType)
struct FST_Resource : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	FST_Resource(
		FString ID = "",
		FString Title = "",
		float Price = 0,
		bool Illigal = false,
		TArray<FString> Categories = TArray<FString>(),
		TArray<FString> Containers = TArray<FString>())
		: ID(ID)
		, Title(Title)
		, Price(Price)
		, Illigal(Illigal)
		, Categories(Categories)
		, Containers(Containers)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Title;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float Price;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	bool Illigal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TArray<FString> Categories;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TArray<FString> Containers;
	/*
	void SetInt(const int32 NewValue)
	{
	SampleInt32 = NewValue;
	}
	*/
};


/*** FST_Container ***/
USTRUCT(BlueprintType)
struct FST_Container : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	FST_Container(
		FString ID = "",
		FString Title = "",
		float InspectionTime = 5)
		: ID(ID)
		, Title(Title)
		, InspectionTime(InspectionTime)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Title;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float InspectionTime;
};


/*** FST_Structure ***/
USTRUCT(BlueprintType)
struct FST_Structure : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	FST_Structure(
		FString ID = "",
		FString Title = "",
		float Price = 0,
		int Colums = 1,
		int Rows = 1)
		: ID(ID)
		, Title(Title)
		, Price(Price)
		, Colums(Colums)
		, Rows(Rows)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Title;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float Price;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int Colums;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int Rows;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TSubclassOf<AActor> StructureClass;
};


UCLASS() 
class UDataHolder : public UObject
{
	GENERATED_BODY()
 
	//FORCEINLNE function
	/*
	static FORCEINLINE bool IsValid(AActor* TheActor)
	{
		if(!TheActor) return false;
		if(!TheActor->IsValidLowLevel()) return false;
		return true;
	}
	*/
 
	//cpp function
	//static int32 ComplicatedGameDataAnalysis();
};

/*
UCLASS()
class MERCHANTTD_POC_API UDataHolder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	
	
	
};
*/