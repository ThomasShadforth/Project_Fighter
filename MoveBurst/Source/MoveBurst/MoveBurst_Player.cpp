  // Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBurst_Player.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
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
	normalWalkSpeed(300.f),
	dashSpeed(600.f),
	bFacingRight(true),
	bInputEnabled(true),
	bCanAirDash(true),
	bCanAttack(true),
	defaultGravityScale(1.2f),
	commandString(""),
	health(1000.f),
	maxHealth(1000.f),
	moveMultiplier(1.f)
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

	rightArmBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Right Arm Hitbox"));
	rightArmBox->SetupAttachment(GetMesh(), FName("hand_r"));

	leftArmBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Left Arm Hitbox"));
	leftArmBox->SetupAttachment(GetMesh(), FName("hand_l"));

	rightLegBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Right Leg Hitbox"));
	rightLegBox->SetupAttachment(GetMesh(), FName("foot_r"));

	leftLegBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Left Leg Hitbox"));
	leftLegBox->SetupAttachment(GetMesh(), FName("foot_l"));

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;

	normalJumpHeight = 420.f;
	highJumpHeight = 840.f;
	doubleJumpHeight = 210.f;
	

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

	rightArmBox->OnComponentBeginOverlap.AddDynamic(this, &AMoveBurst_Player::OnRightArmOverlapStarted);
	leftArmBox->OnComponentBeginOverlap.AddDynamic(this, &AMoveBurst_Player::OnLeftArmOverlapStarted);
	rightLegBox->OnComponentBeginOverlap.AddDynamic(this, &AMoveBurst_Player::OnRightLegOverlapStarted);
	leftLegBox->OnComponentBeginOverlap.AddDynamic(this, &AMoveBurst_Player::OnLeftLegOverlapStarted);

	//Set collision presets for hitboxes
	leftArmBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	leftArmBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	leftArmBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	leftArmBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	rightLegBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	rightLegBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	rightLegBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	rightLegBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	leftLegBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	leftLegBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	leftLegBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	leftLegBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	rightArmBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	rightArmBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	rightArmBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	rightArmBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

}

// Called every frame
void AMoveBurst_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	InterpCapsuleHalfHeight(DeltaTime);
	SetFacingRight();

	if (bIsMoving && moveGauge > 0 && !bIsRecoveringGauge) {
		if (bDashing) {
			ReduceMoveGauge(6.0f, DeltaTime, true, 25.f);
		}
		else {
			ReduceMoveGauge(4.0f, DeltaTime, true, 25.f);
		}
	} if (!bIsMoving && moveGauge < 100 && !bIsRecoveringGauge) {
		IncreaseMoveGauge(2.0f, true, DeltaTime, 25.f);
	}

	if (bIsRecoveringGauge) {
		IncreaseMoveGauge(4.0f, true, DeltaTime, 100.0f);
	}

}

void AMoveBurst_Player::MoveForward(float value) {
	
	if (!bIsMoving) {
		bIsMoving = true;
	}

	if (GetCharacterMovement()->IsFalling() || bCrouching || !bInputEnabled) return;
	
	if ((Controller != nullptr) && (value != 0.0f)) {
		
		const FRotator rotation{ Controller->GetControlRotation() };
		const FRotator yawRotation{ 0, rotation.Yaw, 0 };
		
		FVector direction{ FRotationMatrix{yawRotation}.GetUnitAxis(EAxis::X) };
		AddMovementInput(direction, value);

	}
	
}

