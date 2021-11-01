#include <stdio.h>

void main(void)
{
    /* int a, b;
    printf("Type two integers seperated with space\n");
    scanf("%d %d", &a, &b);
    printf("The numbers are %d, %d \n", a,b); */
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Type two integers seperated with space\n");
    scanf("%d %d", pa, pb);
    printf("The numbers are %d, %d \n", a,b);

}