#include <stdio.h>

void main(void)
{
    int *pInt;
    char *pChar;
    short *pShort;
    double *pDouble;

    printf("The size of pointers are %lu, %lu, %lu, %lu respectively \n",
           sizeof(pInt), sizeof(pChar), sizeof(pShort), sizeof(pDouble));

    printf("The size of variables are %lu, %lu, %lu, %lu respectively \n",
           sizeof(*pInt), sizeof(*pChar), sizeof(*pShort), sizeof(*pDouble));
}

