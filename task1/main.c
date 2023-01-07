#include<stdio.h>//standard I/O header file
#include<string.h>//a header file of the C standard library containing functions for working with strings ending in 0 and various memory functions.
#include<time.h>//to work with date and time
#include<conio.h>//to work with the console
#include<stdlib.h>//standard library


/*int check(char *position,  char floor)     ***just garbage***
{
  while(*position)
    if(*position==floor) 
        return 1;
    else 
        position++;
  return 0;
}*/

int сheck(char firfloor, int num){    //checking floors
    char inNum;
    int floor;
    switch(firfloor){
        case 'B': 
            scanf(" %c", &inNum);
            switch (inNum)
            {
            case '1':
                floor = -1;
                break;
            case '2':
                floor = -2;
                break;
            case '3':
                floor = -3;
                break;
            default:
                floor = -7;
                break;
            }
            break;
        
        case 'G':
            floor = 0;
            break;
        case '1': 
            floor = 1;
            break;
        case '2':
            floor = 2;
            break;
        case '3':
            floor = 3;
            break;
        case '4':
            floor = 4;
            break;
        case '5':
            floor = 5;
            break;
        default:
            floor = -7;
        break;
    }
    return floor;
}

int main(void){
    char firfloor = 'G'; //first floor
    int floor;
    int num = 0; 
    char ch;
    printf("Should I call the elevator? y/n: ");
    scanf("%c", &ch);
    if (ch=='y'){
        printf("wait please.");
        printf(".");
        sleep(1);  //we need to wait
        printf(".");
        sleep(1);  //more wait
        printf(".");
        sleep(1);  //perfect
        printf("\nthe doors are opening, be careful");
        printf("\nyou are on the %c floor", firfloor);
        while(firfloor!='o'){
            printf("\nplease enter the floor:");
            scanf(" %c", &firfloor);
        
            floor = сheck(firfloor, num); //checking
            if(floor == -7){
                printf("\nplease write the correct floor.");
            }
            else if(num == floor){
                printf("\nYou are already here!");
            }
            else{
                num=floor;
            }
            printf("\nthe doors are closing be careful");
            printf("\nwait please");
            printf(".");
            sleep(1);  //we need to wait
            printf(".");
            sleep(1);  //more wait
            printf(".");
            sleep(1);  //perfect... im tired boss
            printf("\nthe doors are opening, be careful"); 
            printf("\nYou are currently on the %d. floor.", num);
        }
        
    }   
    else if (ch=='n'){
        printf("bye");
    }
    else
        printf("wi dont understand");
    return 0;
}