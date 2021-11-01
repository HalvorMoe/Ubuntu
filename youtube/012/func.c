#include <stdio.h>

int addNumbers(int a, int b);


int main(int argc, char *argv[])
{
    int result;

    result = addNumbers(10, 20);
    printf("sum is = %d\n", result);
    return 0;
}

int addNumbers(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}