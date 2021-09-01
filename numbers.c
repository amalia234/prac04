#include <stdio.h>
#include "order.h"

int main()
{
    int iNum1 = 0, iNum2 = 0;
    char cOrder = ' ';

    readInts(&iNum1, &iNum2, &cOrder);

    FuncptrT fptr = getOrderingFunc(cOrder);
    if (fptr != NULL)

    printf("%d %d\n", iNum1, iNum2);
}
