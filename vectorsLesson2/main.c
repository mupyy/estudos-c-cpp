/****************************************************************
by: Victor Mielitz
date: 12/11/2022

program desc:

this programs reads 10 elements of the A vector(array of the type
vector) then constructs a B vector with the same elements of A vec
tor but inverted, so, the first element of vector A will be the
last element in vector B, the second element of vector A will be
the penultimate of the vector B, and so goes on.

*****************************************************************/
#include <stdio.h>

int vectorA[10], vectorB[10], i;
i = 0;

int main()
{
    while (i < 10)
    {
        printf("Insert a value for the %d position of the vectorA", i);
        scanf("%d", &vectorA[i]);
        i++;
    }
    i = 10;
    while (i > 0)
    {

        i--;
    }
}
