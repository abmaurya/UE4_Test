// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Windows/WindowsPlatformApplicationMisc.h"
#include "Widgets/Colors/SColorPicker.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyPawn::OnClickAction()
{
    FVector2D CurrentCursorPosition = FSlateApplication::Get().GetCursorPos();
    FLinearColor ScreenColor = FPlatformApplicationMisc::GetScreenPixelColor(CurrentCursorPosition);
    
    color.X = ScreenColor.R;
    color.Y = ScreenColor.G;
    color.Z = ScreenColor.B;
}