void AMoveBurst_Player::FinishMoving()
{
	bIsMoving = false;
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

		if (!GetCharacterMovement()->IsFalling()) {
			ReduceMoveGauge(20.f, 0.0f, false, 25.f);
		}

	}
	else {
		ACharacter::Jump();

		if (!GetCharacterMovement()->IsFalling()) {
			ReduceMoveGauge(10.f, 0.0f, false, 25.f);
		}
	}

	FVector velocityScalar = GetCharacterMovement()->Velocity;

	if (!GetCharacterMovement()->IsFalling()) {
		if (bRightDirectionHeld && !bDashing) {
			velocityScalar.Y = 300.f;
		}
		else if (bLeftDirectionHeld && !bDashing) {
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
	//UE_LOG(LogTemp, Display, TEXT("JUMP STOPPED"));
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

	ReduceMoveGauge(15.f, 0.0f, false, 25.0f);

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

	//UE_LOG(LogTemp, Display, TEXT("AIR DASHING!"));

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

void AMoveBurst_Player::ReceiveAttackInput()
{
	if (!bInputEnabled && !bCanAttack) return;

	//TO DO: Check command string against a list of stored commands, play assigned attack based on command
	//Will need another method to handle command checks
	

	APlayerController* pController = Cast<APlayerController>(Controller);

	TArray<FEnhancedActionKeyMapping> actionMappings;

	actionMappings = playerDefaultMappingContext->GetMappings();

	if (!pController) return;

	for (auto map : actionMappings) {
		if (pController->WasInputKeyJustPressed(map.Key)) {
			FString attackName;
			GetAttackInputName(attackName, map.Action.GetFName());

			UE_LOG(LogTemp, Display, TEXT("ATTACK NAME: %s"), *attackName);
			AddToCommandString(attackName);
			CheckCommandString();
		}
	}

}

void AMoveBurst_Player::GetAttackInputName(FString& outAttackName, FName inputName)
{
	TArray<FString> outArray;

	inputName.ToString().ParseIntoArray(outArray, TEXT("r"), true);

	outAttackName = outArray[1];
}

void AMoveBurst_Player::PlayAttackMontage(FName attackName, bool specialAttack)
{

	if (!CheckAttackData(attackName)) return;

	UAnimInstance* animInstance = GetMesh()->GetAnimInstance();

	FName montageSectionName = attackName;


	bool bIsAttacking;

	if (animInstance) {
		if (montageSectionName.ToString().Contains("Punch") && punchAttackMontage) {
			animInstance->Montage_Play(punchAttackMontage);
			animInstance->Montage_JumpToSection(montageSectionName, punchAttackMontage);
			bIsAttacking = true;
		}
		else if (montageSectionName.ToString().Contains("Kick") && kickAttackMontage) {
			animInstance->Montage_Play(kickAttackMontage);
			animInstance->Montage_JumpToSection(montageSectionName, kickAttackMontage);
			bIsAttacking = true;
		}
		else if (specialAttack && specialAttackMontage) {
			UE_LOG(LogTemp, Display, TEXT("USING SPECIAL ATTACK"));
			animInstance->Montage_Play(specialAttackMontage);
			animInstance->Montage_JumpToSection(montageSectionName, specialAttackMontage);
			bIsAttacking = true;
		}

		if (bIsAttacking) {
			bInputEnabled = false;
			bCanAttack = false;
		}
	}
}

void AMoveBurst_Player::FinishAttackMontage()
{
	currentAttack = nullptr;
	bInputEnabled = true;
}

void AMoveBurst_Player::ReduceMoveGauge(float reduceRate, float DeltaTime, bool bOverTime, float threshold)
{
	if (bIsRecoveringGauge) return;

	if (bOverTime) {
		moveGauge -= reduceRate * DeltaTime;
		moveGaugeDecreaseAmount += reduceRate * DeltaTime;
		if (moveGaugeIncreaseAmount > 0) {
			moveGaugeIncreaseAmount -= reduceRate * DeltaTime;

			if (moveGaugeIncreaseAmount <= 0) {
				moveGaugeIncreaseAmount = 0;
			}
		}
	}
	else {
		moveGauge -= reduceRate;
		moveGaugeDecreaseAmount += reduceRate;


		if (moveGaugeIncreaseAmount > 0) {
			moveGaugeIncreaseAmount -= reduceRate;

			if (moveGaugeIncreaseAmount <= 0) {
				moveGaugeIncreaseAmount = 0;
			}
		}
	}


	if (moveGaugeDecreaseAmount >= threshold) {
		CheckMoveGauge();
		moveGaugeDecreaseAmount = 0.0f;
	}

	if (moveGauge <= 0.f) {
		moveGauge = 0.f;
		bIsRecoveringGauge = true;
	}
}

void AMoveBurst_Player::IncreaseMoveGauge(float amountIncreased, bool bOverTime, float DeltaTime, float threshold)
{
	if (bOverTime) {
		moveGauge += amountIncreased * DeltaTime;
		moveGaugeIncreaseAmount += amountIncreased * DeltaTime;

		if (moveGaugeDecreaseAmount > 0) {
			moveGaugeDecreaseAmount -= amountIncreased * DeltaTime;

			if (moveGaugeDecreaseAmount <= 0) {
				moveGaugeDecreaseAmount = 0;
			}

		}
	}
	else {
		moveGauge += amountIncreased;
		moveGaugeIncreaseAmount += amountIncreased;


		if (moveGaugeDecreaseAmount > 0) {
			moveGaugeDecreaseAmount -= amountIncreased;

			if (moveGaugeDecreaseAmount <= 0) {
				moveGaugeDecreaseAmount = 0;
			}

		}
	}

	if (moveGaugeIncreaseAmount >= threshold) {
		CheckMoveGauge();

		float leftOverGaugeIncrease = moveGaugeIncreaseAmount - threshold;

		moveGaugeIncreaseAmount = 0.0f + leftOverGaugeIncrease;
	}

	if (moveGauge >= 100.f) {
		moveGauge = 100.f;
		moveGaugeIncreaseAmount = 0.0f;

		bIsRecoveringGauge = false;
	}
}

void AMoveBurst_Player::CheckMoveGauge()
{
	//Thresholds for the move gauge which impact speed
	if (moveGauge >= 75.f) {
		moveMultiplier = 1.f;
	}
	else if (moveGauge < 75.f && moveGauge >= 50.f) {
		moveMultiplier = .75f;
	}
	else if (moveGauge < 50.f && moveGauge >= 25.f) {
		moveMultiplier = .50f;
	}
	else if (moveGauge < 25.f) {
		moveMultiplier = .25f;
	}

	if (!bDashing) {
		GetCharacterMovement()->MaxWalkSpeed = normalWalkSpeed * moveMultiplier;
	}
	else {
		GetCharacterMovement()->MaxWalkSpeed = dashSpeed * moveMultiplier;
	}

	if (moveGaugeIncreaseAmount <= 0) {
		moveGaugeIncreaseAmount = 24.9f;
	}
	else if (moveGaugeDecreaseAmount <= 0 && !bIsRecoveringGauge) {
		moveGaugeDecreaseAmount = 24.9f;
	}
}

bool AMoveBurst_Player::CheckAttackData(FName AttackString)
{

	for (auto data : attackData) {
		if (data.inputString == AttackString) {
			//First check if it requires meter
			if (data.bRequiresMeter) {
				if (specialGauge >= data.meterAmount) {
					currentAttack = (FS_AttackData*)(&data);
					specialGauge -= data.meterAmount;
					return true;
				}
				else {
					return false;
				}
			}
			else {
				currentAttack = (FS_AttackData*)(&data);
				return true;
			}

		}
	}

	return false;
}

void AMoveBurst_Player::OnRightArmOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor) {
		UE_LOG(LogTemp, Warning, TEXT("HIT DETECTED!"));
		HitOpponent(OtherActor);
	}
}

