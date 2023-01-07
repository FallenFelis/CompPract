#include<stdio.h>//standard I/O header file
#include<string.h>//a header file of the C standard library containing functions for working with strings ending in 0 and various memory functions.
#include<time.h>//to work with date and time
#include<conio.h>//to work with the console
#include<stdlib.h>//standard library


int main (){
    const char *words[7] = {"artur","beautiful","cringe","boss","david","perfect","joker"}; // pack of words
    srand(time (NULL));//to get a new set of numbers every time you start
    int wordind = rand() % 7;
    int wordlen = strlen(words[wordind])


}