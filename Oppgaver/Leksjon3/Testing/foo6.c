#include <stdio.h>

int Fibonacci(int n);

int main(int iArgC, char *apszArgV[])
{
    int iNum;

    if (iArgC < 2){
        printf ("Usage: ex6 <number>\n");
        return 1;
    }
    iNum = atoi(apszArgV[1]);

    if (iNum == 0){
        printf("Please enter a non-zero argument");
        return 1;
    }

    printf ("Fibonacci number a[%d] = %d.\n", iNum, Fibonacci(iNum));

    /* for (int i = 1; i < 100; i++){
        printf("Fibbonacci number a[%d] = %d.\n", i, Fibonacci(i));
    }
 */
}

// Fibonacci series:
// a[n] = a[n-1] + a[n-2]
// a[0] = 0
// a[1] = 1

int Fibonacci(int n) {
    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 1;
    }

    return Fibonacci(n-1) + Fibonacci(n-2);
}