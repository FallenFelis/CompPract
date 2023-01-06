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

int Check(char firfloor, int num){    //checking floors
    int floor;
    char inNum;
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
                floor = -10;
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
        case 'x':
            floor=num;
            break;
        default:
            floor = -10;
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
        while(firfloor!='o'){
            printf("\nyou are on the %c floor", firfloor);
            printf("\nplease enter the floor:");
            scanf(" %c", &firfloor);
        
            floor = Check(firfloor, num); //checking
                if(floor == -10){
                    printf("please write the correct floor.\n");
                }
                else if(num == floor && firfloor !='x'){
                    printf("You are already here!\n");
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
                    printf("You are currently on the %d. floor.\n", num);
        }
    }   
    else if (ch=='n'){
        printf("bye");
    }
    else
        printf("wi dont understand");
}