void AMoveBurst_Player::OnLeftArmOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor) {
		HitOpponent(OtherActor);
	}
}

void AMoveBurst_Player::OnRightLegOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor) {
		HitOpponent(OtherActor);
	}
}

void AMoveBurst_Player::OnLeftLegOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor) {
		HitOpponent(OtherActor);
	}
}

void AMoveBurst_Player::HitOpponent(AActor* OtherActor)
{
	if (OtherActor == this) return;

	UE_LOG(LogTemp, Warning, TEXT("ACTOR: %s"), *OtherActor->GetName());

	UE_LOG(LogTemp, Warning, TEXT("CHECKING FOR INTERFACE"));

	IDamageInterface* damageInterface = Cast<IDamageInterface>(OtherActor);

	if (damageInterface) {
		UE_LOG(LogTemp, Warning, TEXT("DETECTED INTERFACE"));
	}
	//To do: call onhit on opponent


}

void AMoveBurst_Player::GainSpecialMeter()
{
	specialGauge += currentAttack->meterGain;

	if (specialGauge > +specialGaugeMax) {
		specialGauge = specialGaugeMax;
	}
}

void AMoveBurst_Player::Landed(const FHitResult& Hit) {
	Super::Landed(Hit);

	bCanAirDash = true;

	if (bCrouchHeld) {
		Crouch();
	}

	if (bJumpHeld) {
		
		//UE_LOG(LogTemp, Display, TEXT("JUMPING AGAIN"));
		Jump();
	}

	
}

