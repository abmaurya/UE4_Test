// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class INNOVANA_ASSIGNMENT_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	
	UPROPERTY(BlueprintReadOnly)
	FVector color;
public:	
	
	UFUNCTION(BlueprintCallable)
	void OnClickAction();

};
