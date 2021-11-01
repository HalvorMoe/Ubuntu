#include <stdio.h>

int addNumbers(int a, int b);

int main(int argc, char *argv[])
{

    int result;

    int (*myfunc_ptr) (int, int);

    myfunc_ptr = &addNumbers;


    result = myfunc_ptr(3, 7);
    printf("result = %d\n", result);

 return 0;   
}

int addNumbers(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}