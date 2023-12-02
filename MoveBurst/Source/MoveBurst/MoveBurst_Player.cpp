// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBurst_Player.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/InputSettings.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
AMoveBurst_Player::AMoveBurst_Player() :
	bCrouching(false),
	crouchingCapsuleHalfHeight(44.f),
	standingCapsuleHalfHeight(88.f),
	normalWalkSpeed(600.f),
	dashSpeed(900.f),
	reverseWalkSpeed(300.f),
	bFacingRight(true),
	bInputEnabled(true),
	bCanAirDash(true),
	defaultGravityScale(1.2f)
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
	
	APlayerController* pController = Cast<APlayerController>(Controller);

	if (pController) {
		UEnhancedInputLocalPlayerSubsystem* subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pController->GetLocalPlayer());

		if (subSystem) {
			subSystem->AddMappingContext(playerDefaultMappingContext, 0);
		}
	}

}

// Called every frame
void AMoveBurst_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	InterpCapsuleHalfHeight(DeltaTime);
	SetFacingRight();
}

void AMoveBurst_Player::MoveForward(float value) {
	
	if (GetCharacterMovement()->IsFalling() || bCrouching || !bInputEnabled) return;
	
	if ((Controller != nullptr) && (value != 0.0f)) {
		
		const FRotator rotation{ Controller->GetControlRotation() };
		const FRotator yawRotation{ 0, rotation.Yaw, 0 };
		
		FVector direction{ FRotationMatrix{yawRotation}.GetUnitAxis(EAxis::X) };
		AddMovementInput(direction, value);

	}
	
}

void AMoveBurst_Player::Jump() {
	
	if (!bInputEnabled) return;

	//UE_LOG(LogTemp, Display, TEXT("JUMPING"));

	bJumpHeld = true;

	if (bCrouching) {
		//Briefly set Z Velocity for jump to be double the normal height
		//Then reset to normal value
		//Note: Will need a variable to store the high jump height, as well as regular jump height for a character
		GetCharacterMovement()->JumpZVelocity = highJumpHeight;
		bCrouching = false;
		
		float zPos = GetMesh()->GetRelativeLocation().Z;
		float zDif = -90 - zPos;

		UE_LOG(LogTemp, Display, TEXT("Difference between pos and -90: %f"), zDif);

		float newZPos = GetMesh()->GetRelativeLocation().Z + zDif;

		UE_LOG(LogTemp, Display, TEXT("Projected z Position: %f"), newZPos);

		GetCapsuleComponent()->SetCapsuleHalfHeight(standingCapsuleHalfHeight);
		GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, newZPos));
		ACharacter::Jump();

		FTimerHandle resetHighJumpTimer;

		GetWorldTimerManager().SetTimer(resetHighJumpTimer, this, &AMoveBurst_Player::ResetJumpHeight, .2f);
	}
	else {
		ACharacter::Jump();
	}

	FVector velocityScalar = GetCharacterMovement()->Velocity;

	if (!GetCharacterMovement()->IsFalling()) {
		if (bRightDirectionHeld) {
			velocityScalar.Y = 300.f;
		}
		else if (bLeftDirectionHeld) {
			velocityScalar.Y = -300.f;
		}
		else if (!bLeftDirectionHeld && !bRightDirectionHeld){
			velocityScalar.Y = 0.0f;
		}
	}
	

	GetCharacterMovement()->Velocity = velocityScalar;
}

void AMoveBurst_Player::StopJump()
{
	UE_LOG(LogTemp, Display, TEXT("JUMP STOPPED"));
}

void AMoveBurst_Player::JumpRelease()
{
	bJumpHeld = false;
}

void AMoveBurst_Player::CrouchHeld()
{
	bCrouchHeld = true;

	if (!GetCharacterMovement()->IsFalling() && bInputEnabled) {
		Crouch();
	}
}

void AMoveBurst_Player::CrouchReleased()
{
	bCrouchHeld = false;

	GetWorldTimerManager().SetTimer(crouchReleaseTimer, this, &AMoveBurst_Player::StopCrouch, .1f);
}

