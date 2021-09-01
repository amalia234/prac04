#include <stdio.h>
#include "order.h"

void asc2(int* piNum1, int* piNum2)
{
    int temp;
    if (*piNum1 > *piNum2)
    {
        temp = *piNum1;
        *piNum1 = *piNum2;
    //    *piNum3 = temp;
    }
}

void asc3(int* piNum1, int* piNum2, int* piNum3)
{
    asc2(piNum1, piNum2);
    asc2(piNum1, piNum3);
    asc2(piNum2, piNum3);
}

void dsc2(int* piNum1, int* piNum2)
{
    asc2(piNum2, piNum1);
}

//void dsc3(int* piNum1, int* piNum2, int* piNum3)
//{
//    asc2(piNum3, piNum1);
//    asc2(piNum3, piNum2);
//    asc2(piNum1, piNum2);    
//}

void readInts(int* piNum1, int* piNum2, char* pcOrder)
{
    printf("Enter two numbers: ");
    scanf("%d %d", piNum1, piNum2);
    printf("Enter the ordering (A/D): ");
    scanf(" %c", pcOrder);
}

typedef void (*FuncptrT)(int*, int*);

FuncptrT getOrderingFunc(char cOrder)
{
    FuncptrT tempPtr = NULL;

    if (cOrder == 'A')
    {
        tempPtr = &asc2; /* void (*) (int*. int*) */
    }
    else if (cOrder == 'D')
    {
        tempPtr = &dsc2; /* void (*)(int*, int*) */
    }
    return tempPtr;
}