void AMoveBurst_Player::Move(const FInputActionValue& Value)
{
	if (GetCharacterMovement()->IsFalling() || bCrouching || !bInputEnabled) return;

	if (!bIsMoving) {
		bIsMoving = true;
	}

	float moveValue = Value.Get<float>();

	if ((Controller != nullptr) && (moveValue != 0.0f)) {

		const FRotator rotation{ Controller->GetControlRotation() };
		const FRotator yawRotation{ 0, rotation.Yaw, 0 };

		FVector direction{ FRotationMatrix{yawRotation}.GetUnitAxis(EAxis::X) };
		AddMovementInput(direction, moveValue);

	}
}

void AMoveBurst_Player::DirectionalInput(const FInputActionValue& Value)
{
	
	if (!bDirectionInputHeld) {
		bDirectionInputHeld = true;
	}

	previousInputDirection = currentInputDirection;

	currentInputDirection = Value.Get<FVector2D>();
	//Invert Y Direction to maintain consistency among checks
	currentInputDirection.Y *= -1;

	//UE_LOG(LogTemp, Display, TEXT("X DIRECTION: %f, Y DIRECTION: %f"), inputDirection.X, inputDirection.Y);

	if ((currentInputDirection.X > .5f && currentInputDirection.Y > .5f) && (previousInputDirection.X <= .49f || previousInputDirection.Y <= .49f)) {
		//UE_LOG(LogTemp, Display, TEXT("X DIRECTION: %f, Y DIRECTION: %f, RIGHT DIAGONAL INPUT PRESSED"), currentInputDirection.X, currentInputDirection.Y);
		AddToCommandString("RightDiag,");
	}
	else if ((currentInputDirection.X < -.5f && currentInputDirection.Y > .5f) && (previousInputDirection.X >= -.49f || previousInputDirection.Y <= .49f)) {
		//UE_LOG(LogTemp, Display, TEXT("X DIRECTION: %f, Y DIRECTION: %f, LEFT DIAGONAL INPUT PRESSED"), currentInputDirection.X, currentInputDirection.Y);
		AddToCommandString("LeftDiag,");
	}
	else if((currentInputDirection.X > .5f && currentInputDirection.Y < .5f) && ((previousInputDirection.X <= .49f || previousInputDirection.X == 0) || previousInputDirection.Y >= .51f)) {
		//UE_LOG(LogTemp, Display, TEXT("X DIRECTION: %f, Y DIRECTION: %f, RIGHT HORIZONTAL INPUT PRESSED"), currentInputDirection.X, currentInputDirection.Y);
		AddToCommandString("Right,");
	}
	else if ((currentInputDirection.X < -.5f && currentInputDirection.Y < .5f) && ((previousInputDirection.X >= -.49f || previousInputDirection.X == 0) || previousInputDirection.Y >= .51f)) {
		//UE_LOG(LogTemp, Display, TEXT("X DIRECTION: %f, Y DIRECTION: %f, LEFT HORIZONTAL INPUT PRESSED"), currentInputDirection.X, currentInputDirection.Y);
		AddToCommandString("Left,");
	}
	else if (((currentInputDirection.X > -.25f && currentInputDirection.X < .25f) && currentInputDirection.Y > .5f) && (previousInputDirection.Y <= .49f  || (previousInputDirection.X <= -.26f || previousInputDirection.X >= .26f /* || previousInputDirection.X == 0.0f*/))) {
		//UE_LOG(LogTemp, Display, TEXT("X DIRECTION: %f, Y DIRECTION: %f, DOWN INPUT PRESSED"), currentInputDirection.X, currentInputDirection.Y);
		AddToCommandString("Down,");
	}

	

}

