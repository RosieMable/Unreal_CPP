// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DialogUI.h"
#include "DialogueNPCCharacter.h"
#include "AnimalController.generated.h"


UENUM(BlueprintType)
enum class ELogLevel : uint8 {
	TRACE			UMETA(DisplayName = "Trace"),
	DEBUG			UMETA(DisplayName = "Debug"),
	INFO			UMETA(DisplayName = "Info"),
	WARNING			UMETA(DisplayName = "Warning"),
	ERROR			UMETA(DisplayName = "Error")
};

UENUM(BlueprintType)
enum class ELogOutput : uint8 {
	ALL				UMETA(DisplayName = "All levels"),
	OUTPUT_LOG		UMETA(DisplayName = "Output log"),
	SCREEN			UMETA(DisplayName = "Screen")
};

UCLASS(config=Game)
class AAnimalController : public ACharacter
{
	GENERATED_BODY()

		/** Camera boom positioning the camera behind the character */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	//Following code is used to change the material on possession
	UPROPERTY(EditDefaultsOnly, Category = Possession)
		class UMaterialInterface* DefaultMaterialBody;
	UPROPERTY(EditDefaultsOnly, Category = Possession)
		class UMaterialInterface* DefaultMaterialFur;
	UPROPERTY(EditDefaultsOnly, Category = Possession)
		class UMaterialInterface* PossessMaterialBody;
	UPROPERTY(EditDefaultsOnly, Category = Possession)
		class UMaterialInterface* PossessMaterialFur;


public:
	AAnimalController();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	//For debug propurses

	/**
	* Log - prints a message to all the log outputs with a specific color
	* @param LogLevel {@see ELogLevel} affects color of log
	* @param FString the message for display
	*/
	void Log(ELogLevel LogLevel, FString Message);

	/**
	* Log - prints a message to all the log outputs with a specific color
	* @param LogLevel {@see ELogLevel} affects color of log
	* @param FString the message for display
	* @param ELogOutput - All, Output Log or Screen
	*/
	void LogWithOutput(ELogLevel LogLevel, FString Message, ELogOutput LogOutput);
public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//The following code has been added to expand the functionalities of the third person character controller and make it compatible with the dialogue system
private:

	//True if the player is currently talking with any pawn
	bool bIsTalking;

	//True if the player is within a valide range to talk with a pawn
	bool bIsTalkingRange;

	//Initiate or terminates a conversation
	void ToggleTalking();

	//Reference to the datatable containing the lines, it is retreived by the pawn
	UDataTable* DialogueLines;

	//Reference to the pawn the player is currently talking to
	ADialogueNPCCharacter* TalkingPawn;

	//Serches in the given row inside a specified udatatable
	FDialogue* RetrieveDialogue(UDataTable* TableToSearch, FName RowName);

	//Stores the controller, so it can be used for the possession system 
	AController* SavedController;

public:

	//Generates player's lines
	void GeneratePlayerLines(UDataTable& PlayerLines);

	//Array that will be populated with the Questions from the Dialogue class' questions, retrieved from the actor talking
	UPROPERTY(BlueprintReadOnly)
		TArray<FString> Questions;

	/*Performs the actual talking - informs the associated pawn if necessary in order to answer
	The subtitles array contain all the subtitles for this talk - it should be passed to our UI*/
	UFUNCTION(BlueprintCallable, Category = DialogueSystem)
		void Talk(FString Excerpt, TArray<FDialogueLines>& Lines);

	//Enables/Disables our ability to talk. The player cant talk if he is not in a valid range
	void SetTalkRangeStatus(bool Status) { bIsTalkingRange = Status; }

	//Set a new talking pawn
	void SetTalkingPawn(ADialogueNPCCharacter* Pawn) { TalkingPawn = Pawn; }

	/*Retrieves the UI reference*/
	UDialogUI* GetUI() { return UI; }

	//Is the pawn currently possessed?
	bool bIsCurrentlyPossessed;

	UFUNCTION()
		void Possess(); //Used to possess a character

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = RayCast)
		float LineTraceDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = RayCast)
		float LineTraceSpread;

protected:

		/*The component responsible for playing our SFX*/
		UPROPERTY(VisibleAnywhere)
			UAudioComponent* AudioComp;

		/*Opens or closes the conversation UI*/
		UFUNCTION(BlueprintImplementableEvent, Category = DialogSystem)
			void ToggleUI();

		/*UI Reference*/
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
			UDialogUI* UI;

};

