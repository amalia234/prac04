//A/N: friday tutor also wrote this out as an example of how to do Q.FIVE Command Line Arguments i think

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    /*argv => {"./prog", "2", "1", "10", "30"};*/

    /*char arrStrs[][3] = {"2", "1", "10", "30"};*/
    int* arriNums = (int*) malloc(sizeof(int) * (argc-1));

    int i;
    for (i=1 ; i < argc; i++)
    {
        arriNums[i-1] = atoi(argv[i]);
    }

    for (i=1 ; i < argc-1; i++)
    {
        printf("%d ", arriNums[i]);
    }
    printf("\n");

    free(arriNums);

    return 0;
}
