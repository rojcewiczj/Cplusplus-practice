// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    
    Super::BeginPlay();
    SetupGame();// setting up the game
    PrintLine(FString::Printf(TEXT("the Hiddenword is %s"), *HiddenWord)); // Debug Line that we can turn on and off
    
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else
    {
        --Lives;
        PrintLine(TEXT("lost a life!"));
        if (Lives > 0)
        {
            if (Input == HiddenWord)
            {
                PrintLine(TEXT("you have won!"));
                EndGame();
            }  
        }
        else
        {
           PrintLine(TEXT("You ahve no lives left!"));
           EndGame();
            
        }

    }
}

void UBullCowCartridge::SetupGame()
{
    PrintLine(TEXT("Hi There!"));

    HiddenWord = TEXT("cake"); 
    Lives = HiddenWord.Len();
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); 
    PrintLine(TEXT("you have %i lives!"), Lives);
    PrintLine(TEXT("Put in your guess and press ENTER!"));
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again."));
}