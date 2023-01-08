#include<stdio.h>//standard I/O header file
#include<string.h>//a header file of the C standard library containing functions for working with strings ending in 0 and various memory functions.
#include<time.h>//to work with date and time
#include<conio.h>//to work with the console
#include<stdlib.h>//standard library

const char *words[7] = {"artur","beautiful","cringe","boss","david","perfect","joker"}; // pack of words

void pic(int nMaxTries) //for what...
{
    switch (nMaxTries)
    {
        case 0:

        break;
        case 1:
            printf("\n     ______     ");
            printf("\n     |    ||    ");
            printf("\n     |    ||    ");
            printf("\n     O    ||    ");
            printf("\n          ||    ");
            printf("\n          ||    ");
            printf("\n          ||    ");
            printf("\n----------------");
            printf("\n----------------");
            break;
        case 2:
            printf("\n     ______     ");
            printf("\n     |    ||    ");
            printf("\n     |    ||    ");
            printf("\n     O    ||    ");
            printf("\n    /     ||    ");
            printf("\n          ||    ");
            printf("\n          ||    ");
            printf("\n----------------");
            printf("\n----------------");
            break;
        case 3:
            printf("\n     ______     ");
            printf("\n     |    ||    ");
            printf("\n     |    ||    ");
            printf("\n     O    ||    ");
            printf("\n    / \\   ||    ");
            printf("\n          ||    ");
            printf("\n          ||    ");
            printf("\n----------------");
            printf("\n----------------");
            break;
        case 4:
            printf("\n     ______     ");
            printf("\n     |    ||    ");
            printf("\n     |    ||    ");
            printf("\n     O    ||    ");
            printf("\n    /|\\   ||    ");
            printf("\n          ||    ");
            printf("\n          ||    ");
            printf("\n----------------");
            printf("\n----------------");
            break;
        case 5:
            printf("\n     ______     ");
            printf("\n     |    ||    ");
            printf("\n     |    ||    ");
            printf("\n     O    ||    ");
            printf("\n    /|\\   ||    ");
            printf("\n    /     ||    ");
            printf("\n          ||    ");
            printf("\n----------------");
            printf("\n----------------");
            break;
        case 6:
            printf("\n     ______     ");
            printf("\n     |    ||    ");
            printf("\n     |    ||    ");
            printf("\n     O    ||    ");
            printf("\n    /|\\   ||    ");
            printf("\n    / \\   ||    ");
            printf("\n          ||    ");
            printf("\n----------------");
            printf("\n----------------");
            break;
        default:
            printf("\nbye! T_T");
            break;
    }
}




int main (){
    
    srand(time (NULL));//to get a new set of numbers every time you start
    int wordInd = rand() % 6; //index of the word
    const char *chWord = words[wordInd]; //word
    int wordLen = strlen(words[wordInd]);//length of the word
    char guess[wordLen + 1];
    char firGuess;
    char secGuess[wordLen];
    int nMaxTries = 0; //number of max attempts
    int nMaxMis = 6; //number of max mistakes

    printf("***Hangman Game***\n");   //just a little design
    printf("     ______     \n");
    printf("     |    ||    \n");
    printf("     |    ||    \n");
    printf("     O    ||    \n");
    printf("          ||    \n");
    printf("          ||    \n");
    printf("----------------\n");
    printf("----------------\n");


    for (int i = 0; i < wordLen; i++){
        guess[i] = '_';
    }
    while(nMaxTries < nMaxMis){ //game is starting
        printf("Current word: %s\n", guess);                                                                                
        printf("\nenter your letter: ");                                               
        scanf(" %c", &firGuess);                                                         
        int ans = 0;                                                                   
        for (int i = 0; i < wordLen; i++){  //checking correct answer or not
            if (chWord[i] == firGuess){
                guess[i] = firGuess;
                ans = 1;
            }
        }
        if(ans){  //correct answer or not
            printf("\nCool! go again!");
        }
        else{
            printf("\nNope.");
            nMaxTries++;
        }
        pic(nMaxTries);
        int check = 1; //checking the word
        for (int i = 0; i < wordLen; i++) {
            if (guess[i] == '_') {
                check = 0;
                break;
        }
        }
        if (check) {
            printf("\nYou win!!! The word was %s.", chWord);
            break;
        }
    }
    if(nMaxTries==nMaxMis){
        printf("\nYou lose!!! The word was %s.", chWord);
    }
    

    return 0;
}