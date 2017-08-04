// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ACharacters/AMerchant.h"
#include "USensor.generated.h"



//~~ FORWARD DECLARATIONS ~~//
//class AMerchant;


//~~ DELEGATES ~~//
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMerchantSensored, AMerchant*, Merchant);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMerchantSensored, float, TestVal);


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MERCHANTTD_POC_API USensor : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	// Sets default values for properties
	USensor();
	


		
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensor")
	//bool bShouldSensorBlock;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensor")
	//bool bShouldSensorPlayer;

	UFUNCTION(BlueprintCallable, Category = "Sensor")
	void SensorTriggered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);


	UPROPERTY(BlueprintAssignable, Category = "Sensor|Module")
	FMerchantSensored OnMerchantSensored;
	


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
