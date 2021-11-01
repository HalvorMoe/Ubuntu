#include <stdio.h>
#include <stdlib.h>

int main (int iArgC, char *apszArgV[])
{
    int iNum = 0;

   if (iArgC < 2) {
      printf ("Usage: ex3 <number>\n");
      return 1;
   }
   iNum = atoi(apszArgV[1]);
   if (iNum == 0) {
      printf ("Please enter a non-zero argument.\n");
      return 1;
   }

   if ((iNum % 2) == 0) {
       printf("The number is even");
   } else {
       printf("The number is odd");
   }
   return 0;
}