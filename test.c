#include <stdio.h>

int check(int massive[], int chsl) {
    int i;
    for (i=0;i<5;i++)
    {
        if (chsl==massive[i])
            return 1;
    }
    return 0;
}

int main() {
int massive[5] = {5,4,7,2,3};
int chsl,l;
printf ("enter num ");
scanf ("%i",&chsl);
l=check(massive,chsl);
if (l==0)
    printf ("we have");
else
    printf ("no have");
    return 0;
}