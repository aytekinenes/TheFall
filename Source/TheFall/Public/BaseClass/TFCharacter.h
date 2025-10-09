// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/SaveActorInterface.h"

#include "TFCharacter.generated.h"


UCLASS()
class THEFALL_API ATFCharacter : public ACharacter, public ISaveActorInterface
{
	GENERATED_BODY()
private:


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta=(AllowPrivateAccess ="true"))
	class UStatlineComponent* Statline;



protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	FGuid SaveActorID;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	bool WasSpawned = false;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool CanJump() const;
	void HasJumped();

	bool CanSprint() const;
	void SetSprinting(const bool& bIsSprinting);


	void SetSneaking(const bool& IsSneaking);

public:	

	ATFCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FGuid GetActorSaveID_Implementation();
	FSaveActorData GetSaveData_Implementation();
	void SetActorGUID_Implementation(const FGuid& NewGuid);


};