void AMoveBurst_Player::Crouch() {
	if (!bCrouching) {
		bCrouching = true;
	}	
}

void AMoveBurst_Player::StopCrouch()
{
	if(bCrouching) {
		bCrouching = false;
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

	//UE_LOG(LogTemp, Display, TEXT("Offset Z: %f"), meshOffset.Z);

	GetMesh()->AddLocalOffset(meshOffset);

	GetCapsuleComponent()->SetCapsuleHalfHeight(interpHalfHeight);
}

void AMoveBurst_Player::ResetJumpHeight() {
	GetCharacterMovement()->JumpZVelocity = normalJumpHeight;
}

void AMoveBurst_Player::SetFacingRight()
{
	FVector rightVec = GetActorRightVector();

	bFacingRight = rightVec.X < 0;
}

void AMoveBurst_Player::Backstep(float backstepDistance)
{
	bInputEnabled = false;

	FVector launchForce = FVector{ 0.f, backstepDistance, 0.f };
	LaunchCharacter(launchForce, false, false);

	FTimerHandle backstepFinishHandle;

	GetWorldTimerManager().SetTimer(backstepFinishHandle, this, &AMoveBurst_Player::StopBackstep, .3f);
}

void AMoveBurst_Player::StopBackstep()
{
	bInputEnabled = true;

	if (bCrouchHeld) {
		Crouch();
	}

	if (bJumpHeld) {
		Jump();
	}
}

void AMoveBurst_Player::Airdash(float horizontalDistance, float verticalDistance, bool bDisableGravity)
{
	if (!bCanAirDash) return;

	bInputEnabled = false;
	bCanAirDash = false;

	UE_LOG(LogTemp, Display, TEXT("AIR DASHING!"));

	GetCharacterMovement()->Velocity.Z = 0.0f;

	if (bDisableGravity) {
		FTimerHandle disableGravityTimer;
		GetCharacterMovement()->GravityScale = 0.f;
		GetWorldTimerManager().SetTimer(disableGravityTimer, this, &AMoveBurst_Player::ReenableGravity, .15f);
	}

	FVector airDashForce = FVector{0.0f, horizontalDistance, verticalDistance};

	GetCharacterMovement()->Velocity = airDashForce;

	FTimerHandle airDashFinishHandle;

	GetWorldTimerManager().SetTimer(airDashFinishHandle, this, &AMoveBurst_Player::StopAirdash, .2f);
}

void AMoveBurst_Player::StopAirdash()
{
	bInputEnabled = true;
}

void AMoveBurst_Player::ReenableGravity()
{
	GetCharacterMovement()->GravityScale = defaultGravityScale;
}

void AMoveBurst_Player::Landed(const FHitResult& Hit) {
	Super::Landed(Hit);

	bCanAirDash = true;

	if (bCrouchHeld) {
		Crouch();
	}

	if (bJumpHeld) {
		
		UE_LOG(LogTemp, Display, TEXT("JUMPING AGAIN"));
		Jump();
	}

	
}

void AMoveBurst_Player::Move(const FInputActionValue& Value)
{
	if (GetCharacterMovement()->IsFalling() || bCrouching || !bInputEnabled) return;

	float moveValue = Value.Get<float>();

	if ((Controller != nullptr) && (moveValue != 0.0f)) {

		const FRotator rotation{ Controller->GetControlRotation() };
		const FRotator yawRotation{ 0, rotation.Yaw, 0 };

		FVector direction{ FRotationMatrix{yawRotation}.GetUnitAxis(EAxis::X) };
		AddMovementInput(direction, moveValue);

	}
}

void AMoveBurst_Player::PressLeft() {
	
	bLeftDirectionHeld = true;
	
	if (bFacingRight) {
		GetCharacterMovement()->MaxWalkSpeed = reverseWalkSpeed;
	}
	else if(!bFacingRight && bDashing) {
		GetCharacterMovement()->MaxWalkSpeed = normalWalkSpeed;
	}

	ProcessEnhancedDoubleTap();
	//ProcessDoubleTap();
}

void AMoveBurst_Player::ReleaseLeft()
{
	bLeftDirectionHeld = false;
	ResetSpeed();
}

void AMoveBurst_Player::PressRight() {
	
	bRightDirectionHeld = true;

	if (!bFacingRight) {
		GetCharacterMovement()->MaxWalkSpeed = reverseWalkSpeed;
	}
	else if(bFacingRight && bDashing){
		GetCharacterMovement()->MaxWalkSpeed = normalWalkSpeed;
	}

	ProcessEnhancedDoubleTap();
	//ProcessDoubleTap();
}

void AMoveBurst_Player::ReleaseRight()
{
	bRightDirectionHeld = false;
	ResetSpeed();
}

void AMoveBurst_Player::ProcessEnhancedDoubleTap()
{
	if (!bInputEnabled) return;

	APlayerController* pController = Cast<APlayerController>(Controller);

	TArray<FEnhancedActionKeyMapping> actionMappings;

	actionMappings = playerDefaultMappingContext->GetMappings();

	for (auto map : actionMappings) {
		if (pController) {
			if (pController->WasInputKeyJustPressed(map.Key) && (map.Action.GetFName().ToString().Contains("PressLeft") || map.Action.GetFName().ToString().Contains("PressRight"))) {
				//UE_LOG(LogTemp, Display, TEXT("Action just pressed: %s"), *map.Action.GetFName().ToString());
				

				if (lastMoveInput.Action.GetFName() != "None" && lastMoveInput.Action.GetFName() == map.Action.GetFName()) {
					
					//UE_LOG(LogTemp, Display, TEXT("DOUBLE TAP DETECTED"));
					if (!GetCharacterMovement()->IsFalling()) {
						if (map.Action.GetFName().ToString().Contains("PressRight") && !bFacingRight) {
							Backstep(1200.f);
						}
						else if (map.Action.GetFName().ToString().Contains("PressLeft") && bFacingRight) {
							Backstep(-1200.f);
						}
						else {
							UE_LOG(LogTemp, Display, TEXT("DOUBLE TAP DASH STARTED"));
							GetCharacterMovement()->MaxWalkSpeed = dashSpeed;
						}
					}
					else {
						if (map.Action.GetFName().ToString().Contains("PressRight") && !bFacingRight) {
							Airdash(600.f, 300.f);
						}
						else if (map.Action.GetFName().ToString().Contains("PressLeft") && bFacingRight) {
							Airdash(-600.f, 300.f);
						}
						else {
							Airdash(400.f, 0.f, true);
						}
					}
				}

				lastMoveInput.Action = map.Action;
				
				GetWorldTimerManager().ClearTimer(dashTapTimer);
				GetWorldTimerManager().SetTimer(dashTapTimer, this, &AMoveBurst_Player::ResetDoubleTapInput, 0.4f);

			}

			
		}
	}
}

void AMoveBurst_Player::ResetSpeed() {
	UE_LOG(LogTemp, Warning, TEXT("SPEED RESET TO DEFAULT"));
	GetCharacterMovement()->MaxWalkSpeed = normalWalkSpeed;
	bDashing = false;
}

void AMoveBurst_Player::ResetDoubleTapInput()
{
	lastMoveInput = emptyAction;
}

// Called to bind functionality to input
void AMoveBurst_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);

	if (enhancedInput) {
		enhancedInput->BindAction(crouchAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::CrouchHeld);
		enhancedInput->BindAction(releaseCrouchAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::CrouchReleased);

		enhancedInput->BindAction(jumpAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::Jump);
		enhancedInput->BindAction(releaseJumpAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::JumpRelease);
		enhancedInput->BindAction(jumpAction, ETriggerEvent::Completed, this, &AMoveBurst_Player::StopJump);

		enhancedInput->BindAction(moveAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::Move);

		enhancedInput->BindAction(pressLeftAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::PressLeft);
		enhancedInput->BindAction(releaseLeftAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReleaseLeft);

		enhancedInput->BindAction(pressRightAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::PressRight);
		enhancedInput->BindAction(releaseRightAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReleaseRight);
	}
	
}

