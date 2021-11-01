#include <stdio.h>
#include <stdlib.h>

void Bubblesort(int aiArray[], int iSze);
void Swap(int *pi, int *pj);
void PrintArray(int aiArray[], int iSze);

int main(int iArgC, char *apszArgV[])
{
    int *aiNumbers = NULL;
    int iCount = iArgC - 1;

    if (iArgC < 2)
    {
        printf("Usage: ex4 <number1> <number2> ... <numberN>\n");
        return 1;
    }

    aiNumbers = (int *) malloc (iCount * sizeof(int));
    if (aiNumbers == NULL)
        return 1;

    for (int i = 0; i < iCount; i++)
    {
        aiNumbers[i] = atoi(apszArgV[i + 1]);
    }

    Bubblesort(aiNumbers, iCount);

    PrintArray(aiNumbers, iCount);

    free(aiNumbers);

    return 0;
}

#define FALSE 0
#define TRUE 1

void Bubblesort (int aiArray[], int iSze)
{
    int bHasSwapped = TRUE;
    while (bHasSwapped)
    {
        bHasSwapped = FALSE;
        for (int i = 1; i < iSze; i++)
        {
            if (aiArray[i - 1] > aiArray[i])
            {
                Swap(&aiArray[i - 1], &aiArray[i]);
                bHasSwapped = TRUE;
                PrintArray (aiArray, iSze);
            }
        }
    }
}

void Swap(int *pi, int *pj)
{
    int iTmp = *pi;
    *pi = *pj;
    *pj = iTmp;
}

void PrintArray(int aiArray[], int iSze)
{
    printf("%d: ", iSze);
    for (int i = 0; i < iSze; i++)
    {
        printf("%d ", aiArray[i]);
    }
    printf("\n");
}