bool AMoveBurst_Player::ContinuedDirectionalInput()
{
	if (!bDirectionInputHeld) return false;

	if (currentInputDirection == previousInputDirection) {
		return true;
	}
	else {
		return false;
	}
}

void AMoveBurst_Player::AddToCommandString(FString inputToAdd)
{
	lastHeldDirectionalInput = inputToAdd;
	commandString.Append(inputToAdd);
	UE_LOG(LogTemp, Display, TEXT("COMMAND STRING: %s"), *commandString);

	GetWorldTimerManager().ClearTimer(commandResetTimer);
	GetWorldTimerManager().SetTimer(commandResetTimer, this, &AMoveBurst_Player::ResetCommandString, .6f);
}

void AMoveBurst_Player::ResetCommandString()
{
	//UE_LOG(LogTemp, Display, TEXT("RESETTING COMMAND STRING"));
	commandString = "";

	if (ContinuedDirectionalInput()) {
		//UE_LOG(LogTemp, Warning, TEXT("INPUT IS STILL HELD"));
		AddToCommandString(lastHeldDirectionalInput);
	}
}

void AMoveBurst_Player::CheckCommandString()
{
	//Temporary method: Check the entire string against a set string
	//Useful for prototyping, but will replace with a more robust, lenient method at a future point in time
	if (commandString == "Down,RightDiag,Right,LightPunch") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCF LIGHT PUNCH"));

			PlayAttackMontage(FName("QCF_LP"), true);
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCB LIGHT PUNCH"));
		}
	} else if (commandString == "Down,RightDiag,Right,MediumPunch") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCF MEDIUM PUNCH"));
			PlayAttackMontage(FName("QCF_MP"), true);
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCB MEDIUM PUNCH"));
		}
	} else if (commandString == "Down,RightDiag,Right,HeavyPunch") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCF HEAVY PUNCH"));
			PlayAttackMontage(FName("QCF_HP"), true);
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCB HEAVY PUNCH"));
		}
	} else if (commandString == "Down,RightDiag,Right,LightKick") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCF LIGHT KICK"));
			PlayAttackMontage(FName("QCF_LK"), true);
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCB LIGHT KICK"));
		}
	} else if (commandString == "Down,RightDiag,Right,MediumKick") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCF MEDIUM KICK"));
			PlayAttackMontage(FName("QCF_MK"), true);
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCB MEDIUM KICK"));
		}
	} else if (commandString == "Down,RightDiag,Right,HeavyKick") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCF HEAVY KICK"));
			PlayAttackMontage(FName("QCF_HK"), true);
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCB HEAVY KICK"));
		}
	}
	else if (commandString == "Down,LeftDiag,Left,LightPunch") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCB LIGHT PUNCH"));
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCF LIGHT PUNCH"));
		}
	}
	else if (commandString == "Down,LeftDiag,Left,MediumPunch") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCB MEDIUM PUNCH"));
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCF MEDIUM PUNCH"));
		}
	}
	else if (commandString == "Down,LeftDiag,Left,HeavyPunch") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCB HEAVY PUNCH"));
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCF HEAVY PUNCH"));
		}
	}
	else if (commandString == "Down,LeftDiag,Left,LightKick") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCB LIGHT KICK"));
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCF LIGHT KICK"));
		}
	}
	else if (commandString == "Down,LeftDiag,Left,MediumKick") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCB MEDIUM KICK"));
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCF MEDIUM KICK"));
		}
	}
	else if (commandString == "Down,LeftDiag,Left,HeavyKick") {
		if (bFacingRight) {
			UE_LOG(LogTemp, Display, TEXT("QCB HEAVY KICK"));
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("QCF HEAVY KICK"));
		}
	}
	else {
		PlayAttackMontage(FName(commandString), false);
	}
}

