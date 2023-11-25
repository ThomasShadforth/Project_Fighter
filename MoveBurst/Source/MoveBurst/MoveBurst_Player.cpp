// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBurst_Player.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMoveBurst_Player::AMoveBurst_Player() :
	bCrouching(false),
	crouchingCapsuleHalfHeight(44.f),
	standingCapsuleHalfHeight(88.f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	tempSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Temp Spring Arm"));
	tempSpringArm->SetupAttachment(RootComponent);
	tempSpringArm->TargetArmLength = 240.0f;
	tempSpringArm->bUsePawnControlRotation = false;
	tempSpringArm->SocketOffset = FVector(0.f, 0.f, 80.f);

	tempCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Temp Cam"));
	tempCamera->SetupAttachment(tempSpringArm, USpringArmComponent::SocketName);
	tempCamera->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;

	normalJumpHeight = 420.f;
	highJumpHeight = 840.f;
	doubleJumpHeight = 210.f;
	//GetCharacterMovement()->
}

// Called when the game starts or when spawned
void AMoveBurst_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveBurst_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	InterpCapsuleHalfHeight(DeltaTime);
}

void AMoveBurst_Player::MoveForward(float value) {
	
	TArray<FInputAxisKeyMapping> axisMapping;
	
	if ((Controller != nullptr) && (value != 0.0f)) {
		FVector direction{ 0, 1, 0 };
		AddMovementInput(direction, value);

		//To do: store the 

	}
	else {
		//After a delay, reset the dash tap count
	}
}

void AMoveBurst_Player::Jump() {
	if (bCrouching) {
		//Briefly set Z Velocity for jump to be double the normal height
		//Then reset to normal value
		//Note: Will need a variable to store the high jump height, as well as regular jump height for a character
		GetCharacterMovement()->JumpZVelocity = highJumpHeight;
		bCrouching = false;
		
		FVector currentOffset = FVector::Zero() - GetMesh()->GetRelativeLocation();
		GetMesh()->AddLocalOffset(currentOffset);
		ACharacter::Jump();

		FTimerHandle resetHighJumpTimer;

		GetWorldTimerManager().SetTimer(resetHighJumpTimer, this, &AMoveBurst_Player::ResetJumpHeight, .2f);
	}
	else {
		ACharacter::Jump();
	}
}

void AMoveBurst_Player::Crouch() {
	if (!GetCharacterMovement()->IsFalling()) {
		if (!bCrouching) {
			bCrouching = true;
		}
		else {
			bCrouching = false;
		}
	}
}

//In order to make it easier for high jumps to be activated, will add a slight delay to deactivating crouch

void AMoveBurst_Player::InterpCapsuleHalfHeight(float DeltaTime) {
	float targetCapsuleHalfHeight{  };

	//To do - check if crouching
	if (bCrouching) {
		targetCapsuleHalfHeight = crouchingCapsuleHalfHeight;
	}
	else {
		targetCapsuleHalfHeight = standingCapsuleHalfHeight;
	}

	const float interpHalfHeight{ FMath::FInterpTo(GetCapsuleComponent()->GetScaledCapsuleHalfHeight(), targetCapsuleHalfHeight, DeltaTime, 20.0f) };

	const float deltaCapsuleHalfHeight{ interpHalfHeight - GetCapsuleComponent()->GetScaledCapsuleHalfHeight() };
	const FVector meshOffset{ 0.0f, 0.0f, -deltaCapsuleHalfHeight };

	UE_LOG(LogTemp, Display, TEXT("Offset Z: %f"), meshOffset.Z);

	GetMesh()->AddLocalOffset(meshOffset);

	GetCapsuleComponent()->SetCapsuleHalfHeight(interpHalfHeight);
}

void AMoveBurst_Player::ResetJumpHeight() {
	GetCharacterMovement()->JumpZVelocity = normalJumpHeight;
}

// Called to bind functionality to input
void AMoveBurst_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMoveBurst_Player::MoveForward);

	PlayerInputComponent->BindAction("Crouch", EInputEvent::IE_Pressed, this, &AMoveBurst_Player::Crouch);
	PlayerInputComponent->BindAction("Crouch", EInputEvent::IE_Released, this, &AMoveBurst_Player::Crouch);

	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AMoveBurst_Player::Jump);

}

