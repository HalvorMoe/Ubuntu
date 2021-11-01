#include <stdio.h>

void main(void)
{
    int iBottles;

    for (iBottles = 99; iBottles > 0; iBottles--) {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", iBottles, iBottles);
        if (iBottles > 1) {
            printf ("Take one down and pass it around, %d bottles of beer on the wall.\n", iBottles - 1);
        }
        else {
            printf("Take one down and pass it around, no more bottles of beer on the wall.");
        }
    }
    printf("No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall.");
}