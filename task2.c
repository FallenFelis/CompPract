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
            printf("     ______     \n");
            printf("     |    ||    \n");
            printf("     |    ||    \n");
            printf("     O    ||    \n");
            printf("          ||    \n");
            printf("          ||    \n");
            printf("          ||    \n");
            printf("----------------\n");
            printf("----------------\n");
            break;
        case 2:
            printf("     ______     \n");
            printf("     |    ||    \n");
            printf("     |    ||    \n");
            printf("     O    ||    \n");
            printf("    /     ||    \n");
            printf("          ||    \n");
            printf("          ||    \n");
            printf("----------------\n");
            printf("----------------\n");
            break;
        case 3:
            printf("     ______     \n");
            printf("     |    ||    \n");
            printf("     |    ||    \n");
            printf("     O    ||    \n");
            printf("    / \\  ||    \n");
            printf("          ||    \n");
            printf("          ||    \n");
            printf("----------------\n");
            printf("----------------\n");
            break;
        case 4:
            printf("     ______     \n");
            printf("     |    ||    \n");
            printf("     |    ||    \n");
            printf("     O    ||    \n");
            printf("    /|\\  ||    \n");
            printf("          ||    \n");
            printf("          ||    \n");
            printf("----------------\n");
            printf("----------------\n");
            break;
        case 5:
            printf("     ______     \n");
            printf("     |    ||    \n");
            printf("     |    ||    \n");
            printf("     O    ||    \n");
            printf("    /|\\  ||    \n");
            printf("    /     ||    \n");
            printf("          ||    \n");
            printf("----------------\n");
            printf("----------------\n");
            printf("----------------\n");
            break;
        case 6:
            printf("     ______     \n");
            printf("     |    ||    \n");
            printf("     |    ||    \n");
            printf("     O    ||    \n");
            printf("    /|\\  ||    \n");
            printf("    / \\  ||    \n");
            printf("          ||    \n");
            printf("----------------\n");
            printf("----------------\n");
            break;
        default:
            printf("bye! T_T\n");
            break;
    }
}




int main (){
    
    srand(time (NULL));//to get a new set of numbers every time you start
    int wordInd = rand() % 7; //index of the word
    int wordLen = strlen(words[wordInd]); //length of the word
    char *chWord = *words[rand() % wordInd]; //word
    char guess[wordLen + 1]; 
    char mGuess;
    int nMaxTries = 0;

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
    while(nMaxTries < 6){ //game is starting
        int ans = 0;
        printf("word for you: %s\n", guess);
        printf("enter your letter: ");
        scanf(" %c", &mGuess);
        for (int i = 0; i < wordLen; i++){
            if (chWord[i] == mGuess) 
                guess[i] = mGuess;
                ans = 1;

        }
        if(ans==1)  //correct answer or not
            printf("Cool! go again!");
        else
            printf("Nope.");
            nMaxTries++;
        pic(nMaxTries);
        int check = 1; //checking the word
        for (int i = 0; i < wordLen; i++) {
            if (guess[i] == '_') {
                check = 0;
                break;
        }
        }
        if (check==1) {
            printf("You win!!! The word was %s.\n", chWord);
            break;
        }
    }
    

    return 0;
}