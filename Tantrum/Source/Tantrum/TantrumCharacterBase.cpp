// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumCharacterBase.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "TantrumPlayerController.h"

// Sets default values
ATantrumCharacterBase::ATantrumCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATantrumCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATantrumCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATantrumCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATantrumCharacterBase::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	//custom landed code
	ATantrumPlayerController* TantrumPlayerControler = GetController<ATantrumPlayerController>();
	if (TantrumPlayerControler)
	{
		const float fallImpactSpeed = FMath::Abs(GetVelocity().Z);
		if (fallImpactSpeed < MinImpactSpeed)
		{
			//do nothing, Very light fall
			return;
		}

		const float DeltaImpact = MaxImpactSpeed - MinImpactSpeed;
		const float FallRatio = FMath::Clamp((fallImpactSpeed - MinImpactSpeed) / DeltaImpact, 0.0f, 1.0f);
		const bool bAffectSmall = FallRatio <= .05;
		const bool bAffectLarge = FallRatio > .05;
		TantrumPlayerControler->PlayDynamicForceFeedback(FallRatio, 0.5f, bAffectLarge, bAffectSmall, bAffectLarge, bAffectSmall);
	}

}