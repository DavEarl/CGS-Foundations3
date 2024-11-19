// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TantrumPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANTRUM_API ATantrumPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void SetupInputComponent() override;

	void RequestJump();
	void RequestMoveForward(float AxisValue);
	void RequestMoveRight(float AxisValue);
	void RequestLookUp(float AxisValue);
	void RequestLookRight(float AxisValue);
	void RequestStopJump();

	void RequestCrouchStart();
	void RequestCrouchEnd();

	void RequestSprintStart();
	void RequestSprintEnd();

	//Base lookup rate, in deg/sec
	UPROPERTY(EditAnywhere, Category = "Look")
	float BaseLookUpRate = 90.f;

	//base lookright rate, in deg/sec
	UPROPERTY(EditAnywhere, Category = "Look")
	float BaseLookRightRate = 90.f;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float SprintSpeed = 1200.0f;

};