void AMoveBurst_Player::FinishDirectionalInput()
{
	ResetPreviousDirection();
	GetWorldTimerManager().SetTimer(commandResetTimer, this, &AMoveBurst_Player::ResetCommandString, .6f);
	lastHeldDirectionalInput = "";
	bDirectionInputHeld = false;
}

void AMoveBurst_Player::ResetPreviousDirection() {
	//UE_LOG(LogTemp, Warning, TEXT("PREVIOUS DIRECTION RESET"));
	previousInputDirection = FVector2D{ 0.0f, 0.0f };
	currentInputDirection = FVector2D{ 0.0f, 0.0f };
}

void AMoveBurst_Player::PressLeft() {
	
	bLeftDirectionHeld = true;

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
							bDashing = true;
							//UE_LOG(LogTemp, Display, TEXT("DOUBLE TAP DASH STARTED"));
							GetCharacterMovement()->MaxWalkSpeed = dashSpeed * moveMultiplier;
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
	
	GetCharacterMovement()->MaxWalkSpeed = normalWalkSpeed * moveMultiplier;
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
		enhancedInput->BindAction(moveAction, ETriggerEvent::Completed, this, &AMoveBurst_Player::FinishMoving);

		enhancedInput->BindAction(pressLeftAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::PressLeft);
		enhancedInput->BindAction(releaseLeftAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReleaseLeft);

		enhancedInput->BindAction(pressRightAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::PressRight);
		enhancedInput->BindAction(releaseRightAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReleaseRight);

		enhancedInput->BindAction(lightPunchAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReceiveAttackInput);
		enhancedInput->BindAction(mediumPunchAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReceiveAttackInput);
		enhancedInput->BindAction(heavyPunchAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReceiveAttackInput);
		enhancedInput->BindAction(lightKickAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReceiveAttackInput);
		enhancedInput->BindAction(mediumKickAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReceiveAttackInput);
		enhancedInput->BindAction(heavyKickAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::ReceiveAttackInput);

		enhancedInput->BindAction(directionalInputAction, ETriggerEvent::Triggered, this, &AMoveBurst_Player::DirectionalInput);
		enhancedInput->BindAction(directionalInputAction, ETriggerEvent::Completed, this, &AMoveBurst_Player::FinishDirectionalInput);

		
	}
	
}

void AMoveBurst_Player::OnHit_Implementation(AActor* InstigatingActor, FS_AttackData AttackData)
{
	//To do: implement player response to being hit
}

void AMoveBurst_Player::ActivateRightArmHitBox()
{
	rightArmBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void AMoveBurst_Player::ActivateLeftArmHitBox()
{
	leftArmBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void AMoveBurst_Player::ActivateRightLegHitBox()
{
	rightLegBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void AMoveBurst_Player::ActivateLeftLegHitBox()
{
	leftLegBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void AMoveBurst_Player::DeactivateRightArm()
{
	rightArmBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AMoveBurst_Player::DeactivateLeftArm()
{
	leftArmBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AMoveBurst_Player::DeactivateRightLeg()
{
	rightLegBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AMoveBurst_Player::DeactivateLeftLeg()
{
	leftLegBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

