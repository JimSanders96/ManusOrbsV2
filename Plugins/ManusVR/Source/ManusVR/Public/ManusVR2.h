// Copyright 2015 Manus VR

#pragma once

#include "Components/ActorComponent.h"
#include "ManusVR2.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UManusVR2 : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UManusVR2();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;


	UFUNCTION(BlueprintCallable, Category="Manus2")void initManus();
	UFUNCTION(BlueprintCallable, Category="Manus2")void shutdownManus();

	UFUNCTION(BlueprintCallable, Category="Manus2")void getFingers( const bool leftHand, float& thumb, float& index, float& middle, float& ring, float& pink, FVector& accel, FVector& orientation );

	
	UFUNCTION(BlueprintCallable, Category="Manus2")void calibrate( const bool leftHand, bool gyro=true, bool accel=true, bool fingers=false);
	UFUNCTION(BlueprintCallable, Category="Manus2")void setVibration( const bool leftHand, float power);//power from 0.0 to 1.0
private:
	void initDLL();
	void* m_handleDLL;